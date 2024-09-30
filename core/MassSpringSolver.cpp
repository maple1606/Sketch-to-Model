#include "MassSpringSolver.h"
#include <iostream>
#include <cassert>

// S Y S T E M //////////////////////////////////////////////////////////////////////////////////////
mass_spring_system::mass_spring_system(
	unsigned int n_points,
	unsigned int n_springs,
	float time_step,
	EdgeList spring_list,
	VectorXf rest_lengths,
	VectorXf stiffnesses,
	VectorXf masses,
	VectorXf fext,
	float damping_factor
)
	: n_points(n_points), n_springs(n_springs),
	time_step(time_step), spring_list(spring_list),
	rest_lengths(rest_lengths), stiffnesses(stiffnesses), masses(masses),
	fext(fext), damping_factor(damping_factor) {}

// S O L V E R //////////////////////////////////////////////////////////////////////////////////////
MassSpringSolver::MassSpringSolver(mass_spring_system* system, float* vbuff) 
	: system(system), current_state(vbuff, system->n_points * 3), 
	prev_state(current_state), spring_directions(system->n_springs * 3) {
	
	float h2 = system->time_step * system->time_step; // shorthand

	// compute M, L, J
	TripletList LTriplets, JTriplets;
	// L
	L.resize(3 * system->n_points, 3 * system->n_points);
	unsigned int k = 0; // spring counter
	for (Edge& i : system->spring_list) {
		for (int j = 0; j < 3; j++) {
			LTriplets.push_back(
				Triplet(3 * i.first + j, 3 * i.first  + j,  1 * system->stiffnesses[k]));
			LTriplets.push_back(
				Triplet(3 * i.first + j, 3 * i.second + j, -1 * system->stiffnesses[k]));
			LTriplets.push_back(
				Triplet(3 * i.second + j, 3 * i.first + j, -1 * system->stiffnesses[k]));
			LTriplets.push_back(
				Triplet(3 * i.second + j, 3 * i.second + j, 1 * system->stiffnesses[k]));
		}
		k++;
	}
	L.setFromTriplets(LTriplets.begin(), LTriplets.end());

	// J
	J.resize(3 * system->n_points, 3 * system->n_springs);
	k = 0; // spring counter
	for (Edge& i : system->spring_list) {
		for (unsigned int j = 0; j < 3; j++) {
			JTriplets.push_back(
				Triplet(3 * i.first  + j, 3 * k + j,  1 * system->stiffnesses[k]));
			JTriplets.push_back(
				Triplet(3 * i.second + j, 3 * k + j, -1 * system->stiffnesses[k]));
		}
		k++;
	}
	J.setFromTriplets(JTriplets.begin(), JTriplets.end());

	// M
	TripletList MTriplets;
	M.resize(3 * system->n_points, 3 * system->n_points);
	for (unsigned int i = 0; i < system->n_points; i++) {
		for (int j = 0; j < 3; j++) {
			MTriplets.push_back(Triplet(3 * i + j, 3 * i + j, system->masses[i]));
		}
	}
	M.setFromTriplets(MTriplets.begin(), MTriplets.end());
	
	// pre-factor system matrix
	SparseMatrix A = M + h2 * L;
	system_matrix.compute(A);
}

void MassSpringSolver::globalStep() {
	float h2 = system->time_step * system->time_step; // shorthand

	// compute right hand side
	VectorXf b = inertial_term
		+ h2 * J * spring_directions
		+ h2 * system->fext;

	// solve system and update state
	current_state = system_matrix.solve(b);
}

void MassSpringSolver::localStep() {
	unsigned int j = 0;
	for (Edge& i : system->spring_list) {
		Vector3f p12(
			current_state[3 * i.first + 0] - current_state[3 * i.second + 0],
			current_state[3 * i.first + 1] - current_state[3 * i.second + 1],
			current_state[3 * i.first + 2] - current_state[3 * i.second + 2]
		);

		p12.normalize();
		spring_directions[3 * j + 0] = 	system->rest_lengths[j] * p12[0];
		spring_directions[3 * j + 1] =	system->rest_lengths[j] * p12[1];
		spring_directions[3 * j + 2] =	system->rest_lengths[j] * p12[2];
		j++;
	}
}

void MassSpringSolver::solve(unsigned int n) {
	float a = system->damping_factor; // shorthand

	// update inertial term
	inertial_term = M * ((a + 1) * (current_state) - a * prev_state);

	// save current state in previous state
	prev_state = current_state;

	// perform steps
	for (unsigned int i = 0; i < n; i++) {
		localStep();
		globalStep();
	}
	
	/*
	// bones are arranged in bfs order
	std::cout << "Current state:\n";
	for (int i = 0; i < system->n_points; ++i) {
	std::cout << "Point " << i << ": ("
			<< current_state[3 * i] << ", "
			<< current_state[3 * i + 1] << ", "
			<< current_state[3 * i + 2] << ")\n";
	}
	*/

	// std::cout << current_state << std::endl;
}

void MassSpringSolver::timedSolve(unsigned int ms) {
	// TODO
}

std::vector<float> MassSpringSolver::get_current_state() {
	std::vector<float> vec;
	vec.clear();

	for (int i = 0; i < system->n_points; ++i) {
		vec.push_back(current_state[3 * i]);
		vec.push_back(current_state[3 * i + 1]);
		vec.push_back(current_state[3 * i + 2]);
	}
	return vec;
}

// B U I L D E R ////////////////////////////////////////////////////////////////////////////////////
void MassSpringBuilder::buildSpringBoneSystem(
    SSkel<SSNodeWithSubToyInfo> &sskel,
	float time_step,
	// float rest_length,
	float stiffness,
	float mass,
	float damping_factor,
	float gravity
) {
    int num_edges = static_cast<int>(sskel.edges.size());
	int num_nodes = static_cast<int>(sskel.nodes.size());
    unsigned int n = num_edges;

	// shorthand
	const double root2 = 1.41421356237;

	// compute n_points and n_springs
	unsigned int n_points = num_nodes;
	unsigned int n_springs = num_edges;

	// build mass list
	VectorXf masses(mass * VectorXf::Ones(n_springs));

	// build spring list and spring parameters
	EdgeList spring_list(n_springs);
	structI.reserve(2 * (n - 1) * n);

	VectorXf rest_lengths(n_springs);
	VectorXf stiffnesses(n_springs);
	unsigned int k = 0;

	// std::cout << "num edge: " << n << std::endl;

    for (int i = 0; i < n; ++i)
    {
		// std::cout << ":(\n";
        // EdgeT *edge = sskel.edges[i];
        // std::cout << sskel.edges[i]->node0->idx << " " << sskel.edges[i]->node1->idx << std::endl;'
		
        // structural spring
		spring_list[k] = Edge(sskel.edges[i]->node0->idx, sskel.edges[i]->node1->idx);
		rest_lengths[k] = (sskel.edges[i]->node0->pos - sskel.edges[i]->node1->pos).norm();
		stiffnesses[k] = stiffness;
		structI.push_back(k++);
    }

	// compute external forces
	VectorXf fext = Vector3f(0, 0, -gravity).replicate(n_points, 1);

	result = new mass_spring_system(n_points, n_springs, time_step, spring_list, rest_lengths,
		stiffnesses, masses, fext, damping_factor);
}

MassSpringBuilder::IndexList MassSpringBuilder::getStructIndex() { return structI; }
mass_spring_system* MassSpringBuilder::getResult() { return result; }

// C O N S T R A I N T //////////////////////////////////////////////////////////////////////////////
CgNode::CgNode(mass_spring_system* system, float* vbuff) : system(system), vbuff(vbuff) {}

// point node
CgPointNode::CgPointNode(mass_spring_system* system, float* vbuff) : CgNode(system, vbuff) {}
bool CgPointNode::accept(CgNodeVisitor& visitor) { return visitor.visit(*this); }

// spring node
CgSpringNode::CgSpringNode(mass_spring_system* system, float* vbuff) : CgNode(system, vbuff) {}
bool CgSpringNode::accept(CgNodeVisitor& visitor) {
	for (CgNode* child : children) {
		if (!child->accept(visitor)) return false;
	}
	return visitor.visit(*this);
}
void CgSpringNode::addChild(CgNode* node) { children.push_back(node); }
void CgSpringNode::removeChild(CgNode* node) { 
	children.erase(find(children.begin(), children.end(), node)); 
}

// root node
CgRootNode::CgRootNode(mass_spring_system* system, float* vbuff) : CgSpringNode(system, vbuff) {}
void CgRootNode::satisfy() { return; }
bool CgRootNode::accept(CgNodeVisitor& visitor) {
	for (CgNode* child : children) {
		if (!child->accept(visitor)) return false;
	}
	return true;
}

// point fix node
CgPointFixNode::CgPointFixNode(mass_spring_system* system, float* vbuff) 
	: CgPointNode(system, vbuff) {}
bool CgPointFixNode::query(unsigned int i) const { return fix_map.find(3 * i) != fix_map.end(); }
void CgPointFixNode::satisfy() {
	for (auto fix : fix_map)
		for (int i = 0; i < 3; i++)
			vbuff[fix.first + i] = fix.second[i];
}
void CgPointFixNode::fixPoint(unsigned int i) {
	assert(i >= 0 && i < system->n_points);
	fix_map[3 * i] = Vector3f(vbuff[3 * i], vbuff[3 * i + 1], vbuff[3 * i + 2]);
}
void CgPointFixNode::releasePoint(unsigned int i) { fix_map.erase(3 * i); }

// spring deformation node
CgSpringDeformationNode::CgSpringDeformationNode(mass_spring_system* system, float* vbuff,
	float tauc, unsigned int n_iter) : CgSpringNode(system, vbuff), tauc(tauc), n_iter(n_iter) {}
void CgSpringDeformationNode::satisfy() {
	for (int k = 0; k < n_iter; k++) {
		for (unsigned int i : items) {
			Edge spring = system->spring_list[i];
			CgQueryFixedPointVisitor visitor;

			Vector3f p12(
				vbuff[3 * spring.first + 0] - vbuff[3 * spring.second + 0],
				vbuff[3 * spring.first + 1] - vbuff[3 * spring.second + 1],
				vbuff[3 * spring.first + 2] - vbuff[3 * spring.second + 2]
			);

			float len = p12.norm();
			float rlen = system->rest_lengths[i];
			float diff = (len - (1 + tauc) * rlen) / len;
			float rate = (len - rlen) / rlen;

			// check deformation
			if (rate <= tauc) continue;

			// check if points are fixed
			float f1, f2;
			f1 = f2 = 0.5f;

			// if first point is fixed
			if (visitor.queryPoint(*this, spring.first)) { f1 = 0.0f; f2 = 1.0f; }

			// if second point is fixed
			if (visitor.queryPoint(*this, spring.second)) {
				f1 = (f1 != 0.0f ? 1.0f : 0.0f);
				f2 = 0.0f;
			}

			for (int j = 0; j < 3; j++) {
				vbuff[3 * spring.first + j] -= p12[j] * f1 * diff;
				vbuff[3 * spring.second + j] += p12[j] * f2 * diff;
			}
		}
	}
}
void CgSpringDeformationNode::addSprings(std::vector<unsigned int> springs) {
	items.insert(springs.begin(), springs.end());
}

// sphere collision node
CgSphereCollisionNode::CgSphereCollisionNode(mass_spring_system* system, float* vbuff,
	float radius, Vector3f center) : CgPointNode(system, vbuff), radius(radius), center(center) {}
bool CgSphereCollisionNode::query(unsigned int i) const { return false; }
void CgSphereCollisionNode::satisfy() {
	for (int i = 0; i < system->n_points; i++) {
		Vector3f p(
			vbuff[3 * i + 0] - center[0],
			vbuff[3 * i + 1] - center[1],
			vbuff[3 * i + 2] - center[2]
		);

		if (p.norm() < radius) {
			p.normalize();
			p = radius * p;
		}
		else continue;

		for (int j = 0; j < 3; j++) {
			vbuff[3 * i + j] = p[j] + center[j];
		}
	}
}

// node visitor
bool CgNodeVisitor::visit(CgPointNode& node) { return true; }
bool CgNodeVisitor::visit(CgSpringNode& node) { return true; }

// query fixed point visitor
bool CgQueryFixedPointVisitor::visit(CgPointNode& node) {
	queryResult = node.query(i);
	return !queryResult;
}
bool CgQueryFixedPointVisitor::queryPoint(CgNode& root, unsigned int i) {
	this->i = i;
	root.accept(*this);
	return queryResult;
}

// satisfy visitor
bool CgSatisfyVisitor::visit(CgPointNode& node) { node.satisfy(); return true; }
bool CgSatisfyVisitor::visit(CgSpringNode& node) { node.satisfy(); return true; }
void CgSatisfyVisitor::satisfy(CgNode& root) { root.accept(*this); }
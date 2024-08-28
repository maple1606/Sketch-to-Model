#include <iostream>
#include <vector>
#include <Eigen/Dense>

// Define a structure for particles
struct Particle {
    Eigen::Vector3d pos;    // Position of the particle
    Eigen::Vector3d vel;    // Velocity of the particle
    Eigen::Vector3d frc;    // Force accumulator
    double mass;            // Mass of the particle

    Particle(const Eigen::Vector3d& p, double m) : pos(p), mass(m) {
        vel = Eigen::Vector3d::Zero();
        frc = Eigen::Vector3d::Zero();
    }
};

// Define a structure for springs
struct Spring {
    int i, j;               // Indices of particles connected by the spring
    double restLength;      // Rest length of the spring
    Spring(int p1, int p2, double rl) : i(p1), j(p2), restLength(rl) {}
};

// Define a structure for simulation parameters
struct Params {
    double ks;     // Spring constant
    double kd;     // Damping coefficient
    double g;      // Gravity acceleration
    double dt;     // Time step
};

// Define a structure for objects that hold particles and springs
struct Object {
    std::vector<Particle> particles;  // List of particles
    std::vector<Spring> springs;      // List of springs
};

// Function to apply forces and integrate motion
void simulateSpringMassSystem(Object& obj, const Params& params) {
    // Step 1: Initialize forces and apply gravity
    for (auto& p : obj.particles) {
        p.frc = Eigen::Vector3d(0, 0, -p.mass * params.g); // Apply gravity
    }

    // Step 2: Compute and accumulate spring forces
    for (const auto& s : obj.springs) {
        Eigen::Vector3d d = obj.particles[s.i].pos - obj.particles[s.j].pos;
        double l = d.norm();  // Current length of the spring
        Eigen::Vector3d frc = params.ks * ((l / s.restLength) - 1.0) * d.normalized();

        // Damping force
        Eigen::Vector3d v_rel = obj.particles[s.i].vel - obj.particles[s.j].vel;
        frc += params.kd * (v_rel.dot(d) / d.norm()) * (d / l);

        // Apply spring forces to connected particles
        obj.particles[s.i].frc -= frc;
        obj.particles[s.j].frc += frc;
    }

    // Step 3: Time integration
    for (auto& p : obj.particles) {
        p.vel += params.dt * p.frc / p.mass; // Update velocity
        p.pos += params.dt * p.vel;          // Update position
    }

    // Step 4: Ground collision handling
    for (auto& p : obj.particles) {
        if (p.pos[2] < 0.0) { // If the particle is below the ground
            p.pos[2] = 0.0;  // Reset position to the ground level
            p.vel[2] = 0.0;  // Stop vertical motion
        }
    }
}

int main() {
    // Create simulation parameters
    Params params;
    params.ks = 10.0;  // Spring constant
    params.kd = 0.5;   // Damping coefficient
    params.g = 9.81;   // Gravity acceleration
    params.dt = 0.01;  // Time step

    // Create a simple cube object with particles and springs
    Object cube;
    double mass = 1.0;
    double restLength = 1.0;

    // Define particles (a simple cube with 8 vertices)
    cube.particles.push_back(Particle(Eigen::Vector3d(0, 0, 0), mass));
    cube.particles.push_back(Particle(Eigen::Vector3d(1, 0, 0), mass));
    cube.particles.push_back(Particle(Eigen::Vector3d(1, 1, 0), mass));
    cube.particles.push_back(Particle(Eigen::Vector3d(0, 1, 0), mass));
    cube.particles.push_back(Particle(Eigen::Vector3d(0, 0, 1), mass));
    cube.particles.push_back(Particle(Eigen::Vector3d(1, 0, 1), mass));
    cube.particles.push_back(Particle(Eigen::Vector3d(1, 1, 1), mass));
    cube.particles.push_back(Particle(Eigen::Vector3d(0, 1, 1), mass));

    // Define springs between particles
    cube.springs.push_back(Spring(0, 1, restLength));
    cube.springs.push_back(Spring(1, 2, restLength));
    cube.springs.push_back(Spring(2, 3, restLength));
    cube.springs.push_back(Spring(3, 0, restLength));
    cube.springs.push_back(Spring(4, 5, restLength));
    cube.springs.push_back(Spring(5, 6, restLength));
    cube.springs.push_back(Spring(6, 7, restLength));
    cube.springs.push_back(Spring(7, 4, restLength));
    cube.springs.push_back(Spring(0, 4, restLength));
    cube.springs.push_back(Spring(1, 5, restLength));
    cube.springs.push_back(Spring(2, 6, restLength));
    cube.springs.push_back(Spring(3, 7, restLength));

    // Run the simulation for 1000 steps
    for (int i = 0; i < 1000; i++) {
        simulateSpringMassSystem(cube, params);

        // Print the positions of the particles
        for (const auto& p : cube.particles) {
            std::cout << "Particle position: " << p.pos.transpose() << std::endl;
        }
    }

    return 0;
}

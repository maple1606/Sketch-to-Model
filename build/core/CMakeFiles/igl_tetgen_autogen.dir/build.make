# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lemoontear/github/RealSkel

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lemoontear/github/RealSkel/build

# Utility rule file for igl_tetgen_autogen.

# Include any custom commands dependencies for this target.
include core/CMakeFiles/igl_tetgen_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include core/CMakeFiles/igl_tetgen_autogen.dir/progress.make

core/CMakeFiles/igl_tetgen_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/lemoontear/github/RealSkel/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target igl_tetgen"
	cd /home/lemoontear/github/RealSkel/build/core && /usr/bin/cmake -E cmake_autogen /home/lemoontear/github/RealSkel/build/core/CMakeFiles/igl_tetgen_autogen.dir/AutogenInfo.json RELEASE

igl_tetgen_autogen: core/CMakeFiles/igl_tetgen_autogen
igl_tetgen_autogen: core/CMakeFiles/igl_tetgen_autogen.dir/build.make
.PHONY : igl_tetgen_autogen

# Rule to build all files generated by this target.
core/CMakeFiles/igl_tetgen_autogen.dir/build: igl_tetgen_autogen
.PHONY : core/CMakeFiles/igl_tetgen_autogen.dir/build

core/CMakeFiles/igl_tetgen_autogen.dir/clean:
	cd /home/lemoontear/github/RealSkel/build/core && $(CMAKE_COMMAND) -P CMakeFiles/igl_tetgen_autogen.dir/cmake_clean.cmake
.PHONY : core/CMakeFiles/igl_tetgen_autogen.dir/clean

core/CMakeFiles/igl_tetgen_autogen.dir/depend:
	cd /home/lemoontear/github/RealSkel/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lemoontear/github/RealSkel /home/lemoontear/github/RealSkel/core /home/lemoontear/github/RealSkel/build /home/lemoontear/github/RealSkel/build/core /home/lemoontear/github/RealSkel/build/core/CMakeFiles/igl_tetgen_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : core/CMakeFiles/igl_tetgen_autogen.dir/depend


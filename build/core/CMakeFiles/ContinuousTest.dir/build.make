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

# Utility rule file for ContinuousTest.

# Include any custom commands dependencies for this target.
include core/CMakeFiles/ContinuousTest.dir/compiler_depend.make

# Include the progress variables for this target.
include core/CMakeFiles/ContinuousTest.dir/progress.make

core/CMakeFiles/ContinuousTest:
	cd /home/lemoontear/github/RealSkel/build/core && /usr/bin/ctest -D ContinuousTest

ContinuousTest: core/CMakeFiles/ContinuousTest
ContinuousTest: core/CMakeFiles/ContinuousTest.dir/build.make
.PHONY : ContinuousTest

# Rule to build all files generated by this target.
core/CMakeFiles/ContinuousTest.dir/build: ContinuousTest
.PHONY : core/CMakeFiles/ContinuousTest.dir/build

core/CMakeFiles/ContinuousTest.dir/clean:
	cd /home/lemoontear/github/RealSkel/build/core && $(CMAKE_COMMAND) -P CMakeFiles/ContinuousTest.dir/cmake_clean.cmake
.PHONY : core/CMakeFiles/ContinuousTest.dir/clean

core/CMakeFiles/ContinuousTest.dir/depend:
	cd /home/lemoontear/github/RealSkel/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lemoontear/github/RealSkel /home/lemoontear/github/RealSkel/core /home/lemoontear/github/RealSkel/build /home/lemoontear/github/RealSkel/build/core /home/lemoontear/github/RealSkel/build/core/CMakeFiles/ContinuousTest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : core/CMakeFiles/ContinuousTest.dir/depend


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

# Utility rule file for NightlyMemCheck.

# Include any custom commands dependencies for this target.
include core/CMakeFiles/NightlyMemCheck.dir/compiler_depend.make

# Include the progress variables for this target.
include core/CMakeFiles/NightlyMemCheck.dir/progress.make

core/CMakeFiles/NightlyMemCheck:
	cd /home/lemoontear/github/RealSkel/build/core && /usr/bin/ctest -D NightlyMemCheck

NightlyMemCheck: core/CMakeFiles/NightlyMemCheck
NightlyMemCheck: core/CMakeFiles/NightlyMemCheck.dir/build.make
.PHONY : NightlyMemCheck

# Rule to build all files generated by this target.
core/CMakeFiles/NightlyMemCheck.dir/build: NightlyMemCheck
.PHONY : core/CMakeFiles/NightlyMemCheck.dir/build

core/CMakeFiles/NightlyMemCheck.dir/clean:
	cd /home/lemoontear/github/RealSkel/build/core && $(CMAKE_COMMAND) -P CMakeFiles/NightlyMemCheck.dir/cmake_clean.cmake
.PHONY : core/CMakeFiles/NightlyMemCheck.dir/clean

core/CMakeFiles/NightlyMemCheck.dir/depend:
	cd /home/lemoontear/github/RealSkel/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lemoontear/github/RealSkel /home/lemoontear/github/RealSkel/core /home/lemoontear/github/RealSkel/build /home/lemoontear/github/RealSkel/build/core /home/lemoontear/github/RealSkel/build/core/CMakeFiles/NightlyMemCheck.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : core/CMakeFiles/NightlyMemCheck.dir/depend


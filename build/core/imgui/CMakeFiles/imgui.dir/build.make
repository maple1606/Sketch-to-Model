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

# Include any dependencies generated for this target.
include core/imgui/CMakeFiles/imgui.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include core/imgui/CMakeFiles/imgui.dir/compiler_depend.make

# Include the progress variables for this target.
include core/imgui/CMakeFiles/imgui.dir/progress.make

# Include the compile flags for this target's objects.
include core/imgui/CMakeFiles/imgui.dir/flags.make

core/imgui/CMakeFiles/imgui.dir/imgui_autogen/mocs_compilation.cpp.o: core/imgui/CMakeFiles/imgui.dir/flags.make
core/imgui/CMakeFiles/imgui.dir/imgui_autogen/mocs_compilation.cpp.o: core/imgui/imgui_autogen/mocs_compilation.cpp
core/imgui/CMakeFiles/imgui.dir/imgui_autogen/mocs_compilation.cpp.o: core/imgui/CMakeFiles/imgui.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lemoontear/github/RealSkel/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object core/imgui/CMakeFiles/imgui.dir/imgui_autogen/mocs_compilation.cpp.o"
	cd /home/lemoontear/github/RealSkel/build/core/imgui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT core/imgui/CMakeFiles/imgui.dir/imgui_autogen/mocs_compilation.cpp.o -MF CMakeFiles/imgui.dir/imgui_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/imgui.dir/imgui_autogen/mocs_compilation.cpp.o -c /home/lemoontear/github/RealSkel/build/core/imgui/imgui_autogen/mocs_compilation.cpp

core/imgui/CMakeFiles/imgui.dir/imgui_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/imgui.dir/imgui_autogen/mocs_compilation.cpp.i"
	cd /home/lemoontear/github/RealSkel/build/core/imgui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lemoontear/github/RealSkel/build/core/imgui/imgui_autogen/mocs_compilation.cpp > CMakeFiles/imgui.dir/imgui_autogen/mocs_compilation.cpp.i

core/imgui/CMakeFiles/imgui.dir/imgui_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/imgui.dir/imgui_autogen/mocs_compilation.cpp.s"
	cd /home/lemoontear/github/RealSkel/build/core/imgui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lemoontear/github/RealSkel/build/core/imgui/imgui_autogen/mocs_compilation.cpp -o CMakeFiles/imgui.dir/imgui_autogen/mocs_compilation.cpp.s

core/imgui/CMakeFiles/imgui.dir/__/imgui/imgui.cpp.o: core/imgui/CMakeFiles/imgui.dir/flags.make
core/imgui/CMakeFiles/imgui.dir/__/imgui/imgui.cpp.o: ../external/libigl/external/imgui/imgui.cpp
core/imgui/CMakeFiles/imgui.dir/__/imgui/imgui.cpp.o: core/imgui/CMakeFiles/imgui.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lemoontear/github/RealSkel/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object core/imgui/CMakeFiles/imgui.dir/__/imgui/imgui.cpp.o"
	cd /home/lemoontear/github/RealSkel/build/core/imgui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT core/imgui/CMakeFiles/imgui.dir/__/imgui/imgui.cpp.o -MF CMakeFiles/imgui.dir/__/imgui/imgui.cpp.o.d -o CMakeFiles/imgui.dir/__/imgui/imgui.cpp.o -c /home/lemoontear/github/RealSkel/external/libigl/external/imgui/imgui.cpp

core/imgui/CMakeFiles/imgui.dir/__/imgui/imgui.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/imgui.dir/__/imgui/imgui.cpp.i"
	cd /home/lemoontear/github/RealSkel/build/core/imgui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lemoontear/github/RealSkel/external/libigl/external/imgui/imgui.cpp > CMakeFiles/imgui.dir/__/imgui/imgui.cpp.i

core/imgui/CMakeFiles/imgui.dir/__/imgui/imgui.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/imgui.dir/__/imgui/imgui.cpp.s"
	cd /home/lemoontear/github/RealSkel/build/core/imgui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lemoontear/github/RealSkel/external/libigl/external/imgui/imgui.cpp -o CMakeFiles/imgui.dir/__/imgui/imgui.cpp.s

core/imgui/CMakeFiles/imgui.dir/__/imgui/imgui_demo.cpp.o: core/imgui/CMakeFiles/imgui.dir/flags.make
core/imgui/CMakeFiles/imgui.dir/__/imgui/imgui_demo.cpp.o: ../external/libigl/external/imgui/imgui_demo.cpp
core/imgui/CMakeFiles/imgui.dir/__/imgui/imgui_demo.cpp.o: core/imgui/CMakeFiles/imgui.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lemoontear/github/RealSkel/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object core/imgui/CMakeFiles/imgui.dir/__/imgui/imgui_demo.cpp.o"
	cd /home/lemoontear/github/RealSkel/build/core/imgui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT core/imgui/CMakeFiles/imgui.dir/__/imgui/imgui_demo.cpp.o -MF CMakeFiles/imgui.dir/__/imgui/imgui_demo.cpp.o.d -o CMakeFiles/imgui.dir/__/imgui/imgui_demo.cpp.o -c /home/lemoontear/github/RealSkel/external/libigl/external/imgui/imgui_demo.cpp

core/imgui/CMakeFiles/imgui.dir/__/imgui/imgui_demo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/imgui.dir/__/imgui/imgui_demo.cpp.i"
	cd /home/lemoontear/github/RealSkel/build/core/imgui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lemoontear/github/RealSkel/external/libigl/external/imgui/imgui_demo.cpp > CMakeFiles/imgui.dir/__/imgui/imgui_demo.cpp.i

core/imgui/CMakeFiles/imgui.dir/__/imgui/imgui_demo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/imgui.dir/__/imgui/imgui_demo.cpp.s"
	cd /home/lemoontear/github/RealSkel/build/core/imgui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lemoontear/github/RealSkel/external/libigl/external/imgui/imgui_demo.cpp -o CMakeFiles/imgui.dir/__/imgui/imgui_demo.cpp.s

core/imgui/CMakeFiles/imgui.dir/__/imgui/imgui_draw.cpp.o: core/imgui/CMakeFiles/imgui.dir/flags.make
core/imgui/CMakeFiles/imgui.dir/__/imgui/imgui_draw.cpp.o: ../external/libigl/external/imgui/imgui_draw.cpp
core/imgui/CMakeFiles/imgui.dir/__/imgui/imgui_draw.cpp.o: core/imgui/CMakeFiles/imgui.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lemoontear/github/RealSkel/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object core/imgui/CMakeFiles/imgui.dir/__/imgui/imgui_draw.cpp.o"
	cd /home/lemoontear/github/RealSkel/build/core/imgui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT core/imgui/CMakeFiles/imgui.dir/__/imgui/imgui_draw.cpp.o -MF CMakeFiles/imgui.dir/__/imgui/imgui_draw.cpp.o.d -o CMakeFiles/imgui.dir/__/imgui/imgui_draw.cpp.o -c /home/lemoontear/github/RealSkel/external/libigl/external/imgui/imgui_draw.cpp

core/imgui/CMakeFiles/imgui.dir/__/imgui/imgui_draw.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/imgui.dir/__/imgui/imgui_draw.cpp.i"
	cd /home/lemoontear/github/RealSkel/build/core/imgui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lemoontear/github/RealSkel/external/libigl/external/imgui/imgui_draw.cpp > CMakeFiles/imgui.dir/__/imgui/imgui_draw.cpp.i

core/imgui/CMakeFiles/imgui.dir/__/imgui/imgui_draw.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/imgui.dir/__/imgui/imgui_draw.cpp.s"
	cd /home/lemoontear/github/RealSkel/build/core/imgui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lemoontear/github/RealSkel/external/libigl/external/imgui/imgui_draw.cpp -o CMakeFiles/imgui.dir/__/imgui/imgui_draw.cpp.s

core/imgui/CMakeFiles/imgui.dir/__/imgui/imgui_widgets.cpp.o: core/imgui/CMakeFiles/imgui.dir/flags.make
core/imgui/CMakeFiles/imgui.dir/__/imgui/imgui_widgets.cpp.o: ../external/libigl/external/imgui/imgui_widgets.cpp
core/imgui/CMakeFiles/imgui.dir/__/imgui/imgui_widgets.cpp.o: core/imgui/CMakeFiles/imgui.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lemoontear/github/RealSkel/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object core/imgui/CMakeFiles/imgui.dir/__/imgui/imgui_widgets.cpp.o"
	cd /home/lemoontear/github/RealSkel/build/core/imgui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT core/imgui/CMakeFiles/imgui.dir/__/imgui/imgui_widgets.cpp.o -MF CMakeFiles/imgui.dir/__/imgui/imgui_widgets.cpp.o.d -o CMakeFiles/imgui.dir/__/imgui/imgui_widgets.cpp.o -c /home/lemoontear/github/RealSkel/external/libigl/external/imgui/imgui_widgets.cpp

core/imgui/CMakeFiles/imgui.dir/__/imgui/imgui_widgets.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/imgui.dir/__/imgui/imgui_widgets.cpp.i"
	cd /home/lemoontear/github/RealSkel/build/core/imgui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lemoontear/github/RealSkel/external/libigl/external/imgui/imgui_widgets.cpp > CMakeFiles/imgui.dir/__/imgui/imgui_widgets.cpp.i

core/imgui/CMakeFiles/imgui.dir/__/imgui/imgui_widgets.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/imgui.dir/__/imgui/imgui_widgets.cpp.s"
	cd /home/lemoontear/github/RealSkel/build/core/imgui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lemoontear/github/RealSkel/external/libigl/external/imgui/imgui_widgets.cpp -o CMakeFiles/imgui.dir/__/imgui/imgui_widgets.cpp.s

core/imgui/CMakeFiles/imgui.dir/__/imgui/examples/imgui_impl_glfw.cpp.o: core/imgui/CMakeFiles/imgui.dir/flags.make
core/imgui/CMakeFiles/imgui.dir/__/imgui/examples/imgui_impl_glfw.cpp.o: ../external/libigl/external/imgui/examples/imgui_impl_glfw.cpp
core/imgui/CMakeFiles/imgui.dir/__/imgui/examples/imgui_impl_glfw.cpp.o: core/imgui/CMakeFiles/imgui.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lemoontear/github/RealSkel/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object core/imgui/CMakeFiles/imgui.dir/__/imgui/examples/imgui_impl_glfw.cpp.o"
	cd /home/lemoontear/github/RealSkel/build/core/imgui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT core/imgui/CMakeFiles/imgui.dir/__/imgui/examples/imgui_impl_glfw.cpp.o -MF CMakeFiles/imgui.dir/__/imgui/examples/imgui_impl_glfw.cpp.o.d -o CMakeFiles/imgui.dir/__/imgui/examples/imgui_impl_glfw.cpp.o -c /home/lemoontear/github/RealSkel/external/libigl/external/imgui/examples/imgui_impl_glfw.cpp

core/imgui/CMakeFiles/imgui.dir/__/imgui/examples/imgui_impl_glfw.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/imgui.dir/__/imgui/examples/imgui_impl_glfw.cpp.i"
	cd /home/lemoontear/github/RealSkel/build/core/imgui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lemoontear/github/RealSkel/external/libigl/external/imgui/examples/imgui_impl_glfw.cpp > CMakeFiles/imgui.dir/__/imgui/examples/imgui_impl_glfw.cpp.i

core/imgui/CMakeFiles/imgui.dir/__/imgui/examples/imgui_impl_glfw.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/imgui.dir/__/imgui/examples/imgui_impl_glfw.cpp.s"
	cd /home/lemoontear/github/RealSkel/build/core/imgui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lemoontear/github/RealSkel/external/libigl/external/imgui/examples/imgui_impl_glfw.cpp -o CMakeFiles/imgui.dir/__/imgui/examples/imgui_impl_glfw.cpp.s

core/imgui/CMakeFiles/imgui.dir/__/imgui/examples/imgui_impl_opengl3.cpp.o: core/imgui/CMakeFiles/imgui.dir/flags.make
core/imgui/CMakeFiles/imgui.dir/__/imgui/examples/imgui_impl_opengl3.cpp.o: ../external/libigl/external/imgui/examples/imgui_impl_opengl3.cpp
core/imgui/CMakeFiles/imgui.dir/__/imgui/examples/imgui_impl_opengl3.cpp.o: core/imgui/CMakeFiles/imgui.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lemoontear/github/RealSkel/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object core/imgui/CMakeFiles/imgui.dir/__/imgui/examples/imgui_impl_opengl3.cpp.o"
	cd /home/lemoontear/github/RealSkel/build/core/imgui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT core/imgui/CMakeFiles/imgui.dir/__/imgui/examples/imgui_impl_opengl3.cpp.o -MF CMakeFiles/imgui.dir/__/imgui/examples/imgui_impl_opengl3.cpp.o.d -o CMakeFiles/imgui.dir/__/imgui/examples/imgui_impl_opengl3.cpp.o -c /home/lemoontear/github/RealSkel/external/libigl/external/imgui/examples/imgui_impl_opengl3.cpp

core/imgui/CMakeFiles/imgui.dir/__/imgui/examples/imgui_impl_opengl3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/imgui.dir/__/imgui/examples/imgui_impl_opengl3.cpp.i"
	cd /home/lemoontear/github/RealSkel/build/core/imgui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lemoontear/github/RealSkel/external/libigl/external/imgui/examples/imgui_impl_opengl3.cpp > CMakeFiles/imgui.dir/__/imgui/examples/imgui_impl_opengl3.cpp.i

core/imgui/CMakeFiles/imgui.dir/__/imgui/examples/imgui_impl_opengl3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/imgui.dir/__/imgui/examples/imgui_impl_opengl3.cpp.s"
	cd /home/lemoontear/github/RealSkel/build/core/imgui && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lemoontear/github/RealSkel/external/libigl/external/imgui/examples/imgui_impl_opengl3.cpp -o CMakeFiles/imgui.dir/__/imgui/examples/imgui_impl_opengl3.cpp.s

# Object files for target imgui
imgui_OBJECTS = \
"CMakeFiles/imgui.dir/imgui_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/imgui.dir/__/imgui/imgui.cpp.o" \
"CMakeFiles/imgui.dir/__/imgui/imgui_demo.cpp.o" \
"CMakeFiles/imgui.dir/__/imgui/imgui_draw.cpp.o" \
"CMakeFiles/imgui.dir/__/imgui/imgui_widgets.cpp.o" \
"CMakeFiles/imgui.dir/__/imgui/examples/imgui_impl_glfw.cpp.o" \
"CMakeFiles/imgui.dir/__/imgui/examples/imgui_impl_opengl3.cpp.o"

# External object files for target imgui
imgui_EXTERNAL_OBJECTS =

core/imgui/libimgui.a: core/imgui/CMakeFiles/imgui.dir/imgui_autogen/mocs_compilation.cpp.o
core/imgui/libimgui.a: core/imgui/CMakeFiles/imgui.dir/__/imgui/imgui.cpp.o
core/imgui/libimgui.a: core/imgui/CMakeFiles/imgui.dir/__/imgui/imgui_demo.cpp.o
core/imgui/libimgui.a: core/imgui/CMakeFiles/imgui.dir/__/imgui/imgui_draw.cpp.o
core/imgui/libimgui.a: core/imgui/CMakeFiles/imgui.dir/__/imgui/imgui_widgets.cpp.o
core/imgui/libimgui.a: core/imgui/CMakeFiles/imgui.dir/__/imgui/examples/imgui_impl_glfw.cpp.o
core/imgui/libimgui.a: core/imgui/CMakeFiles/imgui.dir/__/imgui/examples/imgui_impl_opengl3.cpp.o
core/imgui/libimgui.a: core/imgui/CMakeFiles/imgui.dir/build.make
core/imgui/libimgui.a: core/imgui/CMakeFiles/imgui.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lemoontear/github/RealSkel/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX static library libimgui.a"
	cd /home/lemoontear/github/RealSkel/build/core/imgui && $(CMAKE_COMMAND) -P CMakeFiles/imgui.dir/cmake_clean_target.cmake
	cd /home/lemoontear/github/RealSkel/build/core/imgui && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/imgui.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
core/imgui/CMakeFiles/imgui.dir/build: core/imgui/libimgui.a
.PHONY : core/imgui/CMakeFiles/imgui.dir/build

core/imgui/CMakeFiles/imgui.dir/clean:
	cd /home/lemoontear/github/RealSkel/build/core/imgui && $(CMAKE_COMMAND) -P CMakeFiles/imgui.dir/cmake_clean.cmake
.PHONY : core/imgui/CMakeFiles/imgui.dir/clean

core/imgui/CMakeFiles/imgui.dir/depend:
	cd /home/lemoontear/github/RealSkel/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lemoontear/github/RealSkel /home/lemoontear/github/RealSkel/external/libigl/external/libigl-imgui /home/lemoontear/github/RealSkel/build /home/lemoontear/github/RealSkel/build/core/imgui /home/lemoontear/github/RealSkel/build/core/imgui/CMakeFiles/imgui.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : core/imgui/CMakeFiles/imgui.dir/depend


# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/jguo/Nutstore Files/坚果云/C_ws"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/jguo/Nutstore Files/坚果云/C_ws/build"

# Include any dependencies generated for this target.
include CMakeFiles/divideANDconquer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/divideANDconquer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/divideANDconquer.dir/flags.make

CMakeFiles/divideANDconquer.dir/sort/divideANDconquer.cpp.o: CMakeFiles/divideANDconquer.dir/flags.make
CMakeFiles/divideANDconquer.dir/sort/divideANDconquer.cpp.o: ../sort/divideANDconquer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/jguo/Nutstore Files/坚果云/C_ws/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/divideANDconquer.dir/sort/divideANDconquer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/divideANDconquer.dir/sort/divideANDconquer.cpp.o -c "/home/jguo/Nutstore Files/坚果云/C_ws/sort/divideANDconquer.cpp"

CMakeFiles/divideANDconquer.dir/sort/divideANDconquer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/divideANDconquer.dir/sort/divideANDconquer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/jguo/Nutstore Files/坚果云/C_ws/sort/divideANDconquer.cpp" > CMakeFiles/divideANDconquer.dir/sort/divideANDconquer.cpp.i

CMakeFiles/divideANDconquer.dir/sort/divideANDconquer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/divideANDconquer.dir/sort/divideANDconquer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/jguo/Nutstore Files/坚果云/C_ws/sort/divideANDconquer.cpp" -o CMakeFiles/divideANDconquer.dir/sort/divideANDconquer.cpp.s

CMakeFiles/divideANDconquer.dir/sort/divideANDconquer.cpp.o.requires:

.PHONY : CMakeFiles/divideANDconquer.dir/sort/divideANDconquer.cpp.o.requires

CMakeFiles/divideANDconquer.dir/sort/divideANDconquer.cpp.o.provides: CMakeFiles/divideANDconquer.dir/sort/divideANDconquer.cpp.o.requires
	$(MAKE) -f CMakeFiles/divideANDconquer.dir/build.make CMakeFiles/divideANDconquer.dir/sort/divideANDconquer.cpp.o.provides.build
.PHONY : CMakeFiles/divideANDconquer.dir/sort/divideANDconquer.cpp.o.provides

CMakeFiles/divideANDconquer.dir/sort/divideANDconquer.cpp.o.provides.build: CMakeFiles/divideANDconquer.dir/sort/divideANDconquer.cpp.o


# Object files for target divideANDconquer
divideANDconquer_OBJECTS = \
"CMakeFiles/divideANDconquer.dir/sort/divideANDconquer.cpp.o"

# External object files for target divideANDconquer
divideANDconquer_EXTERNAL_OBJECTS =

divideANDconquer: CMakeFiles/divideANDconquer.dir/sort/divideANDconquer.cpp.o
divideANDconquer: CMakeFiles/divideANDconquer.dir/build.make
divideANDconquer: CMakeFiles/divideANDconquer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/jguo/Nutstore Files/坚果云/C_ws/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable divideANDconquer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/divideANDconquer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/divideANDconquer.dir/build: divideANDconquer

.PHONY : CMakeFiles/divideANDconquer.dir/build

CMakeFiles/divideANDconquer.dir/requires: CMakeFiles/divideANDconquer.dir/sort/divideANDconquer.cpp.o.requires

.PHONY : CMakeFiles/divideANDconquer.dir/requires

CMakeFiles/divideANDconquer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/divideANDconquer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/divideANDconquer.dir/clean

CMakeFiles/divideANDconquer.dir/depend:
	cd "/home/jguo/Nutstore Files/坚果云/C_ws/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/jguo/Nutstore Files/坚果云/C_ws" "/home/jguo/Nutstore Files/坚果云/C_ws" "/home/jguo/Nutstore Files/坚果云/C_ws/build" "/home/jguo/Nutstore Files/坚果云/C_ws/build" "/home/jguo/Nutstore Files/坚果云/C_ws/build/CMakeFiles/divideANDconquer.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/divideANDconquer.dir/depend

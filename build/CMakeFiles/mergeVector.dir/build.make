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
include CMakeFiles/mergeVector.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mergeVector.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mergeVector.dir/flags.make

CMakeFiles/mergeVector.dir/sort/mergeVector.cpp.o: CMakeFiles/mergeVector.dir/flags.make
CMakeFiles/mergeVector.dir/sort/mergeVector.cpp.o: ../sort/mergeVector.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/jguo/Nutstore Files/坚果云/C_ws/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mergeVector.dir/sort/mergeVector.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/mergeVector.dir/sort/mergeVector.cpp.o -c "/home/jguo/Nutstore Files/坚果云/C_ws/sort/mergeVector.cpp"

CMakeFiles/mergeVector.dir/sort/mergeVector.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mergeVector.dir/sort/mergeVector.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/jguo/Nutstore Files/坚果云/C_ws/sort/mergeVector.cpp" > CMakeFiles/mergeVector.dir/sort/mergeVector.cpp.i

CMakeFiles/mergeVector.dir/sort/mergeVector.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mergeVector.dir/sort/mergeVector.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/jguo/Nutstore Files/坚果云/C_ws/sort/mergeVector.cpp" -o CMakeFiles/mergeVector.dir/sort/mergeVector.cpp.s

CMakeFiles/mergeVector.dir/sort/mergeVector.cpp.o.requires:

.PHONY : CMakeFiles/mergeVector.dir/sort/mergeVector.cpp.o.requires

CMakeFiles/mergeVector.dir/sort/mergeVector.cpp.o.provides: CMakeFiles/mergeVector.dir/sort/mergeVector.cpp.o.requires
	$(MAKE) -f CMakeFiles/mergeVector.dir/build.make CMakeFiles/mergeVector.dir/sort/mergeVector.cpp.o.provides.build
.PHONY : CMakeFiles/mergeVector.dir/sort/mergeVector.cpp.o.provides

CMakeFiles/mergeVector.dir/sort/mergeVector.cpp.o.provides.build: CMakeFiles/mergeVector.dir/sort/mergeVector.cpp.o


# Object files for target mergeVector
mergeVector_OBJECTS = \
"CMakeFiles/mergeVector.dir/sort/mergeVector.cpp.o"

# External object files for target mergeVector
mergeVector_EXTERNAL_OBJECTS =

mergeVector: CMakeFiles/mergeVector.dir/sort/mergeVector.cpp.o
mergeVector: CMakeFiles/mergeVector.dir/build.make
mergeVector: CMakeFiles/mergeVector.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/jguo/Nutstore Files/坚果云/C_ws/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable mergeVector"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/mergeVector.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mergeVector.dir/build: mergeVector

.PHONY : CMakeFiles/mergeVector.dir/build

CMakeFiles/mergeVector.dir/requires: CMakeFiles/mergeVector.dir/sort/mergeVector.cpp.o.requires

.PHONY : CMakeFiles/mergeVector.dir/requires

CMakeFiles/mergeVector.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/mergeVector.dir/cmake_clean.cmake
.PHONY : CMakeFiles/mergeVector.dir/clean

CMakeFiles/mergeVector.dir/depend:
	cd "/home/jguo/Nutstore Files/坚果云/C_ws/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/jguo/Nutstore Files/坚果云/C_ws" "/home/jguo/Nutstore Files/坚果云/C_ws" "/home/jguo/Nutstore Files/坚果云/C_ws/build" "/home/jguo/Nutstore Files/坚果云/C_ws/build" "/home/jguo/Nutstore Files/坚果云/C_ws/build/CMakeFiles/mergeVector.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/mergeVector.dir/depend

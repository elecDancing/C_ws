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
include CMakeFiles/creatABST.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/creatABST.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/creatABST.dir/flags.make

CMakeFiles/creatABST.dir/tree/creatABST.cpp.o: CMakeFiles/creatABST.dir/flags.make
CMakeFiles/creatABST.dir/tree/creatABST.cpp.o: ../tree/creatABST.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/jguo/Nutstore Files/坚果云/C_ws/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/creatABST.dir/tree/creatABST.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/creatABST.dir/tree/creatABST.cpp.o -c "/home/jguo/Nutstore Files/坚果云/C_ws/tree/creatABST.cpp"

CMakeFiles/creatABST.dir/tree/creatABST.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/creatABST.dir/tree/creatABST.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/jguo/Nutstore Files/坚果云/C_ws/tree/creatABST.cpp" > CMakeFiles/creatABST.dir/tree/creatABST.cpp.i

CMakeFiles/creatABST.dir/tree/creatABST.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/creatABST.dir/tree/creatABST.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/jguo/Nutstore Files/坚果云/C_ws/tree/creatABST.cpp" -o CMakeFiles/creatABST.dir/tree/creatABST.cpp.s

CMakeFiles/creatABST.dir/tree/creatABST.cpp.o.requires:

.PHONY : CMakeFiles/creatABST.dir/tree/creatABST.cpp.o.requires

CMakeFiles/creatABST.dir/tree/creatABST.cpp.o.provides: CMakeFiles/creatABST.dir/tree/creatABST.cpp.o.requires
	$(MAKE) -f CMakeFiles/creatABST.dir/build.make CMakeFiles/creatABST.dir/tree/creatABST.cpp.o.provides.build
.PHONY : CMakeFiles/creatABST.dir/tree/creatABST.cpp.o.provides

CMakeFiles/creatABST.dir/tree/creatABST.cpp.o.provides.build: CMakeFiles/creatABST.dir/tree/creatABST.cpp.o


# Object files for target creatABST
creatABST_OBJECTS = \
"CMakeFiles/creatABST.dir/tree/creatABST.cpp.o"

# External object files for target creatABST
creatABST_EXTERNAL_OBJECTS =

creatABST: CMakeFiles/creatABST.dir/tree/creatABST.cpp.o
creatABST: CMakeFiles/creatABST.dir/build.make
creatABST: CMakeFiles/creatABST.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/jguo/Nutstore Files/坚果云/C_ws/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable creatABST"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/creatABST.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/creatABST.dir/build: creatABST

.PHONY : CMakeFiles/creatABST.dir/build

CMakeFiles/creatABST.dir/requires: CMakeFiles/creatABST.dir/tree/creatABST.cpp.o.requires

.PHONY : CMakeFiles/creatABST.dir/requires

CMakeFiles/creatABST.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/creatABST.dir/cmake_clean.cmake
.PHONY : CMakeFiles/creatABST.dir/clean

CMakeFiles/creatABST.dir/depend:
	cd "/home/jguo/Nutstore Files/坚果云/C_ws/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/jguo/Nutstore Files/坚果云/C_ws" "/home/jguo/Nutstore Files/坚果云/C_ws" "/home/jguo/Nutstore Files/坚果云/C_ws/build" "/home/jguo/Nutstore Files/坚果云/C_ws/build" "/home/jguo/Nutstore Files/坚果云/C_ws/build/CMakeFiles/creatABST.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/creatABST.dir/depend


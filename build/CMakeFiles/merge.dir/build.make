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
CMAKE_SOURCE_DIR = "/home/jguo/Nutstore Files/我的坚果云/C_ws"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/jguo/Nutstore Files/我的坚果云/C_ws/build"

# Include any dependencies generated for this target.
include CMakeFiles/merge.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/merge.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/merge.dir/flags.make

CMakeFiles/merge.dir/sort/merge.cpp.o: CMakeFiles/merge.dir/flags.make
CMakeFiles/merge.dir/sort/merge.cpp.o: ../sort/merge.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/jguo/Nutstore Files/我的坚果云/C_ws/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/merge.dir/sort/merge.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/merge.dir/sort/merge.cpp.o -c "/home/jguo/Nutstore Files/我的坚果云/C_ws/sort/merge.cpp"

CMakeFiles/merge.dir/sort/merge.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/merge.dir/sort/merge.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/jguo/Nutstore Files/我的坚果云/C_ws/sort/merge.cpp" > CMakeFiles/merge.dir/sort/merge.cpp.i

CMakeFiles/merge.dir/sort/merge.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/merge.dir/sort/merge.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/jguo/Nutstore Files/我的坚果云/C_ws/sort/merge.cpp" -o CMakeFiles/merge.dir/sort/merge.cpp.s

CMakeFiles/merge.dir/sort/merge.cpp.o.requires:

.PHONY : CMakeFiles/merge.dir/sort/merge.cpp.o.requires

CMakeFiles/merge.dir/sort/merge.cpp.o.provides: CMakeFiles/merge.dir/sort/merge.cpp.o.requires
	$(MAKE) -f CMakeFiles/merge.dir/build.make CMakeFiles/merge.dir/sort/merge.cpp.o.provides.build
.PHONY : CMakeFiles/merge.dir/sort/merge.cpp.o.provides

CMakeFiles/merge.dir/sort/merge.cpp.o.provides.build: CMakeFiles/merge.dir/sort/merge.cpp.o


# Object files for target merge
merge_OBJECTS = \
"CMakeFiles/merge.dir/sort/merge.cpp.o"

# External object files for target merge
merge_EXTERNAL_OBJECTS =

merge: CMakeFiles/merge.dir/sort/merge.cpp.o
merge: CMakeFiles/merge.dir/build.make
merge: CMakeFiles/merge.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/jguo/Nutstore Files/我的坚果云/C_ws/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable merge"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/merge.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/merge.dir/build: merge

.PHONY : CMakeFiles/merge.dir/build

CMakeFiles/merge.dir/requires: CMakeFiles/merge.dir/sort/merge.cpp.o.requires

.PHONY : CMakeFiles/merge.dir/requires

CMakeFiles/merge.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/merge.dir/cmake_clean.cmake
.PHONY : CMakeFiles/merge.dir/clean

CMakeFiles/merge.dir/depend:
	cd "/home/jguo/Nutstore Files/我的坚果云/C_ws/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/jguo/Nutstore Files/我的坚果云/C_ws" "/home/jguo/Nutstore Files/我的坚果云/C_ws" "/home/jguo/Nutstore Files/我的坚果云/C_ws/build" "/home/jguo/Nutstore Files/我的坚果云/C_ws/build" "/home/jguo/Nutstore Files/我的坚果云/C_ws/build/CMakeFiles/merge.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/merge.dir/depend


# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "D:\CLion 2019.2.5\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2019.2.5\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\ProjectSet\C++ Project\c++ primer learn"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\ProjectSet\C++ Project\c++ primer learn\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/c___primer_learn.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/c___primer_learn.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/c___primer_learn.dir/flags.make

CMakeFiles/c___primer_learn.dir/2/variable.cpp.obj: CMakeFiles/c___primer_learn.dir/flags.make
CMakeFiles/c___primer_learn.dir/2/variable.cpp.obj: ../2/variable.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\ProjectSet\C++ Project\c++ primer learn\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/c___primer_learn.dir/2/variable.cpp.obj"
	D:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\c___primer_learn.dir\2\variable.cpp.obj -c "D:\ProjectSet\C++ Project\c++ primer learn\2\variable.cpp"

CMakeFiles/c___primer_learn.dir/2/variable.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/c___primer_learn.dir/2/variable.cpp.i"
	D:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\ProjectSet\C++ Project\c++ primer learn\2\variable.cpp" > CMakeFiles\c___primer_learn.dir\2\variable.cpp.i

CMakeFiles/c___primer_learn.dir/2/variable.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/c___primer_learn.dir/2/variable.cpp.s"
	D:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\ProjectSet\C++ Project\c++ primer learn\2\variable.cpp" -o CMakeFiles\c___primer_learn.dir\2\variable.cpp.s

# Object files for target c___primer_learn
c___primer_learn_OBJECTS = \
"CMakeFiles/c___primer_learn.dir/2/variable.cpp.obj"

# External object files for target c___primer_learn
c___primer_learn_EXTERNAL_OBJECTS =

c___primer_learn.exe: CMakeFiles/c___primer_learn.dir/2/variable.cpp.obj
c___primer_learn.exe: CMakeFiles/c___primer_learn.dir/build.make
c___primer_learn.exe: CMakeFiles/c___primer_learn.dir/linklibs.rsp
c___primer_learn.exe: CMakeFiles/c___primer_learn.dir/objects1.rsp
c___primer_learn.exe: CMakeFiles/c___primer_learn.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\ProjectSet\C++ Project\c++ primer learn\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable c___primer_learn.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\c___primer_learn.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/c___primer_learn.dir/build: c___primer_learn.exe

.PHONY : CMakeFiles/c___primer_learn.dir/build

CMakeFiles/c___primer_learn.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\c___primer_learn.dir\cmake_clean.cmake
.PHONY : CMakeFiles/c___primer_learn.dir/clean

CMakeFiles/c___primer_learn.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\ProjectSet\C++ Project\c++ primer learn" "D:\ProjectSet\C++ Project\c++ primer learn" "D:\ProjectSet\C++ Project\c++ primer learn\cmake-build-debug" "D:\ProjectSet\C++ Project\c++ primer learn\cmake-build-debug" "D:\ProjectSet\C++ Project\c++ primer learn\cmake-build-debug\CMakeFiles\c___primer_learn.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/c___primer_learn.dir/depend


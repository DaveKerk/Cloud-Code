# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.6

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
CMAKE_COMMAND = "D:\CLion 2016.3.2\bin\cmake\bin\cmake.exe"

# The command to remove a file.
RM = "D:\CLion 2016.3.2\bin\cmake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\david\Desktop\Cloud Code\mersenne"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\david\Desktop\Cloud Code\mersenne\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/mersenne.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/mersenne.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/mersenne.dir/flags.make

CMakeFiles/mersenne.dir/main.cpp.obj: CMakeFiles/mersenne.dir/flags.make
CMakeFiles/mersenne.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\david\Desktop\Cloud Code\mersenne\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/mersenne.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\mersenne.dir\main.cpp.obj -c "C:\Users\david\Desktop\Cloud Code\mersenne\main.cpp"

CMakeFiles/mersenne.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/mersenne.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\david\Desktop\Cloud Code\mersenne\main.cpp" > CMakeFiles\mersenne.dir\main.cpp.i

CMakeFiles/mersenne.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/mersenne.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\david\Desktop\Cloud Code\mersenne\main.cpp" -o CMakeFiles\mersenne.dir\main.cpp.s

CMakeFiles/mersenne.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/mersenne.dir/main.cpp.obj.requires

CMakeFiles/mersenne.dir/main.cpp.obj.provides: CMakeFiles/mersenne.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\mersenne.dir\build.make CMakeFiles/mersenne.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/mersenne.dir/main.cpp.obj.provides

CMakeFiles/mersenne.dir/main.cpp.obj.provides.build: CMakeFiles/mersenne.dir/main.cpp.obj


# Object files for target mersenne
mersenne_OBJECTS = \
"CMakeFiles/mersenne.dir/main.cpp.obj"

# External object files for target mersenne
mersenne_EXTERNAL_OBJECTS =

mersenne.exe: CMakeFiles/mersenne.dir/main.cpp.obj
mersenne.exe: CMakeFiles/mersenne.dir/build.make
mersenne.exe: CMakeFiles/mersenne.dir/linklibs.rsp
mersenne.exe: CMakeFiles/mersenne.dir/objects1.rsp
mersenne.exe: CMakeFiles/mersenne.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\david\Desktop\Cloud Code\mersenne\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable mersenne.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\mersenne.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/mersenne.dir/build: mersenne.exe

.PHONY : CMakeFiles/mersenne.dir/build

CMakeFiles/mersenne.dir/requires: CMakeFiles/mersenne.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/mersenne.dir/requires

CMakeFiles/mersenne.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\mersenne.dir\cmake_clean.cmake
.PHONY : CMakeFiles/mersenne.dir/clean

CMakeFiles/mersenne.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\david\Desktop\Cloud Code\mersenne" "C:\Users\david\Desktop\Cloud Code\mersenne" "C:\Users\david\Desktop\Cloud Code\mersenne\cmake-build-debug" "C:\Users\david\Desktop\Cloud Code\mersenne\cmake-build-debug" "C:\Users\david\Desktop\Cloud Code\mersenne\cmake-build-debug\CMakeFiles\mersenne.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/mersenne.dir/depend

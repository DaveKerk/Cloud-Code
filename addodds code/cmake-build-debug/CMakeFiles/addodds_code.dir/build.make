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
CMAKE_SOURCE_DIR = "C:\Users\david\Desktop\Cloud Code\addodds code"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\david\Desktop\Cloud Code\addodds code\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/addodds_code.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/addodds_code.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/addodds_code.dir/flags.make

CMakeFiles/addodds_code.dir/main.cpp.obj: CMakeFiles/addodds_code.dir/flags.make
CMakeFiles/addodds_code.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\david\Desktop\Cloud Code\addodds code\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/addodds_code.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\addodds_code.dir\main.cpp.obj -c "C:\Users\david\Desktop\Cloud Code\addodds code\main.cpp"

CMakeFiles/addodds_code.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/addodds_code.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\david\Desktop\Cloud Code\addodds code\main.cpp" > CMakeFiles\addodds_code.dir\main.cpp.i

CMakeFiles/addodds_code.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/addodds_code.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\david\Desktop\Cloud Code\addodds code\main.cpp" -o CMakeFiles\addodds_code.dir\main.cpp.s

CMakeFiles/addodds_code.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/addodds_code.dir/main.cpp.obj.requires

CMakeFiles/addodds_code.dir/main.cpp.obj.provides: CMakeFiles/addodds_code.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\addodds_code.dir\build.make CMakeFiles/addodds_code.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/addodds_code.dir/main.cpp.obj.provides

CMakeFiles/addodds_code.dir/main.cpp.obj.provides.build: CMakeFiles/addodds_code.dir/main.cpp.obj


# Object files for target addodds_code
addodds_code_OBJECTS = \
"CMakeFiles/addodds_code.dir/main.cpp.obj"

# External object files for target addodds_code
addodds_code_EXTERNAL_OBJECTS =

addodds_code.exe: CMakeFiles/addodds_code.dir/main.cpp.obj
addodds_code.exe: CMakeFiles/addodds_code.dir/build.make
addodds_code.exe: CMakeFiles/addodds_code.dir/linklibs.rsp
addodds_code.exe: CMakeFiles/addodds_code.dir/objects1.rsp
addodds_code.exe: CMakeFiles/addodds_code.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\david\Desktop\Cloud Code\addodds code\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable addodds_code.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\addodds_code.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/addodds_code.dir/build: addodds_code.exe

.PHONY : CMakeFiles/addodds_code.dir/build

CMakeFiles/addodds_code.dir/requires: CMakeFiles/addodds_code.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/addodds_code.dir/requires

CMakeFiles/addodds_code.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\addodds_code.dir\cmake_clean.cmake
.PHONY : CMakeFiles/addodds_code.dir/clean

CMakeFiles/addodds_code.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\david\Desktop\Cloud Code\addodds code" "C:\Users\david\Desktop\Cloud Code\addodds code" "C:\Users\david\Desktop\Cloud Code\addodds code\cmake-build-debug" "C:\Users\david\Desktop\Cloud Code\addodds code\cmake-build-debug" "C:\Users\david\Desktop\Cloud Code\addodds code\cmake-build-debug\CMakeFiles\addodds_code.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/addodds_code.dir/depend

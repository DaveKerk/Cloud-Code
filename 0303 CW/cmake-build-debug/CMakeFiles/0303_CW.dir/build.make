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
CMAKE_SOURCE_DIR = "C:\Users\david\Desktop\Cloud Code\0303 CW"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\david\Desktop\Cloud Code\0303 CW\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/0303_CW.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/0303_CW.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/0303_CW.dir/flags.make

CMakeFiles/0303_CW.dir/main.cpp.obj: CMakeFiles/0303_CW.dir/flags.make
CMakeFiles/0303_CW.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\david\Desktop\Cloud Code\0303 CW\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/0303_CW.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\0303_CW.dir\main.cpp.obj -c "C:\Users\david\Desktop\Cloud Code\0303 CW\main.cpp"

CMakeFiles/0303_CW.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/0303_CW.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\david\Desktop\Cloud Code\0303 CW\main.cpp" > CMakeFiles\0303_CW.dir\main.cpp.i

CMakeFiles/0303_CW.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/0303_CW.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\david\Desktop\Cloud Code\0303 CW\main.cpp" -o CMakeFiles\0303_CW.dir\main.cpp.s

CMakeFiles/0303_CW.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/0303_CW.dir/main.cpp.obj.requires

CMakeFiles/0303_CW.dir/main.cpp.obj.provides: CMakeFiles/0303_CW.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\0303_CW.dir\build.make CMakeFiles/0303_CW.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/0303_CW.dir/main.cpp.obj.provides

CMakeFiles/0303_CW.dir/main.cpp.obj.provides.build: CMakeFiles/0303_CW.dir/main.cpp.obj


# Object files for target 0303_CW
0303_CW_OBJECTS = \
"CMakeFiles/0303_CW.dir/main.cpp.obj"

# External object files for target 0303_CW
0303_CW_EXTERNAL_OBJECTS =

0303_CW.exe: CMakeFiles/0303_CW.dir/main.cpp.obj
0303_CW.exe: CMakeFiles/0303_CW.dir/build.make
0303_CW.exe: CMakeFiles/0303_CW.dir/linklibs.rsp
0303_CW.exe: CMakeFiles/0303_CW.dir/objects1.rsp
0303_CW.exe: CMakeFiles/0303_CW.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\david\Desktop\Cloud Code\0303 CW\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 0303_CW.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\0303_CW.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/0303_CW.dir/build: 0303_CW.exe

.PHONY : CMakeFiles/0303_CW.dir/build

CMakeFiles/0303_CW.dir/requires: CMakeFiles/0303_CW.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/0303_CW.dir/requires

CMakeFiles/0303_CW.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\0303_CW.dir\cmake_clean.cmake
.PHONY : CMakeFiles/0303_CW.dir/clean

CMakeFiles/0303_CW.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\david\Desktop\Cloud Code\0303 CW" "C:\Users\david\Desktop\Cloud Code\0303 CW" "C:\Users\david\Desktop\Cloud Code\0303 CW\cmake-build-debug" "C:\Users\david\Desktop\Cloud Code\0303 CW\cmake-build-debug" "C:\Users\david\Desktop\Cloud Code\0303 CW\cmake-build-debug\CMakeFiles\0303_CW.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/0303_CW.dir/depend


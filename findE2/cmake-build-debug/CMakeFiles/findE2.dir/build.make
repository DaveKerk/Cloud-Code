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
CMAKE_SOURCE_DIR = "C:\Users\david\Desktop\Cloud Code\findE2"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\david\Desktop\Cloud Code\findE2\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/findE2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/findE2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/findE2.dir/flags.make

CMakeFiles/findE2.dir/main.cpp.obj: CMakeFiles/findE2.dir/flags.make
CMakeFiles/findE2.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\david\Desktop\Cloud Code\findE2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/findE2.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\findE2.dir\main.cpp.obj -c "C:\Users\david\Desktop\Cloud Code\findE2\main.cpp"

CMakeFiles/findE2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/findE2.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\david\Desktop\Cloud Code\findE2\main.cpp" > CMakeFiles\findE2.dir\main.cpp.i

CMakeFiles/findE2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/findE2.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\david\Desktop\Cloud Code\findE2\main.cpp" -o CMakeFiles\findE2.dir\main.cpp.s

CMakeFiles/findE2.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/findE2.dir/main.cpp.obj.requires

CMakeFiles/findE2.dir/main.cpp.obj.provides: CMakeFiles/findE2.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\findE2.dir\build.make CMakeFiles/findE2.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/findE2.dir/main.cpp.obj.provides

CMakeFiles/findE2.dir/main.cpp.obj.provides.build: CMakeFiles/findE2.dir/main.cpp.obj


# Object files for target findE2
findE2_OBJECTS = \
"CMakeFiles/findE2.dir/main.cpp.obj"

# External object files for target findE2
findE2_EXTERNAL_OBJECTS =

findE2.exe: CMakeFiles/findE2.dir/main.cpp.obj
findE2.exe: CMakeFiles/findE2.dir/build.make
findE2.exe: CMakeFiles/findE2.dir/linklibs.rsp
findE2.exe: CMakeFiles/findE2.dir/objects1.rsp
findE2.exe: CMakeFiles/findE2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\david\Desktop\Cloud Code\findE2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable findE2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\findE2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/findE2.dir/build: findE2.exe

.PHONY : CMakeFiles/findE2.dir/build

CMakeFiles/findE2.dir/requires: CMakeFiles/findE2.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/findE2.dir/requires

CMakeFiles/findE2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\findE2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/findE2.dir/clean

CMakeFiles/findE2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\david\Desktop\Cloud Code\findE2" "C:\Users\david\Desktop\Cloud Code\findE2" "C:\Users\david\Desktop\Cloud Code\findE2\cmake-build-debug" "C:\Users\david\Desktop\Cloud Code\findE2\cmake-build-debug" "C:\Users\david\Desktop\Cloud Code\findE2\cmake-build-debug\CMakeFiles\findE2.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/findE2.dir/depend


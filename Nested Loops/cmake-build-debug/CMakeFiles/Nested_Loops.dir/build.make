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
CMAKE_SOURCE_DIR = "C:\Users\david\Desktop\Cloud Code\Nested Loops"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\david\Desktop\Cloud Code\Nested Loops\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Nested_Loops.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Nested_Loops.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Nested_Loops.dir/flags.make

CMakeFiles/Nested_Loops.dir/main.cpp.obj: CMakeFiles/Nested_Loops.dir/flags.make
CMakeFiles/Nested_Loops.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\david\Desktop\Cloud Code\Nested Loops\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Nested_Loops.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Nested_Loops.dir\main.cpp.obj -c "C:\Users\david\Desktop\Cloud Code\Nested Loops\main.cpp"

CMakeFiles/Nested_Loops.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Nested_Loops.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\david\Desktop\Cloud Code\Nested Loops\main.cpp" > CMakeFiles\Nested_Loops.dir\main.cpp.i

CMakeFiles/Nested_Loops.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Nested_Loops.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\david\Desktop\Cloud Code\Nested Loops\main.cpp" -o CMakeFiles\Nested_Loops.dir\main.cpp.s

CMakeFiles/Nested_Loops.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/Nested_Loops.dir/main.cpp.obj.requires

CMakeFiles/Nested_Loops.dir/main.cpp.obj.provides: CMakeFiles/Nested_Loops.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\Nested_Loops.dir\build.make CMakeFiles/Nested_Loops.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/Nested_Loops.dir/main.cpp.obj.provides

CMakeFiles/Nested_Loops.dir/main.cpp.obj.provides.build: CMakeFiles/Nested_Loops.dir/main.cpp.obj


# Object files for target Nested_Loops
Nested_Loops_OBJECTS = \
"CMakeFiles/Nested_Loops.dir/main.cpp.obj"

# External object files for target Nested_Loops
Nested_Loops_EXTERNAL_OBJECTS =

Nested_Loops.exe: CMakeFiles/Nested_Loops.dir/main.cpp.obj
Nested_Loops.exe: CMakeFiles/Nested_Loops.dir/build.make
Nested_Loops.exe: CMakeFiles/Nested_Loops.dir/linklibs.rsp
Nested_Loops.exe: CMakeFiles/Nested_Loops.dir/objects1.rsp
Nested_Loops.exe: CMakeFiles/Nested_Loops.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\david\Desktop\Cloud Code\Nested Loops\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Nested_Loops.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Nested_Loops.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Nested_Loops.dir/build: Nested_Loops.exe

.PHONY : CMakeFiles/Nested_Loops.dir/build

CMakeFiles/Nested_Loops.dir/requires: CMakeFiles/Nested_Loops.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/Nested_Loops.dir/requires

CMakeFiles/Nested_Loops.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Nested_Loops.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Nested_Loops.dir/clean

CMakeFiles/Nested_Loops.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\david\Desktop\Cloud Code\Nested Loops" "C:\Users\david\Desktop\Cloud Code\Nested Loops" "C:\Users\david\Desktop\Cloud Code\Nested Loops\cmake-build-debug" "C:\Users\david\Desktop\Cloud Code\Nested Loops\cmake-build-debug" "C:\Users\david\Desktop\Cloud Code\Nested Loops\cmake-build-debug\CMakeFiles\Nested_Loops.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Nested_Loops.dir/depend


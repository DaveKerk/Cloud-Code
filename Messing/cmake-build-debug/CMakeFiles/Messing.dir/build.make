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
CMAKE_SOURCE_DIR = "C:\Users\david\Desktop\Cloud Code\Messing"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\david\Desktop\Cloud Code\Messing\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Messing.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Messing.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Messing.dir/flags.make

CMakeFiles/Messing.dir/main.cpp.obj: CMakeFiles/Messing.dir/flags.make
CMakeFiles/Messing.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\david\Desktop\Cloud Code\Messing\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Messing.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Messing.dir\main.cpp.obj -c "C:\Users\david\Desktop\Cloud Code\Messing\main.cpp"

CMakeFiles/Messing.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Messing.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\david\Desktop\Cloud Code\Messing\main.cpp" > CMakeFiles\Messing.dir\main.cpp.i

CMakeFiles/Messing.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Messing.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\david\Desktop\Cloud Code\Messing\main.cpp" -o CMakeFiles\Messing.dir\main.cpp.s

CMakeFiles/Messing.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/Messing.dir/main.cpp.obj.requires

CMakeFiles/Messing.dir/main.cpp.obj.provides: CMakeFiles/Messing.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\Messing.dir\build.make CMakeFiles/Messing.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/Messing.dir/main.cpp.obj.provides

CMakeFiles/Messing.dir/main.cpp.obj.provides.build: CMakeFiles/Messing.dir/main.cpp.obj


# Object files for target Messing
Messing_OBJECTS = \
"CMakeFiles/Messing.dir/main.cpp.obj"

# External object files for target Messing
Messing_EXTERNAL_OBJECTS =

Messing.exe: CMakeFiles/Messing.dir/main.cpp.obj
Messing.exe: CMakeFiles/Messing.dir/build.make
Messing.exe: CMakeFiles/Messing.dir/linklibs.rsp
Messing.exe: CMakeFiles/Messing.dir/objects1.rsp
Messing.exe: CMakeFiles/Messing.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\david\Desktop\Cloud Code\Messing\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Messing.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Messing.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Messing.dir/build: Messing.exe

.PHONY : CMakeFiles/Messing.dir/build

CMakeFiles/Messing.dir/requires: CMakeFiles/Messing.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/Messing.dir/requires

CMakeFiles/Messing.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Messing.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Messing.dir/clean

CMakeFiles/Messing.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\david\Desktop\Cloud Code\Messing" "C:\Users\david\Desktop\Cloud Code\Messing" "C:\Users\david\Desktop\Cloud Code\Messing\cmake-build-debug" "C:\Users\david\Desktop\Cloud Code\Messing\cmake-build-debug" "C:\Users\david\Desktop\Cloud Code\Messing\cmake-build-debug\CMakeFiles\Messing.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Messing.dir/depend


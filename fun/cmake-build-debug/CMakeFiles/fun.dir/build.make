# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.7

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
CMAKE_SOURCE_DIR = C:\Users\david\Desktop\Cloud-Code\fun

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\david\Desktop\Cloud-Code\fun\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/fun.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/fun.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/fun.dir/flags.make

CMakeFiles/fun.dir/main.cpp.obj: CMakeFiles/fun.dir/flags.make
CMakeFiles/fun.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\david\Desktop\Cloud-Code\fun\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/fun.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\fun.dir\main.cpp.obj -c C:\Users\david\Desktop\Cloud-Code\fun\main.cpp

CMakeFiles/fun.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/fun.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\david\Desktop\Cloud-Code\fun\main.cpp > CMakeFiles\fun.dir\main.cpp.i

CMakeFiles/fun.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/fun.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\david\Desktop\Cloud-Code\fun\main.cpp -o CMakeFiles\fun.dir\main.cpp.s

CMakeFiles/fun.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/fun.dir/main.cpp.obj.requires

CMakeFiles/fun.dir/main.cpp.obj.provides: CMakeFiles/fun.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\fun.dir\build.make CMakeFiles/fun.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/fun.dir/main.cpp.obj.provides

CMakeFiles/fun.dir/main.cpp.obj.provides.build: CMakeFiles/fun.dir/main.cpp.obj


# Object files for target fun
fun_OBJECTS = \
"CMakeFiles/fun.dir/main.cpp.obj"

# External object files for target fun
fun_EXTERNAL_OBJECTS =

fun.exe: CMakeFiles/fun.dir/main.cpp.obj
fun.exe: CMakeFiles/fun.dir/build.make
fun.exe: CMakeFiles/fun.dir/linklibs.rsp
fun.exe: CMakeFiles/fun.dir/objects1.rsp
fun.exe: CMakeFiles/fun.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\david\Desktop\Cloud-Code\fun\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable fun.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\fun.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/fun.dir/build: fun.exe

.PHONY : CMakeFiles/fun.dir/build

CMakeFiles/fun.dir/requires: CMakeFiles/fun.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/fun.dir/requires

CMakeFiles/fun.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\fun.dir\cmake_clean.cmake
.PHONY : CMakeFiles/fun.dir/clean

CMakeFiles/fun.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\david\Desktop\Cloud-Code\fun C:\Users\david\Desktop\Cloud-Code\fun C:\Users\david\Desktop\Cloud-Code\fun\cmake-build-debug C:\Users\david\Desktop\Cloud-Code\fun\cmake-build-debug C:\Users\david\Desktop\Cloud-Code\fun\cmake-build-debug\CMakeFiles\fun.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/fun.dir/depend


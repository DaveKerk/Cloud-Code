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
CMAKE_SOURCE_DIR = "C:\Users\david\Desktop\Cloud-Code\0412 Class Work"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\david\Desktop\Cloud-Code\0412 Class Work\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/0412_Class_Work.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/0412_Class_Work.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/0412_Class_Work.dir/flags.make

CMakeFiles/0412_Class_Work.dir/main.cpp.obj: CMakeFiles/0412_Class_Work.dir/flags.make
CMakeFiles/0412_Class_Work.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\david\Desktop\Cloud-Code\0412 Class Work\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/0412_Class_Work.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\0412_Class_Work.dir\main.cpp.obj -c "C:\Users\david\Desktop\Cloud-Code\0412 Class Work\main.cpp"

CMakeFiles/0412_Class_Work.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/0412_Class_Work.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\david\Desktop\Cloud-Code\0412 Class Work\main.cpp" > CMakeFiles\0412_Class_Work.dir\main.cpp.i

CMakeFiles/0412_Class_Work.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/0412_Class_Work.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\david\Desktop\Cloud-Code\0412 Class Work\main.cpp" -o CMakeFiles\0412_Class_Work.dir\main.cpp.s

CMakeFiles/0412_Class_Work.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/0412_Class_Work.dir/main.cpp.obj.requires

CMakeFiles/0412_Class_Work.dir/main.cpp.obj.provides: CMakeFiles/0412_Class_Work.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\0412_Class_Work.dir\build.make CMakeFiles/0412_Class_Work.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/0412_Class_Work.dir/main.cpp.obj.provides

CMakeFiles/0412_Class_Work.dir/main.cpp.obj.provides.build: CMakeFiles/0412_Class_Work.dir/main.cpp.obj


# Object files for target 0412_Class_Work
0412_Class_Work_OBJECTS = \
"CMakeFiles/0412_Class_Work.dir/main.cpp.obj"

# External object files for target 0412_Class_Work
0412_Class_Work_EXTERNAL_OBJECTS =

0412_Class_Work.exe: CMakeFiles/0412_Class_Work.dir/main.cpp.obj
0412_Class_Work.exe: CMakeFiles/0412_Class_Work.dir/build.make
0412_Class_Work.exe: CMakeFiles/0412_Class_Work.dir/linklibs.rsp
0412_Class_Work.exe: CMakeFiles/0412_Class_Work.dir/objects1.rsp
0412_Class_Work.exe: CMakeFiles/0412_Class_Work.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\david\Desktop\Cloud-Code\0412 Class Work\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 0412_Class_Work.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\0412_Class_Work.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/0412_Class_Work.dir/build: 0412_Class_Work.exe

.PHONY : CMakeFiles/0412_Class_Work.dir/build

CMakeFiles/0412_Class_Work.dir/requires: CMakeFiles/0412_Class_Work.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/0412_Class_Work.dir/requires

CMakeFiles/0412_Class_Work.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\0412_Class_Work.dir\cmake_clean.cmake
.PHONY : CMakeFiles/0412_Class_Work.dir/clean

CMakeFiles/0412_Class_Work.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\david\Desktop\Cloud-Code\0412 Class Work" "C:\Users\david\Desktop\Cloud-Code\0412 Class Work" "C:\Users\david\Desktop\Cloud-Code\0412 Class Work\cmake-build-debug" "C:\Users\david\Desktop\Cloud-Code\0412 Class Work\cmake-build-debug" "C:\Users\david\Desktop\Cloud-Code\0412 Class Work\cmake-build-debug\CMakeFiles\0412_Class_Work.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/0412_Class_Work.dir/depend


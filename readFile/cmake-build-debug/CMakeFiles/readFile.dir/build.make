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
CMAKE_SOURCE_DIR = C:\Users\david\Desktop\Cloud-Code\readFile

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\david\Desktop\Cloud-Code\readFile\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/readFile.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/readFile.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/readFile.dir/flags.make

CMakeFiles/readFile.dir/main.cpp.obj: CMakeFiles/readFile.dir/flags.make
CMakeFiles/readFile.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\david\Desktop\Cloud-Code\readFile\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/readFile.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\readFile.dir\main.cpp.obj -c C:\Users\david\Desktop\Cloud-Code\readFile\main.cpp

CMakeFiles/readFile.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/readFile.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\david\Desktop\Cloud-Code\readFile\main.cpp > CMakeFiles\readFile.dir\main.cpp.i

CMakeFiles/readFile.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/readFile.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\david\Desktop\Cloud-Code\readFile\main.cpp -o CMakeFiles\readFile.dir\main.cpp.s

CMakeFiles/readFile.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/readFile.dir/main.cpp.obj.requires

CMakeFiles/readFile.dir/main.cpp.obj.provides: CMakeFiles/readFile.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\readFile.dir\build.make CMakeFiles/readFile.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/readFile.dir/main.cpp.obj.provides

CMakeFiles/readFile.dir/main.cpp.obj.provides.build: CMakeFiles/readFile.dir/main.cpp.obj


# Object files for target readFile
readFile_OBJECTS = \
"CMakeFiles/readFile.dir/main.cpp.obj"

# External object files for target readFile
readFile_EXTERNAL_OBJECTS =

readFile.exe: CMakeFiles/readFile.dir/main.cpp.obj
readFile.exe: CMakeFiles/readFile.dir/build.make
readFile.exe: CMakeFiles/readFile.dir/linklibs.rsp
readFile.exe: CMakeFiles/readFile.dir/objects1.rsp
readFile.exe: CMakeFiles/readFile.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\david\Desktop\Cloud-Code\readFile\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable readFile.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\readFile.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/readFile.dir/build: readFile.exe

.PHONY : CMakeFiles/readFile.dir/build

CMakeFiles/readFile.dir/requires: CMakeFiles/readFile.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/readFile.dir/requires

CMakeFiles/readFile.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\readFile.dir\cmake_clean.cmake
.PHONY : CMakeFiles/readFile.dir/clean

CMakeFiles/readFile.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\david\Desktop\Cloud-Code\readFile C:\Users\david\Desktop\Cloud-Code\readFile C:\Users\david\Desktop\Cloud-Code\readFile\cmake-build-debug C:\Users\david\Desktop\Cloud-Code\readFile\cmake-build-debug C:\Users\david\Desktop\Cloud-Code\readFile\cmake-build-debug\CMakeFiles\readFile.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/readFile.dir/depend


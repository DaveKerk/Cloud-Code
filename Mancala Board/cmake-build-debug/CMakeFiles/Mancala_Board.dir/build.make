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
CMAKE_SOURCE_DIR = "C:\Users\david\Desktop\Cloud-Code\Mancala Board"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\david\Desktop\Cloud-Code\Mancala Board\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Mancala_Board.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Mancala_Board.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Mancala_Board.dir/flags.make

CMakeFiles/Mancala_Board.dir/main.cpp.obj: CMakeFiles/Mancala_Board.dir/flags.make
CMakeFiles/Mancala_Board.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\david\Desktop\Cloud-Code\Mancala Board\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Mancala_Board.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Mancala_Board.dir\main.cpp.obj -c "C:\Users\david\Desktop\Cloud-Code\Mancala Board\main.cpp"

CMakeFiles/Mancala_Board.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Mancala_Board.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\david\Desktop\Cloud-Code\Mancala Board\main.cpp" > CMakeFiles\Mancala_Board.dir\main.cpp.i

CMakeFiles/Mancala_Board.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Mancala_Board.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\david\Desktop\Cloud-Code\Mancala Board\main.cpp" -o CMakeFiles\Mancala_Board.dir\main.cpp.s

CMakeFiles/Mancala_Board.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/Mancala_Board.dir/main.cpp.obj.requires

CMakeFiles/Mancala_Board.dir/main.cpp.obj.provides: CMakeFiles/Mancala_Board.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\Mancala_Board.dir\build.make CMakeFiles/Mancala_Board.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/Mancala_Board.dir/main.cpp.obj.provides

CMakeFiles/Mancala_Board.dir/main.cpp.obj.provides.build: CMakeFiles/Mancala_Board.dir/main.cpp.obj


# Object files for target Mancala_Board
Mancala_Board_OBJECTS = \
"CMakeFiles/Mancala_Board.dir/main.cpp.obj"

# External object files for target Mancala_Board
Mancala_Board_EXTERNAL_OBJECTS =

Mancala_Board.exe: CMakeFiles/Mancala_Board.dir/main.cpp.obj
Mancala_Board.exe: CMakeFiles/Mancala_Board.dir/build.make
Mancala_Board.exe: CMakeFiles/Mancala_Board.dir/linklibs.rsp
Mancala_Board.exe: CMakeFiles/Mancala_Board.dir/objects1.rsp
Mancala_Board.exe: CMakeFiles/Mancala_Board.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\david\Desktop\Cloud-Code\Mancala Board\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Mancala_Board.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Mancala_Board.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Mancala_Board.dir/build: Mancala_Board.exe

.PHONY : CMakeFiles/Mancala_Board.dir/build

CMakeFiles/Mancala_Board.dir/requires: CMakeFiles/Mancala_Board.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/Mancala_Board.dir/requires

CMakeFiles/Mancala_Board.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Mancala_Board.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Mancala_Board.dir/clean

CMakeFiles/Mancala_Board.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\david\Desktop\Cloud-Code\Mancala Board" "C:\Users\david\Desktop\Cloud-Code\Mancala Board" "C:\Users\david\Desktop\Cloud-Code\Mancala Board\cmake-build-debug" "C:\Users\david\Desktop\Cloud-Code\Mancala Board\cmake-build-debug" "C:\Users\david\Desktop\Cloud-Code\Mancala Board\cmake-build-debug\CMakeFiles\Mancala_Board.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Mancala_Board.dir/depend


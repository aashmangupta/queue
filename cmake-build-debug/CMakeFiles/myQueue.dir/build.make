# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/aashmangupta/CLionProjects/myQueue

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/aashmangupta/CLionProjects/myQueue/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/myQueue.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/myQueue.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/myQueue.dir/flags.make

CMakeFiles/myQueue.dir/main.c.o: CMakeFiles/myQueue.dir/flags.make
CMakeFiles/myQueue.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/aashmangupta/CLionProjects/myQueue/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/myQueue.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/myQueue.dir/main.c.o   -c /Users/aashmangupta/CLionProjects/myQueue/main.c

CMakeFiles/myQueue.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/myQueue.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/aashmangupta/CLionProjects/myQueue/main.c > CMakeFiles/myQueue.dir/main.c.i

CMakeFiles/myQueue.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/myQueue.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/aashmangupta/CLionProjects/myQueue/main.c -o CMakeFiles/myQueue.dir/main.c.s

CMakeFiles/myQueue.dir/main.c.o.requires:

.PHONY : CMakeFiles/myQueue.dir/main.c.o.requires

CMakeFiles/myQueue.dir/main.c.o.provides: CMakeFiles/myQueue.dir/main.c.o.requires
	$(MAKE) -f CMakeFiles/myQueue.dir/build.make CMakeFiles/myQueue.dir/main.c.o.provides.build
.PHONY : CMakeFiles/myQueue.dir/main.c.o.provides

CMakeFiles/myQueue.dir/main.c.o.provides.build: CMakeFiles/myQueue.dir/main.c.o


# Object files for target myQueue
myQueue_OBJECTS = \
"CMakeFiles/myQueue.dir/main.c.o"

# External object files for target myQueue
myQueue_EXTERNAL_OBJECTS =

myQueue: CMakeFiles/myQueue.dir/main.c.o
myQueue: CMakeFiles/myQueue.dir/build.make
myQueue: CMakeFiles/myQueue.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/aashmangupta/CLionProjects/myQueue/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable myQueue"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/myQueue.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/myQueue.dir/build: myQueue

.PHONY : CMakeFiles/myQueue.dir/build

CMakeFiles/myQueue.dir/requires: CMakeFiles/myQueue.dir/main.c.o.requires

.PHONY : CMakeFiles/myQueue.dir/requires

CMakeFiles/myQueue.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/myQueue.dir/cmake_clean.cmake
.PHONY : CMakeFiles/myQueue.dir/clean

CMakeFiles/myQueue.dir/depend:
	cd /Users/aashmangupta/CLionProjects/myQueue/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/aashmangupta/CLionProjects/myQueue /Users/aashmangupta/CLionProjects/myQueue /Users/aashmangupta/CLionProjects/myQueue/cmake-build-debug /Users/aashmangupta/CLionProjects/myQueue/cmake-build-debug /Users/aashmangupta/CLionProjects/myQueue/cmake-build-debug/CMakeFiles/myQueue.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/myQueue.dir/depend


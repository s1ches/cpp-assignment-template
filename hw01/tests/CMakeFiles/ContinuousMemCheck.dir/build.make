# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ivan/Programming/C++/cpp-assignment-template

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ivan/Programming/C++/cpp-assignment-template

# Utility rule file for ContinuousMemCheck.

# Include any custom commands dependencies for this target.
include hw01/tests/CMakeFiles/ContinuousMemCheck.dir/compiler_depend.make

# Include the progress variables for this target.
include hw01/tests/CMakeFiles/ContinuousMemCheck.dir/progress.make

hw01/tests/CMakeFiles/ContinuousMemCheck:
	cd /home/ivan/Programming/C++/cpp-assignment-template/hw01/tests && /usr/bin/ctest -D ContinuousMemCheck

ContinuousMemCheck: hw01/tests/CMakeFiles/ContinuousMemCheck
ContinuousMemCheck: hw01/tests/CMakeFiles/ContinuousMemCheck.dir/build.make
.PHONY : ContinuousMemCheck

# Rule to build all files generated by this target.
hw01/tests/CMakeFiles/ContinuousMemCheck.dir/build: ContinuousMemCheck
.PHONY : hw01/tests/CMakeFiles/ContinuousMemCheck.dir/build

hw01/tests/CMakeFiles/ContinuousMemCheck.dir/clean:
	cd /home/ivan/Programming/C++/cpp-assignment-template/hw01/tests && $(CMAKE_COMMAND) -P CMakeFiles/ContinuousMemCheck.dir/cmake_clean.cmake
.PHONY : hw01/tests/CMakeFiles/ContinuousMemCheck.dir/clean

hw01/tests/CMakeFiles/ContinuousMemCheck.dir/depend:
	cd /home/ivan/Programming/C++/cpp-assignment-template && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ivan/Programming/C++/cpp-assignment-template /home/ivan/Programming/C++/cpp-assignment-template/hw01/tests /home/ivan/Programming/C++/cpp-assignment-template /home/ivan/Programming/C++/cpp-assignment-template/hw01/tests /home/ivan/Programming/C++/cpp-assignment-template/hw01/tests/CMakeFiles/ContinuousMemCheck.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : hw01/tests/CMakeFiles/ContinuousMemCheck.dir/depend


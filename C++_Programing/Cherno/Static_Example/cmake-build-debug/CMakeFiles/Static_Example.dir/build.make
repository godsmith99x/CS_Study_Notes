# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /snap/clion/138/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/138/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/joel/Documents/CS_Study_Notes/C++_Programing/Cherno/Static_Example

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/joel/Documents/CS_Study_Notes/C++_Programing/Cherno/Static_Example/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Static_Example.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Static_Example.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Static_Example.dir/flags.make

CMakeFiles/Static_Example.dir/main.cpp.o: CMakeFiles/Static_Example.dir/flags.make
CMakeFiles/Static_Example.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/joel/Documents/CS_Study_Notes/C++_Programing/Cherno/Static_Example/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Static_Example.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Static_Example.dir/main.cpp.o -c /home/joel/Documents/CS_Study_Notes/C++_Programing/Cherno/Static_Example/main.cpp

CMakeFiles/Static_Example.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Static_Example.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/joel/Documents/CS_Study_Notes/C++_Programing/Cherno/Static_Example/main.cpp > CMakeFiles/Static_Example.dir/main.cpp.i

CMakeFiles/Static_Example.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Static_Example.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/joel/Documents/CS_Study_Notes/C++_Programing/Cherno/Static_Example/main.cpp -o CMakeFiles/Static_Example.dir/main.cpp.s

CMakeFiles/Static_Example.dir/Static.cpp.o: CMakeFiles/Static_Example.dir/flags.make
CMakeFiles/Static_Example.dir/Static.cpp.o: ../Static.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/joel/Documents/CS_Study_Notes/C++_Programing/Cherno/Static_Example/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Static_Example.dir/Static.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Static_Example.dir/Static.cpp.o -c /home/joel/Documents/CS_Study_Notes/C++_Programing/Cherno/Static_Example/Static.cpp

CMakeFiles/Static_Example.dir/Static.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Static_Example.dir/Static.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/joel/Documents/CS_Study_Notes/C++_Programing/Cherno/Static_Example/Static.cpp > CMakeFiles/Static_Example.dir/Static.cpp.i

CMakeFiles/Static_Example.dir/Static.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Static_Example.dir/Static.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/joel/Documents/CS_Study_Notes/C++_Programing/Cherno/Static_Example/Static.cpp -o CMakeFiles/Static_Example.dir/Static.cpp.s

# Object files for target Static_Example
Static_Example_OBJECTS = \
"CMakeFiles/Static_Example.dir/main.cpp.o" \
"CMakeFiles/Static_Example.dir/Static.cpp.o"

# External object files for target Static_Example
Static_Example_EXTERNAL_OBJECTS =

Static_Example: CMakeFiles/Static_Example.dir/main.cpp.o
Static_Example: CMakeFiles/Static_Example.dir/Static.cpp.o
Static_Example: CMakeFiles/Static_Example.dir/build.make
Static_Example: CMakeFiles/Static_Example.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/joel/Documents/CS_Study_Notes/C++_Programing/Cherno/Static_Example/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Static_Example"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Static_Example.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Static_Example.dir/build: Static_Example

.PHONY : CMakeFiles/Static_Example.dir/build

CMakeFiles/Static_Example.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Static_Example.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Static_Example.dir/clean

CMakeFiles/Static_Example.dir/depend:
	cd /home/joel/Documents/CS_Study_Notes/C++_Programing/Cherno/Static_Example/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/joel/Documents/CS_Study_Notes/C++_Programing/Cherno/Static_Example /home/joel/Documents/CS_Study_Notes/C++_Programing/Cherno/Static_Example /home/joel/Documents/CS_Study_Notes/C++_Programing/Cherno/Static_Example/cmake-build-debug /home/joel/Documents/CS_Study_Notes/C++_Programing/Cherno/Static_Example/cmake-build-debug /home/joel/Documents/CS_Study_Notes/C++_Programing/Cherno/Static_Example/cmake-build-debug/CMakeFiles/Static_Example.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Static_Example.dir/depend


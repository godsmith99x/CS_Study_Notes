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
CMAKE_COMMAND = /home/joel/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/203.7148.70/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/joel/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/203.7148.70/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/joel/Documents/CS_Study_Notes/C++_Programing/Bank_Account_Example

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/joel/Documents/CS_Study_Notes/C++_Programing/Bank_Account_Example/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Bank_Account_Example.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Bank_Account_Example.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Bank_Account_Example.dir/flags.make

CMakeFiles/Bank_Account_Example.dir/main.cpp.o: CMakeFiles/Bank_Account_Example.dir/flags.make
CMakeFiles/Bank_Account_Example.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/joel/Documents/CS_Study_Notes/C++_Programing/Bank_Account_Example/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Bank_Account_Example.dir/main.cpp.o"
	/usr/bin/g++-10  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Bank_Account_Example.dir/main.cpp.o -c /home/joel/Documents/CS_Study_Notes/C++_Programing/Bank_Account_Example/main.cpp

CMakeFiles/Bank_Account_Example.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Bank_Account_Example.dir/main.cpp.i"
	/usr/bin/g++-10 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/joel/Documents/CS_Study_Notes/C++_Programing/Bank_Account_Example/main.cpp > CMakeFiles/Bank_Account_Example.dir/main.cpp.i

CMakeFiles/Bank_Account_Example.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Bank_Account_Example.dir/main.cpp.s"
	/usr/bin/g++-10 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/joel/Documents/CS_Study_Notes/C++_Programing/Bank_Account_Example/main.cpp -o CMakeFiles/Bank_Account_Example.dir/main.cpp.s

CMakeFiles/Bank_Account_Example.dir/Account.cpp.o: CMakeFiles/Bank_Account_Example.dir/flags.make
CMakeFiles/Bank_Account_Example.dir/Account.cpp.o: ../Account.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/joel/Documents/CS_Study_Notes/C++_Programing/Bank_Account_Example/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Bank_Account_Example.dir/Account.cpp.o"
	/usr/bin/g++-10  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Bank_Account_Example.dir/Account.cpp.o -c /home/joel/Documents/CS_Study_Notes/C++_Programing/Bank_Account_Example/Account.cpp

CMakeFiles/Bank_Account_Example.dir/Account.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Bank_Account_Example.dir/Account.cpp.i"
	/usr/bin/g++-10 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/joel/Documents/CS_Study_Notes/C++_Programing/Bank_Account_Example/Account.cpp > CMakeFiles/Bank_Account_Example.dir/Account.cpp.i

CMakeFiles/Bank_Account_Example.dir/Account.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Bank_Account_Example.dir/Account.cpp.s"
	/usr/bin/g++-10 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/joel/Documents/CS_Study_Notes/C++_Programing/Bank_Account_Example/Account.cpp -o CMakeFiles/Bank_Account_Example.dir/Account.cpp.s

# Object files for target Bank_Account_Example
Bank_Account_Example_OBJECTS = \
"CMakeFiles/Bank_Account_Example.dir/main.cpp.o" \
"CMakeFiles/Bank_Account_Example.dir/Account.cpp.o"

# External object files for target Bank_Account_Example
Bank_Account_Example_EXTERNAL_OBJECTS =

Bank_Account_Example: CMakeFiles/Bank_Account_Example.dir/main.cpp.o
Bank_Account_Example: CMakeFiles/Bank_Account_Example.dir/Account.cpp.o
Bank_Account_Example: CMakeFiles/Bank_Account_Example.dir/build.make
Bank_Account_Example: CMakeFiles/Bank_Account_Example.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/joel/Documents/CS_Study_Notes/C++_Programing/Bank_Account_Example/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Bank_Account_Example"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Bank_Account_Example.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Bank_Account_Example.dir/build: Bank_Account_Example

.PHONY : CMakeFiles/Bank_Account_Example.dir/build

CMakeFiles/Bank_Account_Example.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Bank_Account_Example.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Bank_Account_Example.dir/clean

CMakeFiles/Bank_Account_Example.dir/depend:
	cd /home/joel/Documents/CS_Study_Notes/C++_Programing/Bank_Account_Example/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/joel/Documents/CS_Study_Notes/C++_Programing/Bank_Account_Example /home/joel/Documents/CS_Study_Notes/C++_Programing/Bank_Account_Example /home/joel/Documents/CS_Study_Notes/C++_Programing/Bank_Account_Example/cmake-build-debug /home/joel/Documents/CS_Study_Notes/C++_Programing/Bank_Account_Example/cmake-build-debug /home/joel/Documents/CS_Study_Notes/C++_Programing/Bank_Account_Example/cmake-build-debug/CMakeFiles/Bank_Account_Example.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Bank_Account_Example.dir/depend


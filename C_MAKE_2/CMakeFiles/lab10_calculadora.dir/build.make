# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sebastian/Documents/C-Make/CCI_LAB_10/CODIGO_2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sebastian/Documents/C-Make/CCI_LAB_10/C_MAKE_2

# Include any dependencies generated for this target.
include CMakeFiles/lab10_calculadora.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lab10_calculadora.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab10_calculadora.dir/flags.make

CMakeFiles/lab10_calculadora.dir/lab10_calculadora.cpp.o: CMakeFiles/lab10_calculadora.dir/flags.make
CMakeFiles/lab10_calculadora.dir/lab10_calculadora.cpp.o: /home/sebastian/Documents/C-Make/CCI_LAB_10/CODIGO_2/lab10_calculadora.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sebastian/Documents/C-Make/CCI_LAB_10/C_MAKE_2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab10_calculadora.dir/lab10_calculadora.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/lab10_calculadora.dir/lab10_calculadora.cpp.o -c /home/sebastian/Documents/C-Make/CCI_LAB_10/CODIGO_2/lab10_calculadora.cpp

CMakeFiles/lab10_calculadora.dir/lab10_calculadora.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab10_calculadora.dir/lab10_calculadora.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sebastian/Documents/C-Make/CCI_LAB_10/CODIGO_2/lab10_calculadora.cpp > CMakeFiles/lab10_calculadora.dir/lab10_calculadora.cpp.i

CMakeFiles/lab10_calculadora.dir/lab10_calculadora.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab10_calculadora.dir/lab10_calculadora.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sebastian/Documents/C-Make/CCI_LAB_10/CODIGO_2/lab10_calculadora.cpp -o CMakeFiles/lab10_calculadora.dir/lab10_calculadora.cpp.s

CMakeFiles/lab10_calculadora.dir/lab10_calculadora.cpp.o.requires:

.PHONY : CMakeFiles/lab10_calculadora.dir/lab10_calculadora.cpp.o.requires

CMakeFiles/lab10_calculadora.dir/lab10_calculadora.cpp.o.provides: CMakeFiles/lab10_calculadora.dir/lab10_calculadora.cpp.o.requires
	$(MAKE) -f CMakeFiles/lab10_calculadora.dir/build.make CMakeFiles/lab10_calculadora.dir/lab10_calculadora.cpp.o.provides.build
.PHONY : CMakeFiles/lab10_calculadora.dir/lab10_calculadora.cpp.o.provides

CMakeFiles/lab10_calculadora.dir/lab10_calculadora.cpp.o.provides.build: CMakeFiles/lab10_calculadora.dir/lab10_calculadora.cpp.o


# Object files for target lab10_calculadora
lab10_calculadora_OBJECTS = \
"CMakeFiles/lab10_calculadora.dir/lab10_calculadora.cpp.o"

# External object files for target lab10_calculadora
lab10_calculadora_EXTERNAL_OBJECTS =

lab10_calculadora: CMakeFiles/lab10_calculadora.dir/lab10_calculadora.cpp.o
lab10_calculadora: CMakeFiles/lab10_calculadora.dir/build.make
lab10_calculadora: CMakeFiles/lab10_calculadora.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sebastian/Documents/C-Make/CCI_LAB_10/C_MAKE_2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable lab10_calculadora"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/lab10_calculadora.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab10_calculadora.dir/build: lab10_calculadora

.PHONY : CMakeFiles/lab10_calculadora.dir/build

CMakeFiles/lab10_calculadora.dir/requires: CMakeFiles/lab10_calculadora.dir/lab10_calculadora.cpp.o.requires

.PHONY : CMakeFiles/lab10_calculadora.dir/requires

CMakeFiles/lab10_calculadora.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/lab10_calculadora.dir/cmake_clean.cmake
.PHONY : CMakeFiles/lab10_calculadora.dir/clean

CMakeFiles/lab10_calculadora.dir/depend:
	cd /home/sebastian/Documents/C-Make/CCI_LAB_10/C_MAKE_2 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sebastian/Documents/C-Make/CCI_LAB_10/CODIGO_2 /home/sebastian/Documents/C-Make/CCI_LAB_10/CODIGO_2 /home/sebastian/Documents/C-Make/CCI_LAB_10/C_MAKE_2 /home/sebastian/Documents/C-Make/CCI_LAB_10/C_MAKE_2 /home/sebastian/Documents/C-Make/CCI_LAB_10/C_MAKE_2/CMakeFiles/lab10_calculadora.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab10_calculadora.dir/depend

# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/gabrienzo/atvd1/trabalho-3-2-dna-profiler-Gabrienzo

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/gabrienzo/atvd1/trabalho-3-2-dna-profiler-Gabrienzo/build

# Include any dependencies generated for this target.
include CMakeFiles/dna_profiler.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/dna_profiler.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dna_profiler.dir/flags.make

CMakeFiles/dna_profiler.dir/src/bancodedados.cpp.o: CMakeFiles/dna_profiler.dir/flags.make
CMakeFiles/dna_profiler.dir/src/bancodedados.cpp.o: ../src/bancodedados.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabrienzo/atvd1/trabalho-3-2-dna-profiler-Gabrienzo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/dna_profiler.dir/src/bancodedados.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dna_profiler.dir/src/bancodedados.cpp.o -c /home/gabrienzo/atvd1/trabalho-3-2-dna-profiler-Gabrienzo/src/bancodedados.cpp

CMakeFiles/dna_profiler.dir/src/bancodedados.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dna_profiler.dir/src/bancodedados.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabrienzo/atvd1/trabalho-3-2-dna-profiler-Gabrienzo/src/bancodedados.cpp > CMakeFiles/dna_profiler.dir/src/bancodedados.cpp.i

CMakeFiles/dna_profiler.dir/src/bancodedados.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dna_profiler.dir/src/bancodedados.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabrienzo/atvd1/trabalho-3-2-dna-profiler-Gabrienzo/src/bancodedados.cpp -o CMakeFiles/dna_profiler.dir/src/bancodedados.cpp.s

CMakeFiles/dna_profiler.dir/src/processador.cpp.o: CMakeFiles/dna_profiler.dir/flags.make
CMakeFiles/dna_profiler.dir/src/processador.cpp.o: ../src/processador.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabrienzo/atvd1/trabalho-3-2-dna-profiler-Gabrienzo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/dna_profiler.dir/src/processador.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dna_profiler.dir/src/processador.cpp.o -c /home/gabrienzo/atvd1/trabalho-3-2-dna-profiler-Gabrienzo/src/processador.cpp

CMakeFiles/dna_profiler.dir/src/processador.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dna_profiler.dir/src/processador.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabrienzo/atvd1/trabalho-3-2-dna-profiler-Gabrienzo/src/processador.cpp > CMakeFiles/dna_profiler.dir/src/processador.cpp.i

CMakeFiles/dna_profiler.dir/src/processador.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dna_profiler.dir/src/processador.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabrienzo/atvd1/trabalho-3-2-dna-profiler-Gabrienzo/src/processador.cpp -o CMakeFiles/dna_profiler.dir/src/processador.cpp.s

CMakeFiles/dna_profiler.dir/src/interface.cpp.o: CMakeFiles/dna_profiler.dir/flags.make
CMakeFiles/dna_profiler.dir/src/interface.cpp.o: ../src/interface.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabrienzo/atvd1/trabalho-3-2-dna-profiler-Gabrienzo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/dna_profiler.dir/src/interface.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dna_profiler.dir/src/interface.cpp.o -c /home/gabrienzo/atvd1/trabalho-3-2-dna-profiler-Gabrienzo/src/interface.cpp

CMakeFiles/dna_profiler.dir/src/interface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dna_profiler.dir/src/interface.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabrienzo/atvd1/trabalho-3-2-dna-profiler-Gabrienzo/src/interface.cpp > CMakeFiles/dna_profiler.dir/src/interface.cpp.i

CMakeFiles/dna_profiler.dir/src/interface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dna_profiler.dir/src/interface.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabrienzo/atvd1/trabalho-3-2-dna-profiler-Gabrienzo/src/interface.cpp -o CMakeFiles/dna_profiler.dir/src/interface.cpp.s

CMakeFiles/dna_profiler.dir/src/sequencia.cpp.o: CMakeFiles/dna_profiler.dir/flags.make
CMakeFiles/dna_profiler.dir/src/sequencia.cpp.o: ../src/sequencia.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabrienzo/atvd1/trabalho-3-2-dna-profiler-Gabrienzo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/dna_profiler.dir/src/sequencia.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dna_profiler.dir/src/sequencia.cpp.o -c /home/gabrienzo/atvd1/trabalho-3-2-dna-profiler-Gabrienzo/src/sequencia.cpp

CMakeFiles/dna_profiler.dir/src/sequencia.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dna_profiler.dir/src/sequencia.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabrienzo/atvd1/trabalho-3-2-dna-profiler-Gabrienzo/src/sequencia.cpp > CMakeFiles/dna_profiler.dir/src/sequencia.cpp.i

CMakeFiles/dna_profiler.dir/src/sequencia.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dna_profiler.dir/src/sequencia.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabrienzo/atvd1/trabalho-3-2-dna-profiler-Gabrienzo/src/sequencia.cpp -o CMakeFiles/dna_profiler.dir/src/sequencia.cpp.s

CMakeFiles/dna_profiler.dir/src/dna.cpp.o: CMakeFiles/dna_profiler.dir/flags.make
CMakeFiles/dna_profiler.dir/src/dna.cpp.o: ../src/dna.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabrienzo/atvd1/trabalho-3-2-dna-profiler-Gabrienzo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/dna_profiler.dir/src/dna.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dna_profiler.dir/src/dna.cpp.o -c /home/gabrienzo/atvd1/trabalho-3-2-dna-profiler-Gabrienzo/src/dna.cpp

CMakeFiles/dna_profiler.dir/src/dna.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dna_profiler.dir/src/dna.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabrienzo/atvd1/trabalho-3-2-dna-profiler-Gabrienzo/src/dna.cpp > CMakeFiles/dna_profiler.dir/src/dna.cpp.i

CMakeFiles/dna_profiler.dir/src/dna.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dna_profiler.dir/src/dna.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabrienzo/atvd1/trabalho-3-2-dna-profiler-Gabrienzo/src/dna.cpp -o CMakeFiles/dna_profiler.dir/src/dna.cpp.s

CMakeFiles/dna_profiler.dir/src/dna_profiler.cpp.o: CMakeFiles/dna_profiler.dir/flags.make
CMakeFiles/dna_profiler.dir/src/dna_profiler.cpp.o: ../src/dna_profiler.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/gabrienzo/atvd1/trabalho-3-2-dna-profiler-Gabrienzo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/dna_profiler.dir/src/dna_profiler.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/dna_profiler.dir/src/dna_profiler.cpp.o -c /home/gabrienzo/atvd1/trabalho-3-2-dna-profiler-Gabrienzo/src/dna_profiler.cpp

CMakeFiles/dna_profiler.dir/src/dna_profiler.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dna_profiler.dir/src/dna_profiler.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/gabrienzo/atvd1/trabalho-3-2-dna-profiler-Gabrienzo/src/dna_profiler.cpp > CMakeFiles/dna_profiler.dir/src/dna_profiler.cpp.i

CMakeFiles/dna_profiler.dir/src/dna_profiler.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dna_profiler.dir/src/dna_profiler.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/gabrienzo/atvd1/trabalho-3-2-dna-profiler-Gabrienzo/src/dna_profiler.cpp -o CMakeFiles/dna_profiler.dir/src/dna_profiler.cpp.s

# Object files for target dna_profiler
dna_profiler_OBJECTS = \
"CMakeFiles/dna_profiler.dir/src/bancodedados.cpp.o" \
"CMakeFiles/dna_profiler.dir/src/processador.cpp.o" \
"CMakeFiles/dna_profiler.dir/src/interface.cpp.o" \
"CMakeFiles/dna_profiler.dir/src/sequencia.cpp.o" \
"CMakeFiles/dna_profiler.dir/src/dna.cpp.o" \
"CMakeFiles/dna_profiler.dir/src/dna_profiler.cpp.o"

# External object files for target dna_profiler
dna_profiler_EXTERNAL_OBJECTS =

dna_profiler: CMakeFiles/dna_profiler.dir/src/bancodedados.cpp.o
dna_profiler: CMakeFiles/dna_profiler.dir/src/processador.cpp.o
dna_profiler: CMakeFiles/dna_profiler.dir/src/interface.cpp.o
dna_profiler: CMakeFiles/dna_profiler.dir/src/sequencia.cpp.o
dna_profiler: CMakeFiles/dna_profiler.dir/src/dna.cpp.o
dna_profiler: CMakeFiles/dna_profiler.dir/src/dna_profiler.cpp.o
dna_profiler: CMakeFiles/dna_profiler.dir/build.make
dna_profiler: CMakeFiles/dna_profiler.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/gabrienzo/atvd1/trabalho-3-2-dna-profiler-Gabrienzo/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable dna_profiler"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/dna_profiler.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dna_profiler.dir/build: dna_profiler

.PHONY : CMakeFiles/dna_profiler.dir/build

CMakeFiles/dna_profiler.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/dna_profiler.dir/cmake_clean.cmake
.PHONY : CMakeFiles/dna_profiler.dir/clean

CMakeFiles/dna_profiler.dir/depend:
	cd /home/gabrienzo/atvd1/trabalho-3-2-dna-profiler-Gabrienzo/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/gabrienzo/atvd1/trabalho-3-2-dna-profiler-Gabrienzo /home/gabrienzo/atvd1/trabalho-3-2-dna-profiler-Gabrienzo /home/gabrienzo/atvd1/trabalho-3-2-dna-profiler-Gabrienzo/build /home/gabrienzo/atvd1/trabalho-3-2-dna-profiler-Gabrienzo/build /home/gabrienzo/atvd1/trabalho-3-2-dna-profiler-Gabrienzo/build/CMakeFiles/dna_profiler.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/dna_profiler.dir/depend


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
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.22.2/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.22.2/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/parallelism/NQueens

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/parallelism/NQueens/build

# Include any dependencies generated for this target.
include CMakeFiles/NQueens.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/NQueens.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/NQueens.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/NQueens.dir/flags.make

CMakeFiles/NQueens.dir/NQueens.c.o: CMakeFiles/NQueens.dir/flags.make
CMakeFiles/NQueens.dir/NQueens.c.o: ../NQueens.c
CMakeFiles/NQueens.dir/NQueens.c.o: CMakeFiles/NQueens.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/parallelism/NQueens/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/NQueens.dir/NQueens.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/NQueens.dir/NQueens.c.o -MF CMakeFiles/NQueens.dir/NQueens.c.o.d -o CMakeFiles/NQueens.dir/NQueens.c.o -c /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/parallelism/NQueens/NQueens.c

CMakeFiles/NQueens.dir/NQueens.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/NQueens.dir/NQueens.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/parallelism/NQueens/NQueens.c > CMakeFiles/NQueens.dir/NQueens.c.i

CMakeFiles/NQueens.dir/NQueens.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/NQueens.dir/NQueens.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/parallelism/NQueens/NQueens.c -o CMakeFiles/NQueens.dir/NQueens.c.s

CMakeFiles/NQueens.dir/core/platform/lf_macos_support.c.o: CMakeFiles/NQueens.dir/flags.make
CMakeFiles/NQueens.dir/core/platform/lf_macos_support.c.o: ../core/platform/lf_macos_support.c
CMakeFiles/NQueens.dir/core/platform/lf_macos_support.c.o: CMakeFiles/NQueens.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/parallelism/NQueens/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/NQueens.dir/core/platform/lf_macos_support.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/NQueens.dir/core/platform/lf_macos_support.c.o -MF CMakeFiles/NQueens.dir/core/platform/lf_macos_support.c.o.d -o CMakeFiles/NQueens.dir/core/platform/lf_macos_support.c.o -c /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/parallelism/NQueens/core/platform/lf_macos_support.c

CMakeFiles/NQueens.dir/core/platform/lf_macos_support.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/NQueens.dir/core/platform/lf_macos_support.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/parallelism/NQueens/core/platform/lf_macos_support.c > CMakeFiles/NQueens.dir/core/platform/lf_macos_support.c.i

CMakeFiles/NQueens.dir/core/platform/lf_macos_support.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/NQueens.dir/core/platform/lf_macos_support.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/parallelism/NQueens/core/platform/lf_macos_support.c -o CMakeFiles/NQueens.dir/core/platform/lf_macos_support.c.s

CMakeFiles/NQueens.dir/ctarget/schedule.c.o: CMakeFiles/NQueens.dir/flags.make
CMakeFiles/NQueens.dir/ctarget/schedule.c.o: ../ctarget/schedule.c
CMakeFiles/NQueens.dir/ctarget/schedule.c.o: CMakeFiles/NQueens.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/parallelism/NQueens/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/NQueens.dir/ctarget/schedule.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/NQueens.dir/ctarget/schedule.c.o -MF CMakeFiles/NQueens.dir/ctarget/schedule.c.o.d -o CMakeFiles/NQueens.dir/ctarget/schedule.c.o -c /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/parallelism/NQueens/ctarget/schedule.c

CMakeFiles/NQueens.dir/ctarget/schedule.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/NQueens.dir/ctarget/schedule.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/parallelism/NQueens/ctarget/schedule.c > CMakeFiles/NQueens.dir/ctarget/schedule.c.i

CMakeFiles/NQueens.dir/ctarget/schedule.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/NQueens.dir/ctarget/schedule.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/parallelism/NQueens/ctarget/schedule.c -o CMakeFiles/NQueens.dir/ctarget/schedule.c.s

CMakeFiles/NQueens.dir/ctarget/util.c.o: CMakeFiles/NQueens.dir/flags.make
CMakeFiles/NQueens.dir/ctarget/util.c.o: ../ctarget/util.c
CMakeFiles/NQueens.dir/ctarget/util.c.o: CMakeFiles/NQueens.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/parallelism/NQueens/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/NQueens.dir/ctarget/util.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/NQueens.dir/ctarget/util.c.o -MF CMakeFiles/NQueens.dir/ctarget/util.c.o.d -o CMakeFiles/NQueens.dir/ctarget/util.c.o -c /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/parallelism/NQueens/ctarget/util.c

CMakeFiles/NQueens.dir/ctarget/util.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/NQueens.dir/ctarget/util.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/parallelism/NQueens/ctarget/util.c > CMakeFiles/NQueens.dir/ctarget/util.c.i

CMakeFiles/NQueens.dir/ctarget/util.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/NQueens.dir/ctarget/util.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/parallelism/NQueens/ctarget/util.c -o CMakeFiles/NQueens.dir/ctarget/util.c.s

CMakeFiles/NQueens.dir/core/mixed_radix.c.o: CMakeFiles/NQueens.dir/flags.make
CMakeFiles/NQueens.dir/core/mixed_radix.c.o: ../core/mixed_radix.c
CMakeFiles/NQueens.dir/core/mixed_radix.c.o: CMakeFiles/NQueens.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/parallelism/NQueens/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/NQueens.dir/core/mixed_radix.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/NQueens.dir/core/mixed_radix.c.o -MF CMakeFiles/NQueens.dir/core/mixed_radix.c.o.d -o CMakeFiles/NQueens.dir/core/mixed_radix.c.o -c /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/parallelism/NQueens/core/mixed_radix.c

CMakeFiles/NQueens.dir/core/mixed_radix.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/NQueens.dir/core/mixed_radix.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/parallelism/NQueens/core/mixed_radix.c > CMakeFiles/NQueens.dir/core/mixed_radix.c.i

CMakeFiles/NQueens.dir/core/mixed_radix.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/NQueens.dir/core/mixed_radix.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/parallelism/NQueens/core/mixed_radix.c -o CMakeFiles/NQueens.dir/core/mixed_radix.c.s

CMakeFiles/NQueens.dir/deque.c.o: CMakeFiles/NQueens.dir/flags.make
CMakeFiles/NQueens.dir/deque.c.o: ../deque.c
CMakeFiles/NQueens.dir/deque.c.o: CMakeFiles/NQueens.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/parallelism/NQueens/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/NQueens.dir/deque.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/NQueens.dir/deque.c.o -MF CMakeFiles/NQueens.dir/deque.c.o.d -o CMakeFiles/NQueens.dir/deque.c.o -c /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/parallelism/NQueens/deque.c

CMakeFiles/NQueens.dir/deque.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/NQueens.dir/deque.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/parallelism/NQueens/deque.c > CMakeFiles/NQueens.dir/deque.c.i

CMakeFiles/NQueens.dir/deque.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/NQueens.dir/deque.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/parallelism/NQueens/deque.c -o CMakeFiles/NQueens.dir/deque.c.s

# Object files for target NQueens
NQueens_OBJECTS = \
"CMakeFiles/NQueens.dir/NQueens.c.o" \
"CMakeFiles/NQueens.dir/core/platform/lf_macos_support.c.o" \
"CMakeFiles/NQueens.dir/ctarget/schedule.c.o" \
"CMakeFiles/NQueens.dir/ctarget/util.c.o" \
"CMakeFiles/NQueens.dir/core/mixed_radix.c.o" \
"CMakeFiles/NQueens.dir/deque.c.o"

# External object files for target NQueens
NQueens_EXTERNAL_OBJECTS =

NQueens: CMakeFiles/NQueens.dir/NQueens.c.o
NQueens: CMakeFiles/NQueens.dir/core/platform/lf_macos_support.c.o
NQueens: CMakeFiles/NQueens.dir/ctarget/schedule.c.o
NQueens: CMakeFiles/NQueens.dir/ctarget/util.c.o
NQueens: CMakeFiles/NQueens.dir/core/mixed_radix.c.o
NQueens: CMakeFiles/NQueens.dir/deque.c.o
NQueens: CMakeFiles/NQueens.dir/build.make
NQueens: CMakeFiles/NQueens.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/parallelism/NQueens/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking C executable NQueens"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/NQueens.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/NQueens.dir/build: NQueens
.PHONY : CMakeFiles/NQueens.dir/build

CMakeFiles/NQueens.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/NQueens.dir/cmake_clean.cmake
.PHONY : CMakeFiles/NQueens.dir/clean

CMakeFiles/NQueens.dir/depend:
	cd /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/parallelism/NQueens/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/parallelism/NQueens /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/parallelism/NQueens /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/parallelism/NQueens/build /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/parallelism/NQueens/build /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/parallelism/NQueens/build/CMakeFiles/NQueens.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/NQueens.dir/depend


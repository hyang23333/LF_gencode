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
CMAKE_SOURCE_DIR = /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/concurrency/SleepingBarber

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/concurrency/SleepingBarber/build

# Include any dependencies generated for this target.
include CMakeFiles/SleepingBarber.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/SleepingBarber.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/SleepingBarber.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/SleepingBarber.dir/flags.make

CMakeFiles/SleepingBarber.dir/SleepingBarber.c.o: CMakeFiles/SleepingBarber.dir/flags.make
CMakeFiles/SleepingBarber.dir/SleepingBarber.c.o: ../SleepingBarber.c
CMakeFiles/SleepingBarber.dir/SleepingBarber.c.o: CMakeFiles/SleepingBarber.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/concurrency/SleepingBarber/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/SleepingBarber.dir/SleepingBarber.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/SleepingBarber.dir/SleepingBarber.c.o -MF CMakeFiles/SleepingBarber.dir/SleepingBarber.c.o.d -o CMakeFiles/SleepingBarber.dir/SleepingBarber.c.o -c /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/concurrency/SleepingBarber/SleepingBarber.c

CMakeFiles/SleepingBarber.dir/SleepingBarber.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SleepingBarber.dir/SleepingBarber.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/concurrency/SleepingBarber/SleepingBarber.c > CMakeFiles/SleepingBarber.dir/SleepingBarber.c.i

CMakeFiles/SleepingBarber.dir/SleepingBarber.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SleepingBarber.dir/SleepingBarber.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/concurrency/SleepingBarber/SleepingBarber.c -o CMakeFiles/SleepingBarber.dir/SleepingBarber.c.s

CMakeFiles/SleepingBarber.dir/core/platform/lf_macos_support.c.o: CMakeFiles/SleepingBarber.dir/flags.make
CMakeFiles/SleepingBarber.dir/core/platform/lf_macos_support.c.o: ../core/platform/lf_macos_support.c
CMakeFiles/SleepingBarber.dir/core/platform/lf_macos_support.c.o: CMakeFiles/SleepingBarber.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/concurrency/SleepingBarber/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/SleepingBarber.dir/core/platform/lf_macos_support.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/SleepingBarber.dir/core/platform/lf_macos_support.c.o -MF CMakeFiles/SleepingBarber.dir/core/platform/lf_macos_support.c.o.d -o CMakeFiles/SleepingBarber.dir/core/platform/lf_macos_support.c.o -c /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/concurrency/SleepingBarber/core/platform/lf_macos_support.c

CMakeFiles/SleepingBarber.dir/core/platform/lf_macos_support.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SleepingBarber.dir/core/platform/lf_macos_support.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/concurrency/SleepingBarber/core/platform/lf_macos_support.c > CMakeFiles/SleepingBarber.dir/core/platform/lf_macos_support.c.i

CMakeFiles/SleepingBarber.dir/core/platform/lf_macos_support.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SleepingBarber.dir/core/platform/lf_macos_support.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/concurrency/SleepingBarber/core/platform/lf_macos_support.c -o CMakeFiles/SleepingBarber.dir/core/platform/lf_macos_support.c.s

CMakeFiles/SleepingBarber.dir/ctarget/schedule.c.o: CMakeFiles/SleepingBarber.dir/flags.make
CMakeFiles/SleepingBarber.dir/ctarget/schedule.c.o: ../ctarget/schedule.c
CMakeFiles/SleepingBarber.dir/ctarget/schedule.c.o: CMakeFiles/SleepingBarber.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/concurrency/SleepingBarber/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/SleepingBarber.dir/ctarget/schedule.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/SleepingBarber.dir/ctarget/schedule.c.o -MF CMakeFiles/SleepingBarber.dir/ctarget/schedule.c.o.d -o CMakeFiles/SleepingBarber.dir/ctarget/schedule.c.o -c /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/concurrency/SleepingBarber/ctarget/schedule.c

CMakeFiles/SleepingBarber.dir/ctarget/schedule.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SleepingBarber.dir/ctarget/schedule.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/concurrency/SleepingBarber/ctarget/schedule.c > CMakeFiles/SleepingBarber.dir/ctarget/schedule.c.i

CMakeFiles/SleepingBarber.dir/ctarget/schedule.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SleepingBarber.dir/ctarget/schedule.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/concurrency/SleepingBarber/ctarget/schedule.c -o CMakeFiles/SleepingBarber.dir/ctarget/schedule.c.s

CMakeFiles/SleepingBarber.dir/ctarget/util.c.o: CMakeFiles/SleepingBarber.dir/flags.make
CMakeFiles/SleepingBarber.dir/ctarget/util.c.o: ../ctarget/util.c
CMakeFiles/SleepingBarber.dir/ctarget/util.c.o: CMakeFiles/SleepingBarber.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/concurrency/SleepingBarber/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/SleepingBarber.dir/ctarget/util.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/SleepingBarber.dir/ctarget/util.c.o -MF CMakeFiles/SleepingBarber.dir/ctarget/util.c.o.d -o CMakeFiles/SleepingBarber.dir/ctarget/util.c.o -c /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/concurrency/SleepingBarber/ctarget/util.c

CMakeFiles/SleepingBarber.dir/ctarget/util.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SleepingBarber.dir/ctarget/util.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/concurrency/SleepingBarber/ctarget/util.c > CMakeFiles/SleepingBarber.dir/ctarget/util.c.i

CMakeFiles/SleepingBarber.dir/ctarget/util.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SleepingBarber.dir/ctarget/util.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/concurrency/SleepingBarber/ctarget/util.c -o CMakeFiles/SleepingBarber.dir/ctarget/util.c.s

CMakeFiles/SleepingBarber.dir/core/mixed_radix.c.o: CMakeFiles/SleepingBarber.dir/flags.make
CMakeFiles/SleepingBarber.dir/core/mixed_radix.c.o: ../core/mixed_radix.c
CMakeFiles/SleepingBarber.dir/core/mixed_radix.c.o: CMakeFiles/SleepingBarber.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/concurrency/SleepingBarber/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/SleepingBarber.dir/core/mixed_radix.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/SleepingBarber.dir/core/mixed_radix.c.o -MF CMakeFiles/SleepingBarber.dir/core/mixed_radix.c.o.d -o CMakeFiles/SleepingBarber.dir/core/mixed_radix.c.o -c /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/concurrency/SleepingBarber/core/mixed_radix.c

CMakeFiles/SleepingBarber.dir/core/mixed_radix.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/SleepingBarber.dir/core/mixed_radix.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/concurrency/SleepingBarber/core/mixed_radix.c > CMakeFiles/SleepingBarber.dir/core/mixed_radix.c.i

CMakeFiles/SleepingBarber.dir/core/mixed_radix.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/SleepingBarber.dir/core/mixed_radix.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/concurrency/SleepingBarber/core/mixed_radix.c -o CMakeFiles/SleepingBarber.dir/core/mixed_radix.c.s

# Object files for target SleepingBarber
SleepingBarber_OBJECTS = \
"CMakeFiles/SleepingBarber.dir/SleepingBarber.c.o" \
"CMakeFiles/SleepingBarber.dir/core/platform/lf_macos_support.c.o" \
"CMakeFiles/SleepingBarber.dir/ctarget/schedule.c.o" \
"CMakeFiles/SleepingBarber.dir/ctarget/util.c.o" \
"CMakeFiles/SleepingBarber.dir/core/mixed_radix.c.o"

# External object files for target SleepingBarber
SleepingBarber_EXTERNAL_OBJECTS =

SleepingBarber: CMakeFiles/SleepingBarber.dir/SleepingBarber.c.o
SleepingBarber: CMakeFiles/SleepingBarber.dir/core/platform/lf_macos_support.c.o
SleepingBarber: CMakeFiles/SleepingBarber.dir/ctarget/schedule.c.o
SleepingBarber: CMakeFiles/SleepingBarber.dir/ctarget/util.c.o
SleepingBarber: CMakeFiles/SleepingBarber.dir/core/mixed_radix.c.o
SleepingBarber: CMakeFiles/SleepingBarber.dir/build.make
SleepingBarber: CMakeFiles/SleepingBarber.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/concurrency/SleepingBarber/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking C executable SleepingBarber"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SleepingBarber.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/SleepingBarber.dir/build: SleepingBarber
.PHONY : CMakeFiles/SleepingBarber.dir/build

CMakeFiles/SleepingBarber.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/SleepingBarber.dir/cmake_clean.cmake
.PHONY : CMakeFiles/SleepingBarber.dir/clean

CMakeFiles/SleepingBarber.dir/depend:
	cd /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/concurrency/SleepingBarber/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/concurrency/SleepingBarber /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/concurrency/SleepingBarber /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/concurrency/SleepingBarber/build /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/concurrency/SleepingBarber/build /Users/yanghuang/Projects/cs267/benchmarks-lingua-franca/C/Savina/src-gen/concurrency/SleepingBarber/build/CMakeFiles/SleepingBarber.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/SleepingBarber.dir/depend


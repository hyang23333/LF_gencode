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
CMAKE_SOURCE_DIR = /Users/yanghuang/Projects/cs267/lingua-franca/test/C/src-gen/TimeLimit

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/yanghuang/Projects/cs267/lingua-franca/test/C/src-gen/TimeLimit/build

# Include any dependencies generated for this target.
include CMakeFiles/TimeLimit.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/TimeLimit.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/TimeLimit.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/TimeLimit.dir/flags.make

CMakeFiles/TimeLimit.dir/TimeLimit.c.o: CMakeFiles/TimeLimit.dir/flags.make
CMakeFiles/TimeLimit.dir/TimeLimit.c.o: ../TimeLimit.c
CMakeFiles/TimeLimit.dir/TimeLimit.c.o: CMakeFiles/TimeLimit.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yanghuang/Projects/cs267/lingua-franca/test/C/src-gen/TimeLimit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/TimeLimit.dir/TimeLimit.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/TimeLimit.dir/TimeLimit.c.o -MF CMakeFiles/TimeLimit.dir/TimeLimit.c.o.d -o CMakeFiles/TimeLimit.dir/TimeLimit.c.o -c /Users/yanghuang/Projects/cs267/lingua-franca/test/C/src-gen/TimeLimit/TimeLimit.c

CMakeFiles/TimeLimit.dir/TimeLimit.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TimeLimit.dir/TimeLimit.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/yanghuang/Projects/cs267/lingua-franca/test/C/src-gen/TimeLimit/TimeLimit.c > CMakeFiles/TimeLimit.dir/TimeLimit.c.i

CMakeFiles/TimeLimit.dir/TimeLimit.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TimeLimit.dir/TimeLimit.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/yanghuang/Projects/cs267/lingua-franca/test/C/src-gen/TimeLimit/TimeLimit.c -o CMakeFiles/TimeLimit.dir/TimeLimit.c.s

CMakeFiles/TimeLimit.dir/core/platform/lf_macos_support.c.o: CMakeFiles/TimeLimit.dir/flags.make
CMakeFiles/TimeLimit.dir/core/platform/lf_macos_support.c.o: ../core/platform/lf_macos_support.c
CMakeFiles/TimeLimit.dir/core/platform/lf_macos_support.c.o: CMakeFiles/TimeLimit.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yanghuang/Projects/cs267/lingua-franca/test/C/src-gen/TimeLimit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/TimeLimit.dir/core/platform/lf_macos_support.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/TimeLimit.dir/core/platform/lf_macos_support.c.o -MF CMakeFiles/TimeLimit.dir/core/platform/lf_macos_support.c.o.d -o CMakeFiles/TimeLimit.dir/core/platform/lf_macos_support.c.o -c /Users/yanghuang/Projects/cs267/lingua-franca/test/C/src-gen/TimeLimit/core/platform/lf_macos_support.c

CMakeFiles/TimeLimit.dir/core/platform/lf_macos_support.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TimeLimit.dir/core/platform/lf_macos_support.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/yanghuang/Projects/cs267/lingua-franca/test/C/src-gen/TimeLimit/core/platform/lf_macos_support.c > CMakeFiles/TimeLimit.dir/core/platform/lf_macos_support.c.i

CMakeFiles/TimeLimit.dir/core/platform/lf_macos_support.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TimeLimit.dir/core/platform/lf_macos_support.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/yanghuang/Projects/cs267/lingua-franca/test/C/src-gen/TimeLimit/core/platform/lf_macos_support.c -o CMakeFiles/TimeLimit.dir/core/platform/lf_macos_support.c.s

CMakeFiles/TimeLimit.dir/ctarget/schedule.c.o: CMakeFiles/TimeLimit.dir/flags.make
CMakeFiles/TimeLimit.dir/ctarget/schedule.c.o: ../ctarget/schedule.c
CMakeFiles/TimeLimit.dir/ctarget/schedule.c.o: CMakeFiles/TimeLimit.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yanghuang/Projects/cs267/lingua-franca/test/C/src-gen/TimeLimit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/TimeLimit.dir/ctarget/schedule.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/TimeLimit.dir/ctarget/schedule.c.o -MF CMakeFiles/TimeLimit.dir/ctarget/schedule.c.o.d -o CMakeFiles/TimeLimit.dir/ctarget/schedule.c.o -c /Users/yanghuang/Projects/cs267/lingua-franca/test/C/src-gen/TimeLimit/ctarget/schedule.c

CMakeFiles/TimeLimit.dir/ctarget/schedule.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TimeLimit.dir/ctarget/schedule.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/yanghuang/Projects/cs267/lingua-franca/test/C/src-gen/TimeLimit/ctarget/schedule.c > CMakeFiles/TimeLimit.dir/ctarget/schedule.c.i

CMakeFiles/TimeLimit.dir/ctarget/schedule.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TimeLimit.dir/ctarget/schedule.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/yanghuang/Projects/cs267/lingua-franca/test/C/src-gen/TimeLimit/ctarget/schedule.c -o CMakeFiles/TimeLimit.dir/ctarget/schedule.c.s

CMakeFiles/TimeLimit.dir/ctarget/util.c.o: CMakeFiles/TimeLimit.dir/flags.make
CMakeFiles/TimeLimit.dir/ctarget/util.c.o: ../ctarget/util.c
CMakeFiles/TimeLimit.dir/ctarget/util.c.o: CMakeFiles/TimeLimit.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yanghuang/Projects/cs267/lingua-franca/test/C/src-gen/TimeLimit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/TimeLimit.dir/ctarget/util.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/TimeLimit.dir/ctarget/util.c.o -MF CMakeFiles/TimeLimit.dir/ctarget/util.c.o.d -o CMakeFiles/TimeLimit.dir/ctarget/util.c.o -c /Users/yanghuang/Projects/cs267/lingua-franca/test/C/src-gen/TimeLimit/ctarget/util.c

CMakeFiles/TimeLimit.dir/ctarget/util.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TimeLimit.dir/ctarget/util.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/yanghuang/Projects/cs267/lingua-franca/test/C/src-gen/TimeLimit/ctarget/util.c > CMakeFiles/TimeLimit.dir/ctarget/util.c.i

CMakeFiles/TimeLimit.dir/ctarget/util.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TimeLimit.dir/ctarget/util.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/yanghuang/Projects/cs267/lingua-franca/test/C/src-gen/TimeLimit/ctarget/util.c -o CMakeFiles/TimeLimit.dir/ctarget/util.c.s

CMakeFiles/TimeLimit.dir/core/mixed_radix.c.o: CMakeFiles/TimeLimit.dir/flags.make
CMakeFiles/TimeLimit.dir/core/mixed_radix.c.o: ../core/mixed_radix.c
CMakeFiles/TimeLimit.dir/core/mixed_radix.c.o: CMakeFiles/TimeLimit.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/yanghuang/Projects/cs267/lingua-franca/test/C/src-gen/TimeLimit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/TimeLimit.dir/core/mixed_radix.c.o"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/TimeLimit.dir/core/mixed_radix.c.o -MF CMakeFiles/TimeLimit.dir/core/mixed_radix.c.o.d -o CMakeFiles/TimeLimit.dir/core/mixed_radix.c.o -c /Users/yanghuang/Projects/cs267/lingua-franca/test/C/src-gen/TimeLimit/core/mixed_radix.c

CMakeFiles/TimeLimit.dir/core/mixed_radix.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/TimeLimit.dir/core/mixed_radix.c.i"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/yanghuang/Projects/cs267/lingua-franca/test/C/src-gen/TimeLimit/core/mixed_radix.c > CMakeFiles/TimeLimit.dir/core/mixed_radix.c.i

CMakeFiles/TimeLimit.dir/core/mixed_radix.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/TimeLimit.dir/core/mixed_radix.c.s"
	/Library/Developer/CommandLineTools/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/yanghuang/Projects/cs267/lingua-franca/test/C/src-gen/TimeLimit/core/mixed_radix.c -o CMakeFiles/TimeLimit.dir/core/mixed_radix.c.s

# Object files for target TimeLimit
TimeLimit_OBJECTS = \
"CMakeFiles/TimeLimit.dir/TimeLimit.c.o" \
"CMakeFiles/TimeLimit.dir/core/platform/lf_macos_support.c.o" \
"CMakeFiles/TimeLimit.dir/ctarget/schedule.c.o" \
"CMakeFiles/TimeLimit.dir/ctarget/util.c.o" \
"CMakeFiles/TimeLimit.dir/core/mixed_radix.c.o"

# External object files for target TimeLimit
TimeLimit_EXTERNAL_OBJECTS =

TimeLimit: CMakeFiles/TimeLimit.dir/TimeLimit.c.o
TimeLimit: CMakeFiles/TimeLimit.dir/core/platform/lf_macos_support.c.o
TimeLimit: CMakeFiles/TimeLimit.dir/ctarget/schedule.c.o
TimeLimit: CMakeFiles/TimeLimit.dir/ctarget/util.c.o
TimeLimit: CMakeFiles/TimeLimit.dir/core/mixed_radix.c.o
TimeLimit: CMakeFiles/TimeLimit.dir/build.make
TimeLimit: CMakeFiles/TimeLimit.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/yanghuang/Projects/cs267/lingua-franca/test/C/src-gen/TimeLimit/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking C executable TimeLimit"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/TimeLimit.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/TimeLimit.dir/build: TimeLimit
.PHONY : CMakeFiles/TimeLimit.dir/build

CMakeFiles/TimeLimit.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/TimeLimit.dir/cmake_clean.cmake
.PHONY : CMakeFiles/TimeLimit.dir/clean

CMakeFiles/TimeLimit.dir/depend:
	cd /Users/yanghuang/Projects/cs267/lingua-franca/test/C/src-gen/TimeLimit/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/yanghuang/Projects/cs267/lingua-franca/test/C/src-gen/TimeLimit /Users/yanghuang/Projects/cs267/lingua-franca/test/C/src-gen/TimeLimit /Users/yanghuang/Projects/cs267/lingua-franca/test/C/src-gen/TimeLimit/build /Users/yanghuang/Projects/cs267/lingua-franca/test/C/src-gen/TimeLimit/build /Users/yanghuang/Projects/cs267/lingua-franca/test/C/src-gen/TimeLimit/build/CMakeFiles/TimeLimit.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/TimeLimit.dir/depend


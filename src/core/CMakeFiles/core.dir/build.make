# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /usr/bin/cmake.exe

# The command to remove a file.
RM = /usr/bin/cmake.exe -E remove -f

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake.exe

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/hous/workspace/openADP

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/hous/workspace/openADP

# Include any dependencies generated for this target.
include src/core/CMakeFiles/core.dir/depend.make

# Include the progress variables for this target.
include src/core/CMakeFiles/core.dir/progress.make

# Include the compile flags for this target's objects.
include src/core/CMakeFiles/core.dir/flags.make

src/core/CMakeFiles/core.dir/Connection.cpp.o: src/core/CMakeFiles/core.dir/flags.make
src/core/CMakeFiles/core.dir/Connection.cpp.o: src/core/Connection.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/hous/workspace/openADP/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/core/CMakeFiles/core.dir/Connection.cpp.o"
	cd /home/hous/workspace/openADP/src/core && /usr/bin/c++.exe   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/core.dir/Connection.cpp.o -c /home/hous/workspace/openADP/src/core/Connection.cpp

src/core/CMakeFiles/core.dir/Connection.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/core.dir/Connection.cpp.i"
	cd /home/hous/workspace/openADP/src/core && /usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/hous/workspace/openADP/src/core/Connection.cpp > CMakeFiles/core.dir/Connection.cpp.i

src/core/CMakeFiles/core.dir/Connection.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/core.dir/Connection.cpp.s"
	cd /home/hous/workspace/openADP/src/core && /usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/hous/workspace/openADP/src/core/Connection.cpp -o CMakeFiles/core.dir/Connection.cpp.s

src/core/CMakeFiles/core.dir/Connection.cpp.o.requires:
.PHONY : src/core/CMakeFiles/core.dir/Connection.cpp.o.requires

src/core/CMakeFiles/core.dir/Connection.cpp.o.provides: src/core/CMakeFiles/core.dir/Connection.cpp.o.requires
	$(MAKE) -f src/core/CMakeFiles/core.dir/build.make src/core/CMakeFiles/core.dir/Connection.cpp.o.provides.build
.PHONY : src/core/CMakeFiles/core.dir/Connection.cpp.o.provides

src/core/CMakeFiles/core.dir/Connection.cpp.o.provides.build: src/core/CMakeFiles/core.dir/Connection.cpp.o

src/core/CMakeFiles/core.dir/Model.cpp.o: src/core/CMakeFiles/core.dir/flags.make
src/core/CMakeFiles/core.dir/Model.cpp.o: src/core/Model.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/hous/workspace/openADP/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/core/CMakeFiles/core.dir/Model.cpp.o"
	cd /home/hous/workspace/openADP/src/core && /usr/bin/c++.exe   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/core.dir/Model.cpp.o -c /home/hous/workspace/openADP/src/core/Model.cpp

src/core/CMakeFiles/core.dir/Model.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/core.dir/Model.cpp.i"
	cd /home/hous/workspace/openADP/src/core && /usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/hous/workspace/openADP/src/core/Model.cpp > CMakeFiles/core.dir/Model.cpp.i

src/core/CMakeFiles/core.dir/Model.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/core.dir/Model.cpp.s"
	cd /home/hous/workspace/openADP/src/core && /usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/hous/workspace/openADP/src/core/Model.cpp -o CMakeFiles/core.dir/Model.cpp.s

src/core/CMakeFiles/core.dir/Model.cpp.o.requires:
.PHONY : src/core/CMakeFiles/core.dir/Model.cpp.o.requires

src/core/CMakeFiles/core.dir/Model.cpp.o.provides: src/core/CMakeFiles/core.dir/Model.cpp.o.requires
	$(MAKE) -f src/core/CMakeFiles/core.dir/build.make src/core/CMakeFiles/core.dir/Model.cpp.o.provides.build
.PHONY : src/core/CMakeFiles/core.dir/Model.cpp.o.provides

src/core/CMakeFiles/core.dir/Model.cpp.o.provides.build: src/core/CMakeFiles/core.dir/Model.cpp.o

src/core/CMakeFiles/core.dir/Resource.cpp.o: src/core/CMakeFiles/core.dir/flags.make
src/core/CMakeFiles/core.dir/Resource.cpp.o: src/core/Resource.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/hous/workspace/openADP/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/core/CMakeFiles/core.dir/Resource.cpp.o"
	cd /home/hous/workspace/openADP/src/core && /usr/bin/c++.exe   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/core.dir/Resource.cpp.o -c /home/hous/workspace/openADP/src/core/Resource.cpp

src/core/CMakeFiles/core.dir/Resource.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/core.dir/Resource.cpp.i"
	cd /home/hous/workspace/openADP/src/core && /usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/hous/workspace/openADP/src/core/Resource.cpp > CMakeFiles/core.dir/Resource.cpp.i

src/core/CMakeFiles/core.dir/Resource.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/core.dir/Resource.cpp.s"
	cd /home/hous/workspace/openADP/src/core && /usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/hous/workspace/openADP/src/core/Resource.cpp -o CMakeFiles/core.dir/Resource.cpp.s

src/core/CMakeFiles/core.dir/Resource.cpp.o.requires:
.PHONY : src/core/CMakeFiles/core.dir/Resource.cpp.o.requires

src/core/CMakeFiles/core.dir/Resource.cpp.o.provides: src/core/CMakeFiles/core.dir/Resource.cpp.o.requires
	$(MAKE) -f src/core/CMakeFiles/core.dir/build.make src/core/CMakeFiles/core.dir/Resource.cpp.o.provides.build
.PHONY : src/core/CMakeFiles/core.dir/Resource.cpp.o.provides

src/core/CMakeFiles/core.dir/Resource.cpp.o.provides.build: src/core/CMakeFiles/core.dir/Resource.cpp.o

src/core/CMakeFiles/core.dir/State.cpp.o: src/core/CMakeFiles/core.dir/flags.make
src/core/CMakeFiles/core.dir/State.cpp.o: src/core/State.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/hous/workspace/openADP/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/core/CMakeFiles/core.dir/State.cpp.o"
	cd /home/hous/workspace/openADP/src/core && /usr/bin/c++.exe   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/core.dir/State.cpp.o -c /home/hous/workspace/openADP/src/core/State.cpp

src/core/CMakeFiles/core.dir/State.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/core.dir/State.cpp.i"
	cd /home/hous/workspace/openADP/src/core && /usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/hous/workspace/openADP/src/core/State.cpp > CMakeFiles/core.dir/State.cpp.i

src/core/CMakeFiles/core.dir/State.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/core.dir/State.cpp.s"
	cd /home/hous/workspace/openADP/src/core && /usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/hous/workspace/openADP/src/core/State.cpp -o CMakeFiles/core.dir/State.cpp.s

src/core/CMakeFiles/core.dir/State.cpp.o.requires:
.PHONY : src/core/CMakeFiles/core.dir/State.cpp.o.requires

src/core/CMakeFiles/core.dir/State.cpp.o.provides: src/core/CMakeFiles/core.dir/State.cpp.o.requires
	$(MAKE) -f src/core/CMakeFiles/core.dir/build.make src/core/CMakeFiles/core.dir/State.cpp.o.provides.build
.PHONY : src/core/CMakeFiles/core.dir/State.cpp.o.provides

src/core/CMakeFiles/core.dir/State.cpp.o.provides.build: src/core/CMakeFiles/core.dir/State.cpp.o

src/core/CMakeFiles/core.dir/Decision.cpp.o: src/core/CMakeFiles/core.dir/flags.make
src/core/CMakeFiles/core.dir/Decision.cpp.o: src/core/Decision.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/hous/workspace/openADP/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/core/CMakeFiles/core.dir/Decision.cpp.o"
	cd /home/hous/workspace/openADP/src/core && /usr/bin/c++.exe   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/core.dir/Decision.cpp.o -c /home/hous/workspace/openADP/src/core/Decision.cpp

src/core/CMakeFiles/core.dir/Decision.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/core.dir/Decision.cpp.i"
	cd /home/hous/workspace/openADP/src/core && /usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/hous/workspace/openADP/src/core/Decision.cpp > CMakeFiles/core.dir/Decision.cpp.i

src/core/CMakeFiles/core.dir/Decision.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/core.dir/Decision.cpp.s"
	cd /home/hous/workspace/openADP/src/core && /usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/hous/workspace/openADP/src/core/Decision.cpp -o CMakeFiles/core.dir/Decision.cpp.s

src/core/CMakeFiles/core.dir/Decision.cpp.o.requires:
.PHONY : src/core/CMakeFiles/core.dir/Decision.cpp.o.requires

src/core/CMakeFiles/core.dir/Decision.cpp.o.provides: src/core/CMakeFiles/core.dir/Decision.cpp.o.requires
	$(MAKE) -f src/core/CMakeFiles/core.dir/build.make src/core/CMakeFiles/core.dir/Decision.cpp.o.provides.build
.PHONY : src/core/CMakeFiles/core.dir/Decision.cpp.o.provides

src/core/CMakeFiles/core.dir/Decision.cpp.o.provides.build: src/core/CMakeFiles/core.dir/Decision.cpp.o

# Object files for target core
core_OBJECTS = \
"CMakeFiles/core.dir/Connection.cpp.o" \
"CMakeFiles/core.dir/Model.cpp.o" \
"CMakeFiles/core.dir/Resource.cpp.o" \
"CMakeFiles/core.dir/State.cpp.o" \
"CMakeFiles/core.dir/Decision.cpp.o"

# External object files for target core
core_EXTERNAL_OBJECTS =

src/core/libcore.a: src/core/CMakeFiles/core.dir/Connection.cpp.o
src/core/libcore.a: src/core/CMakeFiles/core.dir/Model.cpp.o
src/core/libcore.a: src/core/CMakeFiles/core.dir/Resource.cpp.o
src/core/libcore.a: src/core/CMakeFiles/core.dir/State.cpp.o
src/core/libcore.a: src/core/CMakeFiles/core.dir/Decision.cpp.o
src/core/libcore.a: src/core/CMakeFiles/core.dir/build.make
src/core/libcore.a: src/core/CMakeFiles/core.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library libcore.a"
	cd /home/hous/workspace/openADP/src/core && $(CMAKE_COMMAND) -P CMakeFiles/core.dir/cmake_clean_target.cmake
	cd /home/hous/workspace/openADP/src/core && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/core.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/core/CMakeFiles/core.dir/build: src/core/libcore.a
.PHONY : src/core/CMakeFiles/core.dir/build

src/core/CMakeFiles/core.dir/requires: src/core/CMakeFiles/core.dir/Connection.cpp.o.requires
src/core/CMakeFiles/core.dir/requires: src/core/CMakeFiles/core.dir/Model.cpp.o.requires
src/core/CMakeFiles/core.dir/requires: src/core/CMakeFiles/core.dir/Resource.cpp.o.requires
src/core/CMakeFiles/core.dir/requires: src/core/CMakeFiles/core.dir/State.cpp.o.requires
src/core/CMakeFiles/core.dir/requires: src/core/CMakeFiles/core.dir/Decision.cpp.o.requires
.PHONY : src/core/CMakeFiles/core.dir/requires

src/core/CMakeFiles/core.dir/clean:
	cd /home/hous/workspace/openADP/src/core && $(CMAKE_COMMAND) -P CMakeFiles/core.dir/cmake_clean.cmake
.PHONY : src/core/CMakeFiles/core.dir/clean

src/core/CMakeFiles/core.dir/depend:
	cd /home/hous/workspace/openADP && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/hous/workspace/openADP /home/hous/workspace/openADP/src/core /home/hous/workspace/openADP /home/hous/workspace/openADP/src/core /home/hous/workspace/openADP/src/core/CMakeFiles/core.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/core/CMakeFiles/core.dir/depend


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
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.22.0/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.22.0/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/bernardocohen/repos/numMFcpp/cpp

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/bernardocohen/repos/numMFcpp/cpp/build

# Include any dependencies generated for this target.
include CMakeFiles/numMFcpp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/numMFcpp.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/numMFcpp.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/numMFcpp.dir/flags.make

CMakeFiles/numMFcpp.dir/src/binModel01.cpp.o: CMakeFiles/numMFcpp.dir/flags.make
CMakeFiles/numMFcpp.dir/src/binModel01.cpp.o: ../src/binModel01.cpp
CMakeFiles/numMFcpp.dir/src/binModel01.cpp.o: CMakeFiles/numMFcpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bernardocohen/repos/numMFcpp/cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/numMFcpp.dir/src/binModel01.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/numMFcpp.dir/src/binModel01.cpp.o -MF CMakeFiles/numMFcpp.dir/src/binModel01.cpp.o.d -o CMakeFiles/numMFcpp.dir/src/binModel01.cpp.o -c /Users/bernardocohen/repos/numMFcpp/cpp/src/binModel01.cpp

CMakeFiles/numMFcpp.dir/src/binModel01.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/numMFcpp.dir/src/binModel01.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bernardocohen/repos/numMFcpp/cpp/src/binModel01.cpp > CMakeFiles/numMFcpp.dir/src/binModel01.cpp.i

CMakeFiles/numMFcpp.dir/src/binModel01.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/numMFcpp.dir/src/binModel01.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bernardocohen/repos/numMFcpp/cpp/src/binModel01.cpp -o CMakeFiles/numMFcpp.dir/src/binModel01.cpp.s

CMakeFiles/numMFcpp.dir/src/options01.cpp.o: CMakeFiles/numMFcpp.dir/flags.make
CMakeFiles/numMFcpp.dir/src/options01.cpp.o: ../src/options01.cpp
CMakeFiles/numMFcpp.dir/src/options01.cpp.o: CMakeFiles/numMFcpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bernardocohen/repos/numMFcpp/cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/numMFcpp.dir/src/options01.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/numMFcpp.dir/src/options01.cpp.o -MF CMakeFiles/numMFcpp.dir/src/options01.cpp.o.d -o CMakeFiles/numMFcpp.dir/src/options01.cpp.o -c /Users/bernardocohen/repos/numMFcpp/cpp/src/options01.cpp

CMakeFiles/numMFcpp.dir/src/options01.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/numMFcpp.dir/src/options01.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bernardocohen/repos/numMFcpp/cpp/src/options01.cpp > CMakeFiles/numMFcpp.dir/src/options01.cpp.i

CMakeFiles/numMFcpp.dir/src/options01.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/numMFcpp.dir/src/options01.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bernardocohen/repos/numMFcpp/cpp/src/options01.cpp -o CMakeFiles/numMFcpp.dir/src/options01.cpp.s

CMakeFiles/numMFcpp.dir/src/options02.cpp.o: CMakeFiles/numMFcpp.dir/flags.make
CMakeFiles/numMFcpp.dir/src/options02.cpp.o: ../src/options02.cpp
CMakeFiles/numMFcpp.dir/src/options02.cpp.o: CMakeFiles/numMFcpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bernardocohen/repos/numMFcpp/cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/numMFcpp.dir/src/options02.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/numMFcpp.dir/src/options02.cpp.o -MF CMakeFiles/numMFcpp.dir/src/options02.cpp.o.d -o CMakeFiles/numMFcpp.dir/src/options02.cpp.o -c /Users/bernardocohen/repos/numMFcpp/cpp/src/options02.cpp

CMakeFiles/numMFcpp.dir/src/options02.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/numMFcpp.dir/src/options02.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bernardocohen/repos/numMFcpp/cpp/src/options02.cpp > CMakeFiles/numMFcpp.dir/src/options02.cpp.i

CMakeFiles/numMFcpp.dir/src/options02.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/numMFcpp.dir/src/options02.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bernardocohen/repos/numMFcpp/cpp/src/options02.cpp -o CMakeFiles/numMFcpp.dir/src/options02.cpp.s

CMakeFiles/numMFcpp.dir/src/options03.cpp.o: CMakeFiles/numMFcpp.dir/flags.make
CMakeFiles/numMFcpp.dir/src/options03.cpp.o: ../src/options03.cpp
CMakeFiles/numMFcpp.dir/src/options03.cpp.o: CMakeFiles/numMFcpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bernardocohen/repos/numMFcpp/cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/numMFcpp.dir/src/options03.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/numMFcpp.dir/src/options03.cpp.o -MF CMakeFiles/numMFcpp.dir/src/options03.cpp.o.d -o CMakeFiles/numMFcpp.dir/src/options03.cpp.o -c /Users/bernardocohen/repos/numMFcpp/cpp/src/options03.cpp

CMakeFiles/numMFcpp.dir/src/options03.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/numMFcpp.dir/src/options03.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bernardocohen/repos/numMFcpp/cpp/src/options03.cpp > CMakeFiles/numMFcpp.dir/src/options03.cpp.i

CMakeFiles/numMFcpp.dir/src/options03.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/numMFcpp.dir/src/options03.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bernardocohen/repos/numMFcpp/cpp/src/options03.cpp -o CMakeFiles/numMFcpp.dir/src/options03.cpp.s

CMakeFiles/numMFcpp.dir/src/digitals.cpp.o: CMakeFiles/numMFcpp.dir/flags.make
CMakeFiles/numMFcpp.dir/src/digitals.cpp.o: ../src/digitals.cpp
CMakeFiles/numMFcpp.dir/src/digitals.cpp.o: CMakeFiles/numMFcpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bernardocohen/repos/numMFcpp/cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/numMFcpp.dir/src/digitals.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/numMFcpp.dir/src/digitals.cpp.o -MF CMakeFiles/numMFcpp.dir/src/digitals.cpp.o.d -o CMakeFiles/numMFcpp.dir/src/digitals.cpp.o -c /Users/bernardocohen/repos/numMFcpp/cpp/src/digitals.cpp

CMakeFiles/numMFcpp.dir/src/digitals.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/numMFcpp.dir/src/digitals.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bernardocohen/repos/numMFcpp/cpp/src/digitals.cpp > CMakeFiles/numMFcpp.dir/src/digitals.cpp.i

CMakeFiles/numMFcpp.dir/src/digitals.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/numMFcpp.dir/src/digitals.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bernardocohen/repos/numMFcpp/cpp/src/digitals.cpp -o CMakeFiles/numMFcpp.dir/src/digitals.cpp.s

CMakeFiles/numMFcpp.dir/src/binModel02.cpp.o: CMakeFiles/numMFcpp.dir/flags.make
CMakeFiles/numMFcpp.dir/src/binModel02.cpp.o: ../src/binModel02.cpp
CMakeFiles/numMFcpp.dir/src/binModel02.cpp.o: CMakeFiles/numMFcpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bernardocohen/repos/numMFcpp/cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/numMFcpp.dir/src/binModel02.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/numMFcpp.dir/src/binModel02.cpp.o -MF CMakeFiles/numMFcpp.dir/src/binModel02.cpp.o.d -o CMakeFiles/numMFcpp.dir/src/binModel02.cpp.o -c /Users/bernardocohen/repos/numMFcpp/cpp/src/binModel02.cpp

CMakeFiles/numMFcpp.dir/src/binModel02.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/numMFcpp.dir/src/binModel02.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bernardocohen/repos/numMFcpp/cpp/src/binModel02.cpp > CMakeFiles/numMFcpp.dir/src/binModel02.cpp.i

CMakeFiles/numMFcpp.dir/src/binModel02.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/numMFcpp.dir/src/binModel02.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bernardocohen/repos/numMFcpp/cpp/src/binModel02.cpp -o CMakeFiles/numMFcpp.dir/src/binModel02.cpp.s

CMakeFiles/numMFcpp.dir/src/options04.cpp.o: CMakeFiles/numMFcpp.dir/flags.make
CMakeFiles/numMFcpp.dir/src/options04.cpp.o: ../src/options04.cpp
CMakeFiles/numMFcpp.dir/src/options04.cpp.o: CMakeFiles/numMFcpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bernardocohen/repos/numMFcpp/cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/numMFcpp.dir/src/options04.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/numMFcpp.dir/src/options04.cpp.o -MF CMakeFiles/numMFcpp.dir/src/options04.cpp.o.d -o CMakeFiles/numMFcpp.dir/src/options04.cpp.o -c /Users/bernardocohen/repos/numMFcpp/cpp/src/options04.cpp

CMakeFiles/numMFcpp.dir/src/options04.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/numMFcpp.dir/src/options04.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bernardocohen/repos/numMFcpp/cpp/src/options04.cpp > CMakeFiles/numMFcpp.dir/src/options04.cpp.i

CMakeFiles/numMFcpp.dir/src/options04.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/numMFcpp.dir/src/options04.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bernardocohen/repos/numMFcpp/cpp/src/options04.cpp -o CMakeFiles/numMFcpp.dir/src/options04.cpp.s

CMakeFiles/numMFcpp.dir/src/options05.cpp.o: CMakeFiles/numMFcpp.dir/flags.make
CMakeFiles/numMFcpp.dir/src/options05.cpp.o: ../src/options05.cpp
CMakeFiles/numMFcpp.dir/src/options05.cpp.o: CMakeFiles/numMFcpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bernardocohen/repos/numMFcpp/cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/numMFcpp.dir/src/options05.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/numMFcpp.dir/src/options05.cpp.o -MF CMakeFiles/numMFcpp.dir/src/options05.cpp.o.d -o CMakeFiles/numMFcpp.dir/src/options05.cpp.o -c /Users/bernardocohen/repos/numMFcpp/cpp/src/options05.cpp

CMakeFiles/numMFcpp.dir/src/options05.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/numMFcpp.dir/src/options05.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bernardocohen/repos/numMFcpp/cpp/src/options05.cpp > CMakeFiles/numMFcpp.dir/src/options05.cpp.i

CMakeFiles/numMFcpp.dir/src/options05.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/numMFcpp.dir/src/options05.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bernardocohen/repos/numMFcpp/cpp/src/options05.cpp -o CMakeFiles/numMFcpp.dir/src/options05.cpp.s

CMakeFiles/numMFcpp.dir/src/defInt.cpp.o: CMakeFiles/numMFcpp.dir/flags.make
CMakeFiles/numMFcpp.dir/src/defInt.cpp.o: ../src/defInt.cpp
CMakeFiles/numMFcpp.dir/src/defInt.cpp.o: CMakeFiles/numMFcpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bernardocohen/repos/numMFcpp/cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/numMFcpp.dir/src/defInt.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/numMFcpp.dir/src/defInt.cpp.o -MF CMakeFiles/numMFcpp.dir/src/defInt.cpp.o.d -o CMakeFiles/numMFcpp.dir/src/defInt.cpp.o -c /Users/bernardocohen/repos/numMFcpp/cpp/src/defInt.cpp

CMakeFiles/numMFcpp.dir/src/defInt.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/numMFcpp.dir/src/defInt.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bernardocohen/repos/numMFcpp/cpp/src/defInt.cpp > CMakeFiles/numMFcpp.dir/src/defInt.cpp.i

CMakeFiles/numMFcpp.dir/src/defInt.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/numMFcpp.dir/src/defInt.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bernardocohen/repos/numMFcpp/cpp/src/defInt.cpp -o CMakeFiles/numMFcpp.dir/src/defInt.cpp.s

CMakeFiles/numMFcpp.dir/src/options06.cpp.o: CMakeFiles/numMFcpp.dir/flags.make
CMakeFiles/numMFcpp.dir/src/options06.cpp.o: ../src/options06.cpp
CMakeFiles/numMFcpp.dir/src/options06.cpp.o: CMakeFiles/numMFcpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bernardocohen/repos/numMFcpp/cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/numMFcpp.dir/src/options06.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/numMFcpp.dir/src/options06.cpp.o -MF CMakeFiles/numMFcpp.dir/src/options06.cpp.o.d -o CMakeFiles/numMFcpp.dir/src/options06.cpp.o -c /Users/bernardocohen/repos/numMFcpp/cpp/src/options06.cpp

CMakeFiles/numMFcpp.dir/src/options06.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/numMFcpp.dir/src/options06.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bernardocohen/repos/numMFcpp/cpp/src/options06.cpp > CMakeFiles/numMFcpp.dir/src/options06.cpp.i

CMakeFiles/numMFcpp.dir/src/options06.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/numMFcpp.dir/src/options06.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bernardocohen/repos/numMFcpp/cpp/src/options06.cpp -o CMakeFiles/numMFcpp.dir/src/options06.cpp.s

CMakeFiles/numMFcpp.dir/src/eurOptions.cpp.o: CMakeFiles/numMFcpp.dir/flags.make
CMakeFiles/numMFcpp.dir/src/eurOptions.cpp.o: ../src/eurOptions.cpp
CMakeFiles/numMFcpp.dir/src/eurOptions.cpp.o: CMakeFiles/numMFcpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bernardocohen/repos/numMFcpp/cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/numMFcpp.dir/src/eurOptions.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/numMFcpp.dir/src/eurOptions.cpp.o -MF CMakeFiles/numMFcpp.dir/src/eurOptions.cpp.o.d -o CMakeFiles/numMFcpp.dir/src/eurOptions.cpp.o -c /Users/bernardocohen/repos/numMFcpp/cpp/src/eurOptions.cpp

CMakeFiles/numMFcpp.dir/src/eurOptions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/numMFcpp.dir/src/eurOptions.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bernardocohen/repos/numMFcpp/cpp/src/eurOptions.cpp > CMakeFiles/numMFcpp.dir/src/eurOptions.cpp.i

CMakeFiles/numMFcpp.dir/src/eurOptions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/numMFcpp.dir/src/eurOptions.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bernardocohen/repos/numMFcpp/cpp/src/eurOptions.cpp -o CMakeFiles/numMFcpp.dir/src/eurOptions.cpp.s

CMakeFiles/numMFcpp.dir/src/options07.cpp.o: CMakeFiles/numMFcpp.dir/flags.make
CMakeFiles/numMFcpp.dir/src/options07.cpp.o: ../src/options07.cpp
CMakeFiles/numMFcpp.dir/src/options07.cpp.o: CMakeFiles/numMFcpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bernardocohen/repos/numMFcpp/cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/numMFcpp.dir/src/options07.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/numMFcpp.dir/src/options07.cpp.o -MF CMakeFiles/numMFcpp.dir/src/options07.cpp.o.d -o CMakeFiles/numMFcpp.dir/src/options07.cpp.o -c /Users/bernardocohen/repos/numMFcpp/cpp/src/options07.cpp

CMakeFiles/numMFcpp.dir/src/options07.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/numMFcpp.dir/src/options07.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bernardocohen/repos/numMFcpp/cpp/src/options07.cpp > CMakeFiles/numMFcpp.dir/src/options07.cpp.i

CMakeFiles/numMFcpp.dir/src/options07.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/numMFcpp.dir/src/options07.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bernardocohen/repos/numMFcpp/cpp/src/options07.cpp -o CMakeFiles/numMFcpp.dir/src/options07.cpp.s

CMakeFiles/numMFcpp.dir/src/options08.cpp.o: CMakeFiles/numMFcpp.dir/flags.make
CMakeFiles/numMFcpp.dir/src/options08.cpp.o: ../src/options08.cpp
CMakeFiles/numMFcpp.dir/src/options08.cpp.o: CMakeFiles/numMFcpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bernardocohen/repos/numMFcpp/cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object CMakeFiles/numMFcpp.dir/src/options08.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/numMFcpp.dir/src/options08.cpp.o -MF CMakeFiles/numMFcpp.dir/src/options08.cpp.o.d -o CMakeFiles/numMFcpp.dir/src/options08.cpp.o -c /Users/bernardocohen/repos/numMFcpp/cpp/src/options08.cpp

CMakeFiles/numMFcpp.dir/src/options08.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/numMFcpp.dir/src/options08.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bernardocohen/repos/numMFcpp/cpp/src/options08.cpp > CMakeFiles/numMFcpp.dir/src/options08.cpp.i

CMakeFiles/numMFcpp.dir/src/options08.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/numMFcpp.dir/src/options08.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bernardocohen/repos/numMFcpp/cpp/src/options08.cpp -o CMakeFiles/numMFcpp.dir/src/options08.cpp.s

CMakeFiles/numMFcpp.dir/src/options09.cpp.o: CMakeFiles/numMFcpp.dir/flags.make
CMakeFiles/numMFcpp.dir/src/options09.cpp.o: ../src/options09.cpp
CMakeFiles/numMFcpp.dir/src/options09.cpp.o: CMakeFiles/numMFcpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bernardocohen/repos/numMFcpp/cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object CMakeFiles/numMFcpp.dir/src/options09.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/numMFcpp.dir/src/options09.cpp.o -MF CMakeFiles/numMFcpp.dir/src/options09.cpp.o.d -o CMakeFiles/numMFcpp.dir/src/options09.cpp.o -c /Users/bernardocohen/repos/numMFcpp/cpp/src/options09.cpp

CMakeFiles/numMFcpp.dir/src/options09.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/numMFcpp.dir/src/options09.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bernardocohen/repos/numMFcpp/cpp/src/options09.cpp > CMakeFiles/numMFcpp.dir/src/options09.cpp.i

CMakeFiles/numMFcpp.dir/src/options09.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/numMFcpp.dir/src/options09.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bernardocohen/repos/numMFcpp/cpp/src/options09.cpp -o CMakeFiles/numMFcpp.dir/src/options09.cpp.s

CMakeFiles/numMFcpp.dir/src/bsModel.cpp.o: CMakeFiles/numMFcpp.dir/flags.make
CMakeFiles/numMFcpp.dir/src/bsModel.cpp.o: ../src/bsModel.cpp
CMakeFiles/numMFcpp.dir/src/bsModel.cpp.o: CMakeFiles/numMFcpp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bernardocohen/repos/numMFcpp/cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object CMakeFiles/numMFcpp.dir/src/bsModel.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/numMFcpp.dir/src/bsModel.cpp.o -MF CMakeFiles/numMFcpp.dir/src/bsModel.cpp.o.d -o CMakeFiles/numMFcpp.dir/src/bsModel.cpp.o -c /Users/bernardocohen/repos/numMFcpp/cpp/src/bsModel.cpp

CMakeFiles/numMFcpp.dir/src/bsModel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/numMFcpp.dir/src/bsModel.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/bernardocohen/repos/numMFcpp/cpp/src/bsModel.cpp > CMakeFiles/numMFcpp.dir/src/bsModel.cpp.i

CMakeFiles/numMFcpp.dir/src/bsModel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/numMFcpp.dir/src/bsModel.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/bernardocohen/repos/numMFcpp/cpp/src/bsModel.cpp -o CMakeFiles/numMFcpp.dir/src/bsModel.cpp.s

# Object files for target numMFcpp
numMFcpp_OBJECTS = \
"CMakeFiles/numMFcpp.dir/src/binModel01.cpp.o" \
"CMakeFiles/numMFcpp.dir/src/options01.cpp.o" \
"CMakeFiles/numMFcpp.dir/src/options02.cpp.o" \
"CMakeFiles/numMFcpp.dir/src/options03.cpp.o" \
"CMakeFiles/numMFcpp.dir/src/digitals.cpp.o" \
"CMakeFiles/numMFcpp.dir/src/binModel02.cpp.o" \
"CMakeFiles/numMFcpp.dir/src/options04.cpp.o" \
"CMakeFiles/numMFcpp.dir/src/options05.cpp.o" \
"CMakeFiles/numMFcpp.dir/src/defInt.cpp.o" \
"CMakeFiles/numMFcpp.dir/src/options06.cpp.o" \
"CMakeFiles/numMFcpp.dir/src/eurOptions.cpp.o" \
"CMakeFiles/numMFcpp.dir/src/options07.cpp.o" \
"CMakeFiles/numMFcpp.dir/src/options08.cpp.o" \
"CMakeFiles/numMFcpp.dir/src/options09.cpp.o" \
"CMakeFiles/numMFcpp.dir/src/bsModel.cpp.o"

# External object files for target numMFcpp
numMFcpp_EXTERNAL_OBJECTS =

libnumMFcpp.dylib: CMakeFiles/numMFcpp.dir/src/binModel01.cpp.o
libnumMFcpp.dylib: CMakeFiles/numMFcpp.dir/src/options01.cpp.o
libnumMFcpp.dylib: CMakeFiles/numMFcpp.dir/src/options02.cpp.o
libnumMFcpp.dylib: CMakeFiles/numMFcpp.dir/src/options03.cpp.o
libnumMFcpp.dylib: CMakeFiles/numMFcpp.dir/src/digitals.cpp.o
libnumMFcpp.dylib: CMakeFiles/numMFcpp.dir/src/binModel02.cpp.o
libnumMFcpp.dylib: CMakeFiles/numMFcpp.dir/src/options04.cpp.o
libnumMFcpp.dylib: CMakeFiles/numMFcpp.dir/src/options05.cpp.o
libnumMFcpp.dylib: CMakeFiles/numMFcpp.dir/src/defInt.cpp.o
libnumMFcpp.dylib: CMakeFiles/numMFcpp.dir/src/options06.cpp.o
libnumMFcpp.dylib: CMakeFiles/numMFcpp.dir/src/eurOptions.cpp.o
libnumMFcpp.dylib: CMakeFiles/numMFcpp.dir/src/options07.cpp.o
libnumMFcpp.dylib: CMakeFiles/numMFcpp.dir/src/options08.cpp.o
libnumMFcpp.dylib: CMakeFiles/numMFcpp.dir/src/options09.cpp.o
libnumMFcpp.dylib: CMakeFiles/numMFcpp.dir/src/bsModel.cpp.o
libnumMFcpp.dylib: CMakeFiles/numMFcpp.dir/build.make
libnumMFcpp.dylib: CMakeFiles/numMFcpp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/bernardocohen/repos/numMFcpp/cpp/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Linking CXX shared library libnumMFcpp.dylib"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/numMFcpp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/numMFcpp.dir/build: libnumMFcpp.dylib
.PHONY : CMakeFiles/numMFcpp.dir/build

CMakeFiles/numMFcpp.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/numMFcpp.dir/cmake_clean.cmake
.PHONY : CMakeFiles/numMFcpp.dir/clean

CMakeFiles/numMFcpp.dir/depend:
	cd /Users/bernardocohen/repos/numMFcpp/cpp/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/bernardocohen/repos/numMFcpp/cpp /Users/bernardocohen/repos/numMFcpp/cpp /Users/bernardocohen/repos/numMFcpp/cpp/build /Users/bernardocohen/repos/numMFcpp/cpp/build /Users/bernardocohen/repos/numMFcpp/cpp/build/CMakeFiles/numMFcpp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/numMFcpp.dir/depend


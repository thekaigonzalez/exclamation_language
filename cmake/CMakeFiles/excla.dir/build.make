# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\seymo\Desktop\Kai's Files\ExclamationLanguage"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\seymo\Desktop\Kai's Files\ExclamationLanguage\cmake"

# Include any dependencies generated for this target.
include CMakeFiles/excla.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/excla.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/excla.dir/flags.make

CMakeFiles/excla.dir/Scripts/excla/scripts/src/excla_language.cpp.obj: CMakeFiles/excla.dir/flags.make
CMakeFiles/excla.dir/Scripts/excla/scripts/src/excla_language.cpp.obj: ../Scripts/excla/scripts/src/excla_language.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\seymo\Desktop\Kai's Files\ExclamationLanguage\cmake\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/excla.dir/Scripts/excla/scripts/src/excla_language.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\excla.dir\Scripts\excla\scripts\src\excla_language.cpp.obj -c "C:\Users\seymo\Desktop\Kai's Files\ExclamationLanguage\Scripts\excla\scripts\src\excla_language.cpp"

CMakeFiles/excla.dir/Scripts/excla/scripts/src/excla_language.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/excla.dir/Scripts/excla/scripts/src/excla_language.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\seymo\Desktop\Kai's Files\ExclamationLanguage\Scripts\excla\scripts\src\excla_language.cpp" > CMakeFiles\excla.dir\Scripts\excla\scripts\src\excla_language.cpp.i

CMakeFiles/excla.dir/Scripts/excla/scripts/src/excla_language.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/excla.dir/Scripts/excla/scripts/src/excla_language.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\seymo\Desktop\Kai's Files\ExclamationLanguage\Scripts\excla\scripts\src\excla_language.cpp" -o CMakeFiles\excla.dir\Scripts\excla\scripts\src\excla_language.cpp.s

# Object files for target excla
excla_OBJECTS = \
"CMakeFiles/excla.dir/Scripts/excla/scripts/src/excla_language.cpp.obj"

# External object files for target excla
excla_EXTERNAL_OBJECTS =

excla.exe: CMakeFiles/excla.dir/Scripts/excla/scripts/src/excla_language.cpp.obj
excla.exe: CMakeFiles/excla.dir/build.make
excla.exe: CMakeFiles/excla.dir/linklibs.rsp
excla.exe: CMakeFiles/excla.dir/objects1.rsp
excla.exe: CMakeFiles/excla.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\seymo\Desktop\Kai's Files\ExclamationLanguage\cmake\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable excla.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\excla.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/excla.dir/build: excla.exe

.PHONY : CMakeFiles/excla.dir/build

CMakeFiles/excla.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\excla.dir\cmake_clean.cmake
.PHONY : CMakeFiles/excla.dir/clean

CMakeFiles/excla.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\seymo\Desktop\Kai's Files\ExclamationLanguage" "C:\Users\seymo\Desktop\Kai's Files\ExclamationLanguage" "C:\Users\seymo\Desktop\Kai's Files\ExclamationLanguage\cmake" "C:\Users\seymo\Desktop\Kai's Files\ExclamationLanguage\cmake" "C:\Users\seymo\Desktop\Kai's Files\ExclamationLanguage\cmake\CMakeFiles\excla.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/excla.dir/depend


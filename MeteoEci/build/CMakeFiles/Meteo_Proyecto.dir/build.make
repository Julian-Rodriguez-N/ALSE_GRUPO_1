# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_SOURCE_DIR = /home/julian/Vídeos/MeteoEci

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/julian/Vídeos/MeteoEci/build

# Include any dependencies generated for this target.
include CMakeFiles/Meteo_Proyecto.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Meteo_Proyecto.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Meteo_Proyecto.dir/flags.make

CMakeFiles/Meteo_Proyecto.dir/main.cpp.o: CMakeFiles/Meteo_Proyecto.dir/flags.make
CMakeFiles/Meteo_Proyecto.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/julian/Vídeos/MeteoEci/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Meteo_Proyecto.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Meteo_Proyecto.dir/main.cpp.o -c /home/julian/Vídeos/MeteoEci/main.cpp

CMakeFiles/Meteo_Proyecto.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Meteo_Proyecto.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/julian/Vídeos/MeteoEci/main.cpp > CMakeFiles/Meteo_Proyecto.dir/main.cpp.i

CMakeFiles/Meteo_Proyecto.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Meteo_Proyecto.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/julian/Vídeos/MeteoEci/main.cpp -o CMakeFiles/Meteo_Proyecto.dir/main.cpp.s

CMakeFiles/Meteo_Proyecto.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Meteo_Proyecto.dir/main.cpp.o.requires

CMakeFiles/Meteo_Proyecto.dir/main.cpp.o.provides: CMakeFiles/Meteo_Proyecto.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Meteo_Proyecto.dir/build.make CMakeFiles/Meteo_Proyecto.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Meteo_Proyecto.dir/main.cpp.o.provides

CMakeFiles/Meteo_Proyecto.dir/main.cpp.o.provides.build: CMakeFiles/Meteo_Proyecto.dir/main.cpp.o


CMakeFiles/Meteo_Proyecto.dir/meteoeci_gui.cpp.o: CMakeFiles/Meteo_Proyecto.dir/flags.make
CMakeFiles/Meteo_Proyecto.dir/meteoeci_gui.cpp.o: ../meteoeci_gui.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/julian/Vídeos/MeteoEci/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Meteo_Proyecto.dir/meteoeci_gui.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Meteo_Proyecto.dir/meteoeci_gui.cpp.o -c /home/julian/Vídeos/MeteoEci/meteoeci_gui.cpp

CMakeFiles/Meteo_Proyecto.dir/meteoeci_gui.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Meteo_Proyecto.dir/meteoeci_gui.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/julian/Vídeos/MeteoEci/meteoeci_gui.cpp > CMakeFiles/Meteo_Proyecto.dir/meteoeci_gui.cpp.i

CMakeFiles/Meteo_Proyecto.dir/meteoeci_gui.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Meteo_Proyecto.dir/meteoeci_gui.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/julian/Vídeos/MeteoEci/meteoeci_gui.cpp -o CMakeFiles/Meteo_Proyecto.dir/meteoeci_gui.cpp.s

CMakeFiles/Meteo_Proyecto.dir/meteoeci_gui.cpp.o.requires:

.PHONY : CMakeFiles/Meteo_Proyecto.dir/meteoeci_gui.cpp.o.requires

CMakeFiles/Meteo_Proyecto.dir/meteoeci_gui.cpp.o.provides: CMakeFiles/Meteo_Proyecto.dir/meteoeci_gui.cpp.o.requires
	$(MAKE) -f CMakeFiles/Meteo_Proyecto.dir/build.make CMakeFiles/Meteo_Proyecto.dir/meteoeci_gui.cpp.o.provides.build
.PHONY : CMakeFiles/Meteo_Proyecto.dir/meteoeci_gui.cpp.o.provides

CMakeFiles/Meteo_Proyecto.dir/meteoeci_gui.cpp.o.provides.build: CMakeFiles/Meteo_Proyecto.dir/meteoeci_gui.cpp.o


CMakeFiles/Meteo_Proyecto.dir/sensor.cpp.o: CMakeFiles/Meteo_Proyecto.dir/flags.make
CMakeFiles/Meteo_Proyecto.dir/sensor.cpp.o: ../sensor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/julian/Vídeos/MeteoEci/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Meteo_Proyecto.dir/sensor.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Meteo_Proyecto.dir/sensor.cpp.o -c /home/julian/Vídeos/MeteoEci/sensor.cpp

CMakeFiles/Meteo_Proyecto.dir/sensor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Meteo_Proyecto.dir/sensor.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/julian/Vídeos/MeteoEci/sensor.cpp > CMakeFiles/Meteo_Proyecto.dir/sensor.cpp.i

CMakeFiles/Meteo_Proyecto.dir/sensor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Meteo_Proyecto.dir/sensor.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/julian/Vídeos/MeteoEci/sensor.cpp -o CMakeFiles/Meteo_Proyecto.dir/sensor.cpp.s

CMakeFiles/Meteo_Proyecto.dir/sensor.cpp.o.requires:

.PHONY : CMakeFiles/Meteo_Proyecto.dir/sensor.cpp.o.requires

CMakeFiles/Meteo_Proyecto.dir/sensor.cpp.o.provides: CMakeFiles/Meteo_Proyecto.dir/sensor.cpp.o.requires
	$(MAKE) -f CMakeFiles/Meteo_Proyecto.dir/build.make CMakeFiles/Meteo_Proyecto.dir/sensor.cpp.o.provides.build
.PHONY : CMakeFiles/Meteo_Proyecto.dir/sensor.cpp.o.provides

CMakeFiles/Meteo_Proyecto.dir/sensor.cpp.o.provides.build: CMakeFiles/Meteo_Proyecto.dir/sensor.cpp.o


CMakeFiles/Meteo_Proyecto.dir/db_local.cpp.o: CMakeFiles/Meteo_Proyecto.dir/flags.make
CMakeFiles/Meteo_Proyecto.dir/db_local.cpp.o: ../db_local.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/julian/Vídeos/MeteoEci/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Meteo_Proyecto.dir/db_local.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Meteo_Proyecto.dir/db_local.cpp.o -c /home/julian/Vídeos/MeteoEci/db_local.cpp

CMakeFiles/Meteo_Proyecto.dir/db_local.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Meteo_Proyecto.dir/db_local.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/julian/Vídeos/MeteoEci/db_local.cpp > CMakeFiles/Meteo_Proyecto.dir/db_local.cpp.i

CMakeFiles/Meteo_Proyecto.dir/db_local.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Meteo_Proyecto.dir/db_local.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/julian/Vídeos/MeteoEci/db_local.cpp -o CMakeFiles/Meteo_Proyecto.dir/db_local.cpp.s

CMakeFiles/Meteo_Proyecto.dir/db_local.cpp.o.requires:

.PHONY : CMakeFiles/Meteo_Proyecto.dir/db_local.cpp.o.requires

CMakeFiles/Meteo_Proyecto.dir/db_local.cpp.o.provides: CMakeFiles/Meteo_Proyecto.dir/db_local.cpp.o.requires
	$(MAKE) -f CMakeFiles/Meteo_Proyecto.dir/build.make CMakeFiles/Meteo_Proyecto.dir/db_local.cpp.o.provides.build
.PHONY : CMakeFiles/Meteo_Proyecto.dir/db_local.cpp.o.provides

CMakeFiles/Meteo_Proyecto.dir/db_local.cpp.o.provides.build: CMakeFiles/Meteo_Proyecto.dir/db_local.cpp.o


CMakeFiles/Meteo_Proyecto.dir/registro.cpp.o: CMakeFiles/Meteo_Proyecto.dir/flags.make
CMakeFiles/Meteo_Proyecto.dir/registro.cpp.o: ../registro.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/julian/Vídeos/MeteoEci/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Meteo_Proyecto.dir/registro.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Meteo_Proyecto.dir/registro.cpp.o -c /home/julian/Vídeos/MeteoEci/registro.cpp

CMakeFiles/Meteo_Proyecto.dir/registro.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Meteo_Proyecto.dir/registro.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/julian/Vídeos/MeteoEci/registro.cpp > CMakeFiles/Meteo_Proyecto.dir/registro.cpp.i

CMakeFiles/Meteo_Proyecto.dir/registro.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Meteo_Proyecto.dir/registro.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/julian/Vídeos/MeteoEci/registro.cpp -o CMakeFiles/Meteo_Proyecto.dir/registro.cpp.s

CMakeFiles/Meteo_Proyecto.dir/registro.cpp.o.requires:

.PHONY : CMakeFiles/Meteo_Proyecto.dir/registro.cpp.o.requires

CMakeFiles/Meteo_Proyecto.dir/registro.cpp.o.provides: CMakeFiles/Meteo_Proyecto.dir/registro.cpp.o.requires
	$(MAKE) -f CMakeFiles/Meteo_Proyecto.dir/build.make CMakeFiles/Meteo_Proyecto.dir/registro.cpp.o.provides.build
.PHONY : CMakeFiles/Meteo_Proyecto.dir/registro.cpp.o.provides

CMakeFiles/Meteo_Proyecto.dir/registro.cpp.o.provides.build: CMakeFiles/Meteo_Proyecto.dir/registro.cpp.o


CMakeFiles/Meteo_Proyecto.dir/Meteo_Proyecto_autogen/mocs_compilation.cpp.o: CMakeFiles/Meteo_Proyecto.dir/flags.make
CMakeFiles/Meteo_Proyecto.dir/Meteo_Proyecto_autogen/mocs_compilation.cpp.o: Meteo_Proyecto_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/julian/Vídeos/MeteoEci/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/Meteo_Proyecto.dir/Meteo_Proyecto_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Meteo_Proyecto.dir/Meteo_Proyecto_autogen/mocs_compilation.cpp.o -c /home/julian/Vídeos/MeteoEci/build/Meteo_Proyecto_autogen/mocs_compilation.cpp

CMakeFiles/Meteo_Proyecto.dir/Meteo_Proyecto_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Meteo_Proyecto.dir/Meteo_Proyecto_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/julian/Vídeos/MeteoEci/build/Meteo_Proyecto_autogen/mocs_compilation.cpp > CMakeFiles/Meteo_Proyecto.dir/Meteo_Proyecto_autogen/mocs_compilation.cpp.i

CMakeFiles/Meteo_Proyecto.dir/Meteo_Proyecto_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Meteo_Proyecto.dir/Meteo_Proyecto_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/julian/Vídeos/MeteoEci/build/Meteo_Proyecto_autogen/mocs_compilation.cpp -o CMakeFiles/Meteo_Proyecto.dir/Meteo_Proyecto_autogen/mocs_compilation.cpp.s

CMakeFiles/Meteo_Proyecto.dir/Meteo_Proyecto_autogen/mocs_compilation.cpp.o.requires:

.PHONY : CMakeFiles/Meteo_Proyecto.dir/Meteo_Proyecto_autogen/mocs_compilation.cpp.o.requires

CMakeFiles/Meteo_Proyecto.dir/Meteo_Proyecto_autogen/mocs_compilation.cpp.o.provides: CMakeFiles/Meteo_Proyecto.dir/Meteo_Proyecto_autogen/mocs_compilation.cpp.o.requires
	$(MAKE) -f CMakeFiles/Meteo_Proyecto.dir/build.make CMakeFiles/Meteo_Proyecto.dir/Meteo_Proyecto_autogen/mocs_compilation.cpp.o.provides.build
.PHONY : CMakeFiles/Meteo_Proyecto.dir/Meteo_Proyecto_autogen/mocs_compilation.cpp.o.provides

CMakeFiles/Meteo_Proyecto.dir/Meteo_Proyecto_autogen/mocs_compilation.cpp.o.provides.build: CMakeFiles/Meteo_Proyecto.dir/Meteo_Proyecto_autogen/mocs_compilation.cpp.o


# Object files for target Meteo_Proyecto
Meteo_Proyecto_OBJECTS = \
"CMakeFiles/Meteo_Proyecto.dir/main.cpp.o" \
"CMakeFiles/Meteo_Proyecto.dir/meteoeci_gui.cpp.o" \
"CMakeFiles/Meteo_Proyecto.dir/sensor.cpp.o" \
"CMakeFiles/Meteo_Proyecto.dir/db_local.cpp.o" \
"CMakeFiles/Meteo_Proyecto.dir/registro.cpp.o" \
"CMakeFiles/Meteo_Proyecto.dir/Meteo_Proyecto_autogen/mocs_compilation.cpp.o"

# External object files for target Meteo_Proyecto
Meteo_Proyecto_EXTERNAL_OBJECTS =

Meteo_Proyecto: CMakeFiles/Meteo_Proyecto.dir/main.cpp.o
Meteo_Proyecto: CMakeFiles/Meteo_Proyecto.dir/meteoeci_gui.cpp.o
Meteo_Proyecto: CMakeFiles/Meteo_Proyecto.dir/sensor.cpp.o
Meteo_Proyecto: CMakeFiles/Meteo_Proyecto.dir/db_local.cpp.o
Meteo_Proyecto: CMakeFiles/Meteo_Proyecto.dir/registro.cpp.o
Meteo_Proyecto: CMakeFiles/Meteo_Proyecto.dir/Meteo_Proyecto_autogen/mocs_compilation.cpp.o
Meteo_Proyecto: CMakeFiles/Meteo_Proyecto.dir/build.make
Meteo_Proyecto: /usr/lib/x86_64-linux-gnu/libQt5Widgets.so.5.9.5
Meteo_Proyecto: /usr/lib/x86_64-linux-gnu/libQt5Gui.so.5.9.5
Meteo_Proyecto: /usr/lib/x86_64-linux-gnu/libQt5Core.so.5.9.5
Meteo_Proyecto: CMakeFiles/Meteo_Proyecto.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/julian/Vídeos/MeteoEci/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable Meteo_Proyecto"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Meteo_Proyecto.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Meteo_Proyecto.dir/build: Meteo_Proyecto

.PHONY : CMakeFiles/Meteo_Proyecto.dir/build

CMakeFiles/Meteo_Proyecto.dir/requires: CMakeFiles/Meteo_Proyecto.dir/main.cpp.o.requires
CMakeFiles/Meteo_Proyecto.dir/requires: CMakeFiles/Meteo_Proyecto.dir/meteoeci_gui.cpp.o.requires
CMakeFiles/Meteo_Proyecto.dir/requires: CMakeFiles/Meteo_Proyecto.dir/sensor.cpp.o.requires
CMakeFiles/Meteo_Proyecto.dir/requires: CMakeFiles/Meteo_Proyecto.dir/db_local.cpp.o.requires
CMakeFiles/Meteo_Proyecto.dir/requires: CMakeFiles/Meteo_Proyecto.dir/registro.cpp.o.requires
CMakeFiles/Meteo_Proyecto.dir/requires: CMakeFiles/Meteo_Proyecto.dir/Meteo_Proyecto_autogen/mocs_compilation.cpp.o.requires

.PHONY : CMakeFiles/Meteo_Proyecto.dir/requires

CMakeFiles/Meteo_Proyecto.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Meteo_Proyecto.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Meteo_Proyecto.dir/clean

CMakeFiles/Meteo_Proyecto.dir/depend:
	cd /home/julian/Vídeos/MeteoEci/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/julian/Vídeos/MeteoEci /home/julian/Vídeos/MeteoEci /home/julian/Vídeos/MeteoEci/build /home/julian/Vídeos/MeteoEci/build /home/julian/Vídeos/MeteoEci/build/CMakeFiles/Meteo_Proyecto.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Meteo_Proyecto.dir/depend

cmake_minimum_required(VERSION 3.17)
project(exclamation_language)

set(CMAKE_CXX_STANDARD 14)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -static-libstdc++ -static-libgcc")

#


# Exclamation Execution Directories
add_executable(excla
        Scripts/excla/scripts/src/excla_language.cpp properties/props/functions/src/src_functions/ext/org/general/properties.hpp)

add_executable(exclang launch/Launcher/ex_command_init.cpp)

add_executable(exclatr Scripts/excla/scripts/src/excla_headers.cpp)

add_executable(exclapar Scripts/excla/scripts/src/parser.cpp)

add_executable(ldip bin/dip/dip/src/dip/main.cpp)

add_executable(EXCLADEBUG targets.cpp)
# Include your External CMake Directories here.

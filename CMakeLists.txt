cmake_minimum_required(VERSION 3.17)
project(exclamation_language)

set(CMAKE_CXX_STANDARD 14)


# Exclamation Execution Directories
add_executable(excla
        Scripts/excla/scripts/src/excla_language.cpp)

add_executable(excla_Export ./Scripts/excla/scripts/src/excla_headers.cpp)

add_executable(exclaLauncher launch/Launcher/ex_command_init.cpp)
# Include your External CMake Directories here.
# Including External CMake Lists Are easy, get started In functions/

cmake_minimum_required(VERSION 3.17)
project(exclamation_language)

set(CMAKE_CXX_STANDARD 20)

include_directories(./Lib)
# Exclamation Execution Directories
# If you are making modifications, add your modified source scripts here!
add_executable(excla
        Scripts/excla/scripts/src/excla_language.cpp Lib/cli/BetterCli/Working/working_directory_client_init.cpp Lib/cli/BetterCli/Working/working_directory_client_init.h)

add_executable(excla_Export Scripts/excla/scripts/src/excla_headers.cpp Lib/cli/BetterCli/Working/working_directory_client_init.cpp Lib/cli/BetterCli/Working/working_directory_client_init.h)


add_executable(exc_launch launch/Launcher/ex_command_init.cpp launch/la/launch/LauncherData/LauncherComponents/executeCommand.h Lib/cli/BetterCli/Working/working_directory_client_init.cpp Lib/cli/BetterCli/Working/working_directory_client_init.h)

add_executable(CLIENT_DEBUG Lib/cli/BetterCli/Working/working_directory_client_init.cpp)
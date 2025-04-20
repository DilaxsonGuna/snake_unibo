cmake_minimum_required(VERSION 3.10)
project(Snake VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Tell CMake where to find ncurses (especially on macOS)
find_package(Curses REQUIRED)
include_directories(${CURSES_INCLUDE_DIR})

# Add all source files
add_executable(SnakeGame
    src/main.cpp
    src/screens/MainMenu.cpp
    src/screens/Interface.cpp
    src/screens/Game.cpp
    src/characters/Snake.cpp
)

# Link ncurses library
target_link_libraries(SnakeGame ${CURSES_LIBRARIES})

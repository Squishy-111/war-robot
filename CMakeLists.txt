cmake_minimum_required(VERSION 3.15)

project(war_robot)

add_executable(${PROJECT_NAME} 
    src/main.cpp
    src/game_engine.cpp
    src/display.cpp
    src/cpu_player.cpp
    src/human_player.cpp
    src/player.cpp
    src/deck.cpp
    src/card.cpp
)

target_include_directories(${PROJECT_NAME} PRIVATE include)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


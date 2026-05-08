cmake_minimum_required(VERSION 3.15)

project(war_robot)

add_executable(${PROJECT_NAME} game_engine.cpp)

target_include_directories(${PROJECT_NAME} PRIVATE include)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


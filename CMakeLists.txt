cmake_minimum_required(VERSION 4.2)
project(LifeGame)

set(CMAKE_CXX_STANDARD 26)

file(GLOB SOURCES "src/*.cpp" "src/**/*.cpp" "main.cpp")
add_executable(LifeGame ${SOURCES})

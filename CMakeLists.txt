cmake_minimum_required(VERSION 3.14)
project(oop_exercise_03)

set(CMAKE_CXX_STANDARD 14)

add_executable(oop_exercise_03 main.cpp figure.h point.h disc.h rectangle.h disc.cpp rectangle.cpp point.cpp)
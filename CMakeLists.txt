cmake_minimum_required(VERSION 3.29)
project(cpp_c_fundamentals)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(Practice2)

add_executable(cpp_c_fundamentals
        Practice2/exercises.cpp
        Practice2/exercises.h)

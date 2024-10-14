cmake_minimum_required(VERSION 3.29)
project(programing_fundamentals)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(programing_fundamentals
    "labs 1.6/labs6.cpp"
        "labs 1.6/labs6.h"
        labs1.7/labs7.cpp
        labs2.1/labs21.cpp
        Трен/tren.cpp)

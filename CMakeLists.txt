cmake_minimum_required(VERSION 3.17)
project(Calculator C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(Calculator
        Calculator.c
        Calculator.h)

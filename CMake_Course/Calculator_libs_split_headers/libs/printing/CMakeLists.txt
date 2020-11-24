cmake_minimum_required(VERSION 3.19.0)

project(Calculator_Project VERSION 1.0.0)

add_library(printing
src/print_result.cpp)

target_include_directories(printing PUBLIC include)



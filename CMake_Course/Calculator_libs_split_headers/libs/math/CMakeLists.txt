cmake_minimum_required(VERSION 3.19.0)

project(Calculator_Project VERSION 1.0.0)

add_library(math
src/addition.cpp
src/division.cpp)

target_include_directories(math PUBLIC include)



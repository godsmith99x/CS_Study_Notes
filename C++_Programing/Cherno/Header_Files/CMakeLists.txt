cmake_minimum_required(VERSION 3.16.3)

set(This Log_Example)

project(${This} CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

add_subdirectory(include)
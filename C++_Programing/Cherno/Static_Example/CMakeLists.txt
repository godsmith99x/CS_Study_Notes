cmake_minimum_required(VERSION 3.17)
project(Static_Example)

set(CMAKE_CXX_STANDARD 17)

add_executable(Static_Example main.cpp Static.cpp Static.hpp)
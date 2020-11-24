cmake_minimum_required(VERSION 3.19.0)

project(Calculator_Project VERSION 1.0.0)

    #Creates a library target called math from the .cpp files, who can find their header files because they are in the same directory
add_library(math
addition.cpp
division.cpp)


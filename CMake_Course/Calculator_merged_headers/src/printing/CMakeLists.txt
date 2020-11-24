cmake_minimum_required(VERSION 3.19.0)

project(Calculator_Project VERSION 1.0.0)

    #Creates a library target called printing from the .cpp file, who can find its header file because it is in the same directory
add_library(printing
print_result.cpp)


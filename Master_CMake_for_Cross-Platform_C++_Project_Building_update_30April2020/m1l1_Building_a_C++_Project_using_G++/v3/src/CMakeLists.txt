cmake_minimum_required(VERSION 3.19.0)

project(Calculator_Project VERSION 1.0.0)

add_subdirectory(math)

add_subdirectory(printing)

    #These commands are necessary to make the header files in the subdirectories PUBLIC for the main.cpp file to find during compilation.
    #The command syntax is: target_include_directories(targetName targetProperty directoryLocationOfTarget)
target_include_directories(math PUBLIC math)
target_include_directories(printing PUBLIC printing)
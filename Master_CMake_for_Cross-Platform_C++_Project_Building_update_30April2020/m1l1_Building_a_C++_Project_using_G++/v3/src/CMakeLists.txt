cmake_minimum_required(VERSION 3.19.0)

project(Calculator_Project VERSION 1.0.0)

add_subdirectory(math)

add_subdirectory(printing)

    #These commands are necessary to make the header files for the library targets in the subdirectories PUBLIC for the main.cpp file to find during compilation.
    #You can use multiples of these same commands on the same target to set different properties of the target.
    #The command syntax is: target_include_directories(targetName targetProperty directoryLocationOfTarget)
    #Property options include:                                                                  PUBLIC    INTERFACE   PRIVATE
    #Does the library target need the directory with the headers?                               yes       no          yes
    #Do other targets that depend on the library target need the directory with the headers?    yes       yes         no

target_include_directories(math INTERFACE math)
target_include_directories(printing INTERFACE printing)
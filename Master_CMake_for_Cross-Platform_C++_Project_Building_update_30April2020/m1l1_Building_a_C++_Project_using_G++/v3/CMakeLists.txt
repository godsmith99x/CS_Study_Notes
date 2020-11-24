cmake_minimum_required(VERSION 3.19.0)

project(Calculator_Project VERSION 1.0.0)

    #This is the root CMakeLists.txt, each subdirectory has to have its own. 
add_subdirectory(src)

    #This command creates the executable, called calculator, from the main.cpp file.
add_executable(calculator
main.cpp)
    
    #This command links the calculator executable with the math and printing library objects built from the src subdirectories.
target_link_libraries(calculator math printing)
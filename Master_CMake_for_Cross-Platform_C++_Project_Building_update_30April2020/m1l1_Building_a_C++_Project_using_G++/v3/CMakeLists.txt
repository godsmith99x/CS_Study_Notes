cmake_minimum_required(VERSION 3.19.0)

project(Calculator_Project VERSION 1.0.0)

add_subdirectory(src)


add_executable(calculator
main.cpp)

target_link_libraries(calculator math printing)
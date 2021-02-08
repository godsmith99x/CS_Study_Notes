cmake_minimum_required(VERSION 3.17)
project(Bank_Account_Example)

set(CMAKE_CXX_STANDARD 20)

add_executable(Bank_Account_Example main.cpp Account.cpp Account.hpp)
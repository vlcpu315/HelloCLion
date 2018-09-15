# cmake_minimum_required(VERSION <specify CMake version here>)
project(HelloCLion)

set(CMAKE_CXX_STANDARD 14)

add_executable(HelloCLion gcd.cpp gcd.hpp)
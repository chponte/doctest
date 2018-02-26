cmake_minimum_required(VERSION 3.0)
project(doctest)

set(CMAKE_CXX_STANDARD 14)

add_executable(doctest src/main.cpp src/Printer.cpp src/Printer.h)
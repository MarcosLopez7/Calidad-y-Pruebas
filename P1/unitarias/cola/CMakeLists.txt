cmake_minimum_required(VERSION 3.5)
project(cola)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp cola.h)
add_executable(cola ${SOURCE_FILES})
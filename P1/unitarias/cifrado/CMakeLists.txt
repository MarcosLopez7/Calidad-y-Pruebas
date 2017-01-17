cmake_minimum_required(VERSION 3.5)
project(cifrado)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Cifrado.h Cesar.h Vinegere.h)
add_executable(cifrado ${SOURCE_FILES})
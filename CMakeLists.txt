cmake_minimum_required(VERSION 3.22)
project(Cpp_Katas)

set(CMAKE_CXX_STANDARD 14)

add_executable(Cpp_Katas main.cpp Max-Min/Max_Min.cpp)

add_executable(Max_Min Max-Min/Max_Min.cpp)
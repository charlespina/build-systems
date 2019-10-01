cmake_minimum_required(VERSION 3.0)
project(a)

add_definitions("-std=c++14")

add_library(a SHARED 
    a.cpp)

target_include_directories(a PUBLIC
    include
)
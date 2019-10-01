cmake_minimum_required(VERSION 3.0)
project(b)

add_definitions("-std=c++14")

add_library(b SHARED 
    b.cpp
)

target_include_directories(b PUBLIC
    include
)
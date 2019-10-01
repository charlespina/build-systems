cmake_minimum_required(VERSION 3.0)
project(app)

add_definitions("-std=c++14")

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(app src/main.cpp)
target_link_libraries(app ${CONAN_LIBS})
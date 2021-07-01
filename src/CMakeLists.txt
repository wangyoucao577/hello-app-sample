cmake_minimum_required(VERSION 3.1)
project(helloapp)

add_definitions("-std=c++11")

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(helloapp main.cpp)
target_link_libraries(helloapp ${CONAN_LIBS})

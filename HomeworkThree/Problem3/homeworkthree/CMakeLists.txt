cmake_minimum_required(VERSION 3.6)
project(testing)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp bigNum.cpp bigNum.h genericSort.h bigNumSort.h bigNumSort.cpp)
add_executable(hw3 ${SOURCE_FILES})
cmake_minimum_required(VERSION 3.6)
project(findE)

<<<<<<< HEAD
set(CMAKE_CXX_STANDARD 11)
=======
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
>>>>>>> master

set(SOURCE_FILES main.cpp)
add_executable(findE ${SOURCE_FILES})
cmake_minimum_required(VERSION 2.8)
project(hashtable)
include_directories(${PROJECT_SOURCE_DIR}/include)
add_executable(hashtable src/main.cpp src/hashtable.cpp) 
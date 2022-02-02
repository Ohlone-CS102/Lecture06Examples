cmake_minimum_required(VERSION 3.21)
project(Lecture06Examples)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}")

add_executable(01ReadingOneItem 01ReadingOneItem.cpp)
add_executable(02WritingOneItem 02WritingOneItem.cpp)
add_executable(03ReadingFromAFile 03ReadingFromAFile.cpp)
add_executable(04MinMax 04MinMax.cpp)
add_executable(05Getline 05Getline.cpp)
add_executable(06DebugActivity 06DebugActivity.cpp)

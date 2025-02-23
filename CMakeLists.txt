cmake_minimum_required(VERSION 3.30)
project(IndividualLesson)

set(CMAKE_CXX_STANDARD 20)

add_executable(IndividualLesson src/main.cpp
        include/Snail.h
        src/Snail.cpp
        include/Race.h
        src/Race.cpp
)

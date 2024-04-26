cmake_minimum_required(VERSION 3.27)
project(Course_Manager)

set(CMAKE_CXX_STANDARD 14)

add_executable(Course_Manager
        main.cpp
        Course.cpp
        Course.h
        CourseManager.cpp
        Student.cpp
        CourseManager.h
        Student.h)

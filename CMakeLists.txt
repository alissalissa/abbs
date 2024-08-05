cmake_minimum_required(VERSION 3.28)
project(abbs)

set(CMAKE_CXX_STANDARD 23)

add_executable(abbs src/main.cpp
        src/user.cpp
        include/user.h
        src/MainController.cpp
        include/MainController.h)

cmake_minimum_required(VERSION 3.28)
project(abbs)

set(CMAKE_CXX_STANDARD 23)

add_executable(abbs src/main.cpp
        src/StorageController.cpp
        include/StorageController.h
        src/user.cpp
        include/user.h)

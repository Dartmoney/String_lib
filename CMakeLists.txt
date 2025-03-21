cmake_minimum_required(VERSION 3.30)
project(Laba1 C)
include_directories("${PROJECT_SOURCE_DIR}/tests/unity/src")
set(CMAKE_C_STANDARD 17)

add_executable(Laba1 main.c
        library.h
        Func_str.c
        tests/Test.c
        tests/Unity/src/unity.c)

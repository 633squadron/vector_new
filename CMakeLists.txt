cmake_minimum_required(VERSION 3.8)
project(vector_new)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        cmake-build-debug/cmake_install.cmake
        cmake-build-debug/CMakeCache.txt
        cmake-build-debug/Makefile
        cmake-build-debug/vector_new.cbp
        CMakeLists.txt
        main.cpp)

add_executable(vector_new ${SOURCE_FILES})
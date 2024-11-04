cmake_minimum_required(VERSION 3.5.0)
project(prg1-b-06-fichiers-TheoBensaci VERSION 0.1.0 LANGUAGES C CXX)

add_executable(prg1-b-06-fichiers-TheoBensaci main.cpp)
set(CMAKE_CXX_FLAGS "-pedantic -Wall -Wconversion -Wsign-conversion -Wextra")

add_subdirectory(src)
include(CTest)
enable_testing()


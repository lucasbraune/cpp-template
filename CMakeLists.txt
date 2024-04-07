cmake_minimum_required(VERSION 3.10)

project(CppTemplate VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS True)
set(CMAKE_CXX_CLANG_TIDY clang-tidy)

add_library(lib src/lib.cpp)
add_executable(main src/main.cpp)
target_link_libraries(main lib)



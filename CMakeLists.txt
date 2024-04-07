cmake_minimum_required(VERSION 3.10)

set(CMAKE_TOOLCHAIN_FILE "${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake" CACHE STRING "Vcpkg toolchain file")

project(CppTemplate VERSION 1.0)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_EXPORT_COMPILE_COMMANDS True)
set(CMAKE_CXX_CLANG_TIDY clang-tidy)

add_library(lib src/lib.cpp)
add_executable(main src/main.cpp)
target_link_libraries(main lib)

find_package(fmt REQUIRED)
find_package(range-v3 REQUIRED)
find_package(cxxopts REQUIRED)

add_executable(main2 src/main2.cpp)
target_link_libraries(main2 PRIVATE fmt::fmt range-v3::range-v3 cxxopts::cxxopts)

enable_testing()
add_subdirectory(test)


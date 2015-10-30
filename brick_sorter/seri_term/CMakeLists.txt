# Test CMake version
cmake_minimum_required(VERSION 2.8.12.2)

project(seri_term LANGUAGES C CXX)
add_definitions(-std=c++11)

find_package( Boost 1.54 REQUIRED COMPONENTS system)

include_directories(${Boost_INCLUDE_DIR})
include_directories(include/)

add_executable( ${PROJECT_NAME} src/main.cpp
                src/uTosNet.cpp include/uTosNet.hpp)

target_link_libraries( ${PROJECT_NAME} ${Boost_LIBRARIES} )

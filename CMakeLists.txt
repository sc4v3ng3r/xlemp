cmake_minimum_required(VERSION 2.8.8 FATAL_ERROR)
project(xlemp)

set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

find_package(Qt5Core REQUIRED)
find_package(Qt5Widgets REQUIRED)

add_subdirectory(bussines/)

set(CPP_FILES main.cpp)

add_executable(xlemp ${CPP_FILES} )
target_link_libraries(xlemp Qt5::Core Qt5::Widgets bussines)
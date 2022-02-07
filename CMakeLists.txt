cmake_minimum_required(VERSION 3.10)

project(libstrfind)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY /lib)

add_subdirectory(src)

include_directories(strfind PUBLIC "${PROJECT_SOURCE_DIR}/src")



cmake_minimum_required(VERSION 3.10)

project(libstrfind)

add_library(strfind SHARED strfind.c)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY /lib)

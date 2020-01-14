# cmake version to be used
cmake_minimum_required( VERSION 3.0 )

add_compile_options(-std=c++11)

# project name
project( persona )

# include
include_directories( include src )

set(SOURCES src/main.cpp
    src/core.cpp)

# target
add_executable( persona ${SOURCES})

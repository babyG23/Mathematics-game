# CMake Configuration for Mathematics Game

cmake_minimum_required(VERSION 3.10)
project(MathematicsGame)

set(CMAKE_CXX_STANDARD 14)

# Add your source files here
set(SOURCES
    main.cpp
    # other source files
)

add_executable(MathematicsGame ${SOURCES})
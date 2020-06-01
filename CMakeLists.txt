cmake_minimum_required(VERSION 3.5.1)

project(PathPlanner)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
set(CMAKE_BUILD_TYPE "Release")

file(GLOB SOURCES src/*.cpp)

include_directories(include)

############# Creating Shared Library #############
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "../lib")
add_library(${PROJECT_NAME} SHARED ${SOURCES})



############# Adding Test FIle ################33333
file(GLOB LIBS lib/*.so)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "../bin")
add_executable(check "test/main.cpp")
target_link_libraries(check ${LIBS})

cmake_minimum_required(VERSION 3.0)

project(HelloWorld)

include_directories(${PROJECT_SOURCE_DIR}/include)

#set(CMAKE_CXX_STANDARD 11)
#set(CMAKE_CXX_STANDARD_REQUIRED True)

add_library(helloLib hello.cpp)
add_executable(app main.cpp)
target_link_libraries(app helloLib)


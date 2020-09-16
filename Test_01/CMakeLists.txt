cmake_minimum_required(VERSION 3.0)

# STARTS A NEW CMAKE PROJECT
project(HelloWorld)

# FUNCTION TO ADD HEADERS FILES FOLDER - ${PROJECT_SOURCE_DIR} is the CMakeLists.txt root directory
include_directories(${PROJECT_SOURCE_DIR})

# SPECIFY THE SOURCE FILES OF THE TARGET EXECUTABLE 
add_executable(app main.cpp hello.cpp)


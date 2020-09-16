cmake_minimum_required(VERSION 3.0)

project(MYSQRT)

set(CMAKE_CXX_STANDAD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

option(USE_MYMATH "Use tutorial provided math implementation" ON)

# IN THE CMAKE TUTORIAL DOCUMENT THIS PART NOT EXIST, I ENCONTER IN THE STACKOVERFLOW 
# https://stackoverflow.com/questions/24663333/cmake-integrating-options-into-c-source-files/24663856
# A WAY TO MAKE THE OPTION WORKS. 
# WHAT HAPPEND IS THAT THE OPTION MACRO NOT WORKS INSIDE THE C++ CODE. 
# THE CODE #ifdef USE_MYMATH
#          

if(USE_MYMATH)
	message(STATUS "USE_MYMATH")
	add_definitions(-DUSE_MYMATH)
endif()

# FILE TO PASS CMAKE SETTINGS CONFIG
configure_file(MysqrtConfig.h.in MysqrtConfig.h)

if(USE_MYMATH)
	add_subdirectory(Math)
	list(APPEND EXTRA_LIBS Math)
endif()


add_executable(Mysqrt main.cpp)

target_link_libraries(Mysqrt PUBLIC ${EXTRA_LIBS})

target_include_directories(Mysqrt PUBLIC
			   "${PROJECT_BINARY_DIR}"
			   )


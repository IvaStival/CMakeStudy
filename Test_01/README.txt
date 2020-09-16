Test_01
Create a simple cmake compile file.

Some functions is used:
	- cmake_minimum_required() - set the minimum CMake version required to evaluate the current script
	- project() 		- Start a new CMake project. 
	- include_directories() - Specify the directories of read files
	- add_executables()	- Specify the source file of the target executable

Have 3 C++ files, main.cpp, hello.cpp and hello.h.
And CMakeLists.txt filei

mkdir build
cd build
cmake ..
cmake --build .


CMake has several buid type, each influence default compiler and link parameters

        - Debug: Classic debug build including debug information, no optimization etc.
        - Release: Typical realese build, without debug info and with full optimization.
        - RelWithDebInfo: Same as Release, but with Debug info.
        - MinSizeRel: Same as Release but optimize your size.

In windows the cmake will generate all config to be possible change the compile build type in Visual Studio IDE or usin
g --config CONFIG (with cmake --build).
On SOs that only support single configuration (Unix) we use the CMAKE_BUILD_TYPE.

        -DCMAKE_BUILD_TYPE=Debug path/to/source
        -DCMAKE_BUILD_TYPE=Release path/to/source

A CMake script should avoid setting the CMAKE_BUILD_TYPE it self. The user must do this.

#include "hello.h"

void printHello(char** argv){
	const double input = std::stod(argv[1]);
	std::cout<<input<<std::endl;
}

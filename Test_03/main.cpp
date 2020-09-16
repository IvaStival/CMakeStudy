#ifdef USE_MYMATH
#  include "mysqrt.h"
#endif

#include <iostream>
#include <math.h> 

int main(int argc, char** argv){
	#ifdef USE_MYMATH
		mysqrt(atoi(argv[1]));
	#else
		float result = sqrt (atoi(argv[1]));
		std::cout << result << std::endl;
	#endif
	return 0;
}

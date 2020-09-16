
In this test I am follow the cmake documentation tutorial to use cmake options variables.
(https://cmake.org/cmake/help/v3.16/guide/tutorial/index.html)

With this variables make possible the user enable or disable functionalities in the code.

In the example was created a new sqrt() function that is mysqrt(). And by cmake -DUSE_MYMATH option I can set is use my new function sqrt() or the default.

The problem:

IN THE CMAKE TUTORIAL DOCUMENT THIS PART NOT EXIST, I ENCONTER IN THE STACKOVERFLOW
https://stackoverflow.com/questions/24663333/cmake-integrating-options-into-c-source-files/24663856
A WAY TO MAKE THE OPTION WORKS.
WHAT HAPPEND IS THAT THE OPTION MACRO NOT WORKS INSIDE THE C++ CODE.
THE CODE:
	#ifdef USE_MYMATH
	# 	include "mysqrt.h"
	#endif

and 

	#ifdef USE_MYMATH
		mysqrt(atoi(argv[1]);
	#else
		float result = sqrt(atoi(argv[1]);
		std::cout << result << std::endl;
	#endif

ever enter in the "else". The option by default is set to ON.
The only way that I enconter to make it works was this.

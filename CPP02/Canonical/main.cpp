#include <iostream>
#include "Sample.hpp"

int	main(void) {
	
	Sample instance1;
	Sample instance2( 42 );
	// Copy constructor;
	Sample instance3( instance1 );

	// Overloaded operator for stream redirection
	std::cout << instance1 << std::endl;
	std::cout << instance2 << std::endl;
	std::cout << instance3 << std::endl;

	// Copy assignment operator;
	instance3 = instance2;
	std::cout << instance3 << std::endl;

	return 0;
}
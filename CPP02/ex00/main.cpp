#include <iostream>
#include "Fixed.hpp"

int	main( void ) {

	std::cout << "Object 'a' will be instantiated" << std::endl;
	Fixed a;
	std::cout << std::endl;
	std::cout << "Object 'b' will be instantiated" << std::endl;
	Fixed b( a );
	std::cout << std::endl;
	std::cout << "Object 'c' will be instantiated" << std::endl;
	Fixed c;
	std::cout << std::endl;
	std::cout << "c = b: object 'b' will be assigned to the object 'c'" << std::endl;
	c = b;
	std::cout << std::endl;

	std::cout << "_value of the object 'a': " << std::endl;
	std::cout << a.getRawBits() << std::endl;
	std::cout << "_value of the object 'b': " << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << "_value of the object 'c': " << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return 0;
}
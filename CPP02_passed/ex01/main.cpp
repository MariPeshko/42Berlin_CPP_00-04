#include <iostream>
#include "Fixed.hpp"

int main( void ) {

	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );

	a = Fixed( 1234.4321f );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	return 0;
}

/**
 * Most std::cout settings round it to two decimal places by default.
 * 
 * ///
 * 
 * Why does it print 42.4219 instead of exactly 42.42? 
 * And why are there 4 digits after the dot?
 * 
 * By default, std::cout prints float values with 6 digits, but rounds 
 * to 4 decimal digits (platform/implementation may vary slightly).
*/
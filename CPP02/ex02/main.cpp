#include <iostream>
#include "Fixed.hpp"

// function test for +, -, *, /
/* Fixed c = a + b;
	std::cout << "c : " << c << std::endl;

	Fixed d = c - a;
	std::cout << "d : " << d << std::endl;
	Fixed e = b / a;
	std::cout << "e : " << e << std::endl;
	Fixed e = b * a;
	std::cout << "e : " << e << std::endl;
 */

static void test_comparisons() {

	std::cout << "6 comparison operators: >, <, >=, <=, ==, and !=";
	std::cout << std::endl;
    Fixed a(2.5f);
	std::cout << "a: " << a;
    Fixed b(2.5f);
	std::cout << "; b: " << b;
    Fixed c(3.75f);
	std::cout << "; c: " << c;
    Fixed d(1.25f);
	std::cout << "; d: " << d << std::endl;

    std::cout << std::boolalpha; // for bool 'true' and 'false'

    std::cout << "a == b : " << (a == b) << std::endl; // true
    std::cout << "a != c : " << (a != c) << std::endl; // true
    std::cout << "a < c  : " << (a < c) << std::endl;  // true
    std::cout << "c > d  : " << (c > d) << std::endl;  // true
    std::cout << "a >= b : " << (a >= b) << std::endl; // true
    std::cout << "d <= a : " << (d <= a) << std::endl; // true
    std::cout << "d > c  : " << (d > c) << std::endl;  // false
    std::cout << "c <= b : " << (c <= b) << std::endl; // false
}

int	main( void ) {
	// + - * /
	//test_comparisons(); // 
	
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	return 0;

}


/**
 The 4 increment/decrement (pre-increment and post-increment, pre-decrement and
post-decrement) operators, which will increase or decrease the fixed-point value by
the smallest representable ϵ, such that 1 + ϵ > 1.
*/
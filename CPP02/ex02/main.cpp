#include <iostream>
#include "Fixed.hpp"

static void test_arith() {
    Fixed a(2.2f);
    Fixed b(5);

    std::cout << "a : " << a << std::endl;
    std::cout << "b : " << b << std::endl;

    Fixed c = a + b;
    std::cout << "c (a + b) : " << c << std::endl;

    Fixed d = c - a;
    std::cout << "d (c - a) : " << d << std::endl;

    Fixed e = b / a;
    std::cout << "e (b / a) : " << e << std::endl;

    Fixed m = b * a;
    std::cout << "m (b * a) : " << m << std::endl;
}

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

	//test_arith();
	//test_comparisons(); // 
	
	Fixed a;

	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl;
	std::cout << std:: endl;

	std::cout << "  a: " << a << std::endl;
	std::cout << "++a: " << ++a << std::endl;
	std::cout << "  a: " << a << std::endl;
	std::cout << "a++: " << a++ << std::endl;
	std::cout << "  a: " << a << std::endl;

	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl;
	std::cout << std:: endl;

	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(5);
	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;


	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;

	return 0;

}

// true 'ϵ', the smallest representable 
// non-zero value in my system.
// #define EPSILON (1.0f / (1 << 8))  // 1 / 256 = 0.00390625f

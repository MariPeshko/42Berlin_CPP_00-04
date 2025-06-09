#include <iostream>
#include "Fixed.hpp"

//In C++98, a static const int member must be initialized outside 
//the class definition (i.e., in the .cpp file), even though 
//it's declared inside the class.
/* When we define a static member outside the
class, we do not repeat the static keyword. */
const int	Fixed::_fractbits = 8;

Fixed::Fixed( void ) : _value(0) {
    std::cout << "Default Constructor Called" << std::endl;
    return;
}

Fixed::Fixed(int const n) : _value( n ) {

    std::cout << "Parametric Constuctor" << std::endl;
}

// C++ Primer Book version
Fixed::Fixed( Fixed const & src ) : 
    _value(src.getRawBits()) {

    std::cout << "Copy Constructor Called" << std::endl;

}

// Assignment operator called
Fixed &	Fixed::operator=( Fixed const & rhs ) {
	
	std::cout << "Copy Assignment Operator called" << std::endl;
    if (this != &rhs) {
        this->_value = rhs.getRawBits(); // fix
    }
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor Called" << std::endl;
    return;
}

int Fixed::getRawBits(void) const {

    std::cout << "getRawBits() called" << std::endl;
    return this->_value;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits() called" << std::endl;
    this->_value = raw;
}

//////////////////////////////////////////////////////

// Copy Contsructor issue

/* // intra version
Fixed::Fixed( Fixed const & src ) {

    std::cout << "Copy Constructor Called" << std::endl;
    *this = src;
} */

// My version based on information from CPP+ Primer book
// and other sources (sorry, chat gpt as well, I'm in a rush)
/* Fixed::Fixed( Fixed const & src ) {

    std::cout << "Copy Constructor Called" << std::endl;
    this->_value = src.getRawBits();  // Copy fields directly
} */
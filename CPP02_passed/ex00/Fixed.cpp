#include <iostream>
#include "Fixed.hpp"

Fixed::Fixed( void ) : _value(0) {
    std::cout << "Default Constructor Called" << std::endl;
    return;
}

Fixed::Fixed(int const n) : _value( n ) {

    std::cout << "Parametric Constuctor" << std::endl;
    //return;
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
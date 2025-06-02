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

Fixed::Fixed( Fixed const & src ) {

    std::cout << "Copy Constructor Called" << std::endl;
    //*this = src;
    this->_value = src.getRawBits();  // Copy fields directly
    //return ;
}

// Assignment operator called
Fixed &	Fixed::operator=( Fixed const & rhs ) {
	
	std::cout << "Assignment operator called" << std::endl;
    if (this != &rhs) {
        this->_value = rhs.getRawBits(); // fix
    }
    return *this;
}

int Fixed::getRawBits(void) const {

    std::cout << "getRawBits() called" << std::endl;
    return _value;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits() called" << std::endl;
    _value = raw;
}

Fixed::~Fixed() {
    std::cout << "Destructor Called" << std::endl;
    return;
}
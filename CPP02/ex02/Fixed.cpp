#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed( void ) : _value(0) {
    std::cout << "Default Constructor Called" << std::endl;
    return;
}

// parametric constructor int
// Shift n left by _fractbits bits, which is exactly 
// the same as multiplying n by 2^_fractbits
// For integers bit-shifting is faster than multiplication.
Fixed::Fixed(int const n) : _value(n << _fractbits) {
	
} // std::cout << "Parametric Constuctor takes integer " << std::endl;

// parametric constructor float
// Multiply n by 2 raised to _fractbits
Fixed::Fixed(const float n) : _value(roundf(n * (1 << _fractbits))) {
	
} // std::cout << "Parametric Constuctor takes float" << std::endl;

// C++ Primer Book version of Copy Constructor
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
    return _value;
}

void Fixed::setRawBits(int const raw) {
    _value = raw;
}

// toFloat() converts the fixed-point value to a floating-point value
// Recap of the Concept (Fixed-point with 8 bits)
// You store 12.75 as an int
// 12.75 * 256 = 3264
// To read value: 3264 / 256 = 12.75
float Fixed::toFloat(void) const {

    return static_cast<float>(_value) / (1 << _fractbits);

}

int Fixed::toInt(void) const {

	return _value >> _fractbits;

}

// toFloat() converts the fixed-point value to a floating-point value
std::ostream &	operator<<(std::ostream &o, Fixed const &i) {

    o << i.toFloat();
    return o;

}

// new my function
Fixed Fixed::operator+(const Fixed& rhs) const {
	std::cout << "operator+ " << std::endl;
    Fixed result;
    result.setRawBits(this->_value + rhs._value);
    return result;
}

Fixed Fixed::operator-(const Fixed& rhs) const {
    std::cout << "operator- " << std::endl;
    Fixed result;
    result.setRawBits(this->_value - rhs._value);
	return result;
}

Fixed Fixed::operator*(const Fixed& rhs) const {
	std::cout << "operator* " << std::endl;
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed& rhs) const {

	std::cout << "operator/ " << std::endl;
	if (rhs._value == 0) {
        std::cerr << "Error: Division by zero!" << std::endl;
    }
	return Fixed(this->toFloat() / rhs.toFloat());

}

bool Fixed::operator>(const Fixed& rhs) const {
	return this->_value > rhs._value;
}

bool Fixed::operator<(const Fixed& rhs) const {
	return this->_value < rhs._value;
}

bool Fixed::operator>=(const Fixed& rhs) const {
	return this->_value >= rhs._value;
}

bool Fixed::operator<=(const Fixed& rhs) const {
	return this->_value <= rhs._value;
}

bool Fixed::operator==(const Fixed& rhs) const {
	return this->_value == rhs._value;
}

bool Fixed::operator!=(const Fixed& rhs) const {
	return this->_value != rhs._value;
}

// 4 increment/decrement

// min && min cost && max && max const




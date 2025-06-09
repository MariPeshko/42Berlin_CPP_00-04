#include <iostream>
#include <cmath>
#include "Fixed.hpp"

const int	Fixed::_fractbits = 8;

Fixed::Fixed( void ) : _value(0) {
    return;
}

// Parametric constructor int
// Shift n left by _fractbits bits, which is exactly 
// the same as multiplying n by 2^_fractbits
// For integers bit-shifting is faster than multiplication.
Fixed::Fixed(int const n) : _value(n << _fractbits) {
	
}

//Pparametric constructor float
// Multiply n by 2 raised to _fractbits
Fixed::Fixed(const float n) : _value(roundf(n * (1 << _fractbits))) {
	
}

// C++ Primer Book version of Copy Constructor
Fixed::Fixed( Fixed const & src ) : 
	
	_value(src.getRawBits()) {

}

// Assignment operator called
Fixed &	Fixed::operator=( Fixed const & rhs ) {
	
    if (this != &rhs) {
        this->_value = rhs.getRawBits(); // fix
    }
    return *this;
}

Fixed::~Fixed() {
    return;
}

int Fixed::getRawBits(void) const {
    return _value;
}

void Fixed::setRawBits(int const raw) {
    _value = raw;
}

// toFloat() converts the fixed-point value to a floating-point value
// I store 12.75 as an int
// To fp-number 12.75 * 256 = 3264
// To read : 3264 / 256 = 12.75
float Fixed::toFloat(void) const {
    return static_cast<float>(_value) / (1 << _fractbits);
}

int Fixed::toInt(void) const {
	return _value >> _fractbits;
}

/**
 * An overload of the insertion («) operator that inserts 
 * a floating-point representation of the fixed-point number 
 * into the output stream object passed as a parameter.
 */
std::ostream &	operator<<(std::ostream &o, Fixed const &i) {

    o << i.toFloat();
    return o;

}

// ** Arithmetic ** //

Fixed Fixed::operator+(const Fixed& rhs) const {

	std::cout << "operator+ " << std::endl;
    Fixed result;
    result.setRawBits(this->_value + rhs._value);
    return result;

}

Fixed Fixed::operator-(const Fixed& rhs) const {

    Fixed result;
    result.setRawBits(this->_value - rhs._value);
	return result;

}

Fixed Fixed::operator*(const Fixed& rhs) const {

	return Fixed(this->toFloat() * rhs.toFloat());

}

Fixed Fixed::operator/(const Fixed& rhs) const {

	std::cout << "operator/ " << std::endl;
	if (rhs._value == 0) {
        std::cerr << "Error: Division by zero!" << std::endl;
    }
	return Fixed(this->toFloat() / rhs.toFloat());

}

// ** comparisons ** //

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

// ** 4 increment/decrement ** //

// pre-increment
Fixed Fixed::operator++() {
    this->_value++;
	return *this;
}

// post-increment
// The int parameter is not passed at runtime;
// it's just a syntactic marker.
Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    this->_value++;
	return tmp;
}

// pre-decrement
Fixed Fixed::operator--() {
    this->_value--;
	return *this;
}

// post-decrement
Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    this->_value--;
	return tmp;
}

// ** min && min cost && max && max const ** //

// The standard library’s std::min(a, b) returns
// The first argument if both are equal.
Fixed& Fixed::min(Fixed &lhs, Fixed &rhs) {
    if(lhs < rhs)
        return lhs;
    if(rhs < lhs)
        return rhs;
    return lhs;
}

const Fixed& Fixed::min(const Fixed &lhs, const Fixed &rhs) {
    if(lhs < rhs)
        return lhs;
    if(rhs < lhs)
        return rhs;
    return lhs;
}

Fixed& Fixed::max(Fixed &lhs, Fixed &rhs) {
    if(lhs > rhs)
        return lhs;
    if(rhs > lhs)
        return rhs;
    return lhs;
}

const Fixed& Fixed::max(const Fixed &lhs, const Fixed &rhs) {
    if(lhs > rhs)
        return lhs;
    if(rhs > lhs)
        return rhs;
    return lhs;
}


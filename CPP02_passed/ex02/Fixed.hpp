#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{

public:
    Fixed( void );
	// Parametric constructors 
	Fixed( int const n );
	Fixed( const float n );
	// Copy constructor;
	Fixed( Fixed const & src );	
	// Copy assignment operator;
	Fixed &	operator=( Fixed const & rhs );	
    ~Fixed( void );								

	float	toFloat(void) const;
	int		toInt(void) const;
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	
	Fixed	operator+(const Fixed& rhs) const;
	Fixed	operator-(const Fixed& rhs) const;
	Fixed	operator/(const Fixed& rhs) const;
	Fixed	operator*(const Fixed& rhs) const;

	bool operator>(const Fixed& rhs) const;
	bool operator<(const Fixed& rhs) const;
	bool operator>=(const Fixed& rhs) const;
	bool operator<=(const Fixed& rhs) const;
	bool operator==(const Fixed& rhs) const;
	bool operator!=(const Fixed& rhs) const;

	Fixed operator++();    // pre-increment
	Fixed operator++(int); // post-increment
	Fixed operator--();    // pre-decrement
	Fixed operator--(int); // post-decrement

	static Fixed & min(Fixed &lhs, Fixed &rhs);
	static const Fixed & min(const Fixed &lhs, const Fixed &rhs);
	static Fixed & max(Fixed &lhs, Fixed &rhs);
	static const Fixed& max(const Fixed &lhs, const Fixed &rhs);

private:
    int		_value;
	static const int	_fractbits; // fractional bits

};

std::ostream &	operator<<(std::ostream &o, Fixed const &i);

#endif

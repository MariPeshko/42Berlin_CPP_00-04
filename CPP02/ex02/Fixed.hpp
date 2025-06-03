#ifndef FIXED_H
# define FIXED_H

// true 'ϵ', the smallest representable 
// non-zero value in my system.
#define EPSILON (1.0 / (1 << 8))

#include <iostream>

class Fixed
{

public:
    Fixed( void );
	// parametric constructors 
	Fixed( int const n );
	Fixed( const float n );
	// Copy constructor;
	Fixed( Fixed const & src );					// Canonical
	// Copy assignment operator;
	Fixed &	operator=( Fixed const & rhs );		// Canonical
    ~Fixed( void );								// Canonical

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



private:
    int		_value;
	static const int	_fractbits = 8; // fractional bits

};

// An overload of the insertion («) operator that 
// inserts a floating-point representation 
// of the fixed-point number into the output stream object 
// passed as a parameter.
std::ostream &	operator<<(std::ostream &o, Fixed const &i);


#endif

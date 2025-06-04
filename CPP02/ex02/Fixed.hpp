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

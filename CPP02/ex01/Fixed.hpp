#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{

public:
    Fixed( void );
	// parametric constructors 
	Fixed(int const n);
	Fixed(const float n);
	// Copy constructor;
	Fixed( Fixed const & src );					// Canonical
	// Copy assignment operator;
	Fixed &	operator=( Fixed const & rhs );		// Canonical
    ~Fixed( void );								// Canonical

	float	toFloat(void) const;
	int		toInt(void) const;
	int		getRawBits(void) const;
    void	setRawBits(int const raw);

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

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed
{

public:
    Fixed( void );
	// Constructor parametric
	Fixed(int const n);
	// Copy constructor;
	Fixed( Fixed const & src );					// Canonical
	// Copy assignment operator;
	Fixed &	operator=( Fixed const & rhs );		// Canonical
    ~Fixed();									// Canonical

	int		getRawBits(void) const;
    void	setRawBits(int const raw);

private:
    int		_value;
	static const int	_fractbits = 8; // fractional bits

};



#endif

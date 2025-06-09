/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 00:03:43 by mpeshko           #+#    #+#             */
/*   Updated: 2025/06/10 00:10:57 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	//In C++98, a static const int member must be initialized outside 
	//the class definition (i.e., in the .cpp file), even though 
	//it's declared inside the class.
	/* The static keyword, however, is used only on 
	the declaration inside the class body */
	static const int	_fractbits; // fractional bits

};



#endif

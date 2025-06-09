/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 21:28:42 by mpeshko           #+#    #+#             */
/*   Updated: 2025/06/09 11:59:25 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal
{

public:
	// Canonical form
    Dog( void );
	Dog( Dog const & src );	
	Dog &	operator=( Dog const & assign );	
    ~Dog( void );	

	/* method is overridden */
	void	makeSound( void ) const;
	
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 21:28:34 by mpeshko           #+#    #+#             */
/*   Updated: 2025/06/08 14:57:46 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

// Default Constructor
Dog::Dog( void )
    : Animal("Dog")
{
	DogBrain = new Brain();
	std::cout << "Dog Default Constructor Called" << std::endl;
}

// TAAAAAAAAAAAASK to copy a BRAIN
// Copy Constructor
Dog::Dog( Dog const & src )
    : Animal(src)
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
}

// TAAAAAAAAAAAASK to delete the old brain and to deep copy the new brain
// Assignment operator 
Dog &	Dog::operator=( Dog const &assign ) {
	
	std::cout << "Dog Assignment operator Called" << std::endl;
	if (this != &assign) {
		this->type = assign.getType();
	}
    return *this;
}

Dog::~Dog() {

	delete DogBrain;
	std::cout << "Dog Destructor Called" << std::endl;
	
}

/* method is overridden */
void	Dog::makeSound( void ) const {
	std::cout << "Bow wow";
}


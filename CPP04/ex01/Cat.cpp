/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 22:26:52 by mpeshko           #+#    #+#             */
/*   Updated: 2025/06/08 14:57:53 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

// Default Constructor
Cat::Cat( void )
    : Animal("Cat")
{
	CatBrain = new Brain();
	std::cout << "Cat Default Constructor Called" << std::endl;
}

// TAAAAAAAAAAAASK to copy a BRAIN
// Copy Constructor
Cat::Cat( Cat const & src )
    : Animal(src)
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
}

// TAAAAAAAAAAAaASK to delete the old brain and to deep copy the new brain
// Assignment operator 
Cat &	Cat::operator=( Cat const &assign ) {
	
	std::cout << "Cat Assignment operator Called" << std::endl;
	if (this != &assign) {
		this->type = assign.getType();
	}
    return *this;
}

Cat::~Cat() {
	std::cout << "Cat Destructor Called" << std::endl;
}

/* method is overridden */
void	Cat::makeSound( void ) const {
	std::cout << "Meow meow me-e-eow";
}


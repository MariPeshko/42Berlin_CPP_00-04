/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 22:26:52 by mpeshko           #+#    #+#             */
/*   Updated: 2025/06/08 13:13:57 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

// Default Constructor
Cat::Cat( void )
    : Animal("Cat")
{
	std::cout << "Cat Default Constructor Called" << std::endl;
}

// Copy Constructor
Cat::Cat( Cat const & src )
    : Animal(src)
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
}

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


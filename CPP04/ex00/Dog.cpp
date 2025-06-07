/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 21:28:34 by mpeshko           #+#    #+#             */
/*   Updated: 2025/06/07 23:09:40 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

// Default Constructor
Dog::Dog( void )
    : Animal("Dog")
{
	std::cout << "Dog Default Constructor Called" << std::endl;
}

// Copy Constructor
Dog::Dog( Dog const & src )
    : Animal(src)
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
}

// Assignment operator 
Dog &	Dog::operator=( Dog const &assign ) {
	
	std::cout << "Dog Assignment operator Called" << std::endl;
	if (this != &assign) {
		this->type = assign.getType();
	}
    return *this;
}

Dog::~Dog() {
	std::cout << "Dog Destructor Called" << std::endl;
}

/* method is overridden */
void	Dog::makeSound( void ) const {
	std::cout << "Bow wow";
}


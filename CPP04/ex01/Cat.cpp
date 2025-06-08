/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 22:26:52 by mpeshko           #+#    #+#             */
/*   Updated: 2025/06/09 00:09:14 by mpeshko          ###   ########.fr       */
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

// Copy Constructor. Deep copy
Cat::Cat( Cat const & src ) :
	Animal(src),
	CatBrain(new Brain(*src.CatBrain))
{
	std::cout << "Cat Copy Constructor Called" << std::endl;
}

// Assignment operator. Deep copy
Cat &	Cat::operator=( Cat const &assign ) {
	
	std::cout << "Cat Assignment operator Called" << std::endl;
	if (this != &assign) {
		this->type = assign.getType();
		delete CatBrain;
		CatBrain = new Brain(*assign.CatBrain);
	}
    return *this;
}

Cat::~Cat() {
	delete CatBrain;
	std::cout << "Cat Destructor Called" << std::endl;
}

/* method is overridden */
void	Cat::makeSound( void ) const {
	std::cout << "Meow meow me-e-eow";
}


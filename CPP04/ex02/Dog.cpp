/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 21:28:34 by mpeshko           #+#    #+#             */
/*   Updated: 2025/06/09 00:53:02 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

// Default Constructor
Dog::Dog( void )
    : AAnimal("Dog")
{
	DogBrain = new Brain();
	std::cout << "Dog Default Constructor Called" << std::endl;
}

// Copy Constructor. Deep copy
/**
 * DogBrain(new Brain(*src.DogBrain))

1. DogBrain - is a pointer in a copied Dog. 
Dog(value_to_assign)- here we assign a value 
in a inizialisatio list (C+ 98 year)
2. new Brain(...) - it is a call of copy constructor 
of a Brain class.
3. *src.DogBrain - is a dereference of the pointer 
DogBrain of the src instance of a Dog.
*/
Dog::Dog( Dog const & src ) :
	AAnimal(src),
	DogBrain(new Brain(*src.DogBrain))
{
	std::cout << "Dog Copy Constructor Called" << std::endl;
}

// Assignment operator. Deep copy
Dog &	Dog::operator=( Dog const &assign ) {
	
	std::cout << "Dog Assignment operator Called" << std::endl;
	if (this != &assign) {
		this->type = assign.getType();
		delete DogBrain;
		DogBrain = new Brain(*assign.DogBrain);
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

void	Dog::setIdea(std::string idea) {

	this->DogBrain->setFirstIdea(idea);
	
}

std::string const	Dog::getIdea(void) const {

	return this->DogBrain->getFirstIdea();

}

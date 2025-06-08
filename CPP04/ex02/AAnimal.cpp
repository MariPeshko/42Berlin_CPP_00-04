/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 21:28:03 by mpeshko           #+#    #+#             */
/*   Updated: 2025/06/09 00:51:28 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "AAnimal.hpp"

// Default Constructor
AAnimal::AAnimal( void ) :

    type("Default AAnimal")
{
	std::cout << "AAnimal Default Constructor Called" << std::endl;
	return;
}

// Parametric constructor
AAnimal::AAnimal( const std::string &name ) :

    type(name)
{
	std::cout << "AAnimal Parametric Constructor Called" << std::endl;
    return;       
}


// Copy Constructor
AAnimal::AAnimal( AAnimal const & src ) : 
	
	type(src.getType())
{
	std::cout << "AAnimal Copy Constructor Called" << std::endl;
}

// Assignment operator 
AAnimal &	AAnimal::operator=( AAnimal const &assign ) {
	
	std::cout << "AAnimal Assignment operator Called" << std::endl;
	if (this != &assign) {
		this->type = assign.getType();
	}
    return *this;
    
}

// Destructor
AAnimal::~AAnimal() {
	std::cout << "AAnimal Destructor Called: ";
	std::cout << this->getType() << " was desctructed." << std::endl;
    return;
}

const std::string& AAnimal::getType() const {

	return this->type;

}

void	AAnimal::makeSound() const {

	std::cout << "Undefined AAnimal Sound";
    
}

std::ostream &	operator<<(std::ostream &o, AAnimal const &i) {
    
    o << i.getType();
    return o;

}

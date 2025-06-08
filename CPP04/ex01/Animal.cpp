/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 21:28:03 by mpeshko           #+#    #+#             */
/*   Updated: 2025/06/09 00:04:44 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Animal.hpp"

// Default Constructor
Animal::Animal( void ) :

    type("Default Animal")
{
	std::cout << "Animal Default Constructor Called" << std::endl;
	return;
}

// Parametric constructor
Animal::Animal( const std::string &name ) :

    type(name)
{
	std::cout << "Animal Parametric Constructor Called" << std::endl;
    return;       
}


// Copy Constructor
Animal::Animal( Animal const & src ) : 
	
	type(src.getType())
{
	std::cout << "Animal Copy Constructor Called" << std::endl;
}

// Assignment operator 
Animal &	Animal::operator=( Animal const &assign ) {
	
	std::cout << "Animal Assignment operator Called" << std::endl;
	if (this != &assign) {
		this->type = assign.getType();
	}
    return *this;
    
}

// Destructor
Animal::~Animal() {
	std::cout << "Animal Destructor Called: ";
	std::cout << this->getType() << " was desctructed." << std::endl;
    return;
}

const std::string& Animal::getType() const {

	return this->type;

}

void	Animal::makeSound() const {

	std::cout << "Undefined Animal Sound";
    
}

std::ostream &	operator<<(std::ostream &o, Animal const &i) {
    
    o << i.getType();
    return o;

}

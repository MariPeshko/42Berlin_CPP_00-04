/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 21:28:03 by mpeshko           #+#    #+#             */
/*   Updated: 2025/06/07 23:03:58 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "WrongAnimal.hpp"

// Default Constructor
WrongAnimal::WrongAnimal( void ) :

    type("Default WrongAnimal")
{
	std::cout << "WrongAnimal Default Constructor Called" << std::endl;
	return;
}

// Parametric constructor
WrongAnimal::WrongAnimal( const std::string &name ) :

    type(name)
{
	std::cout << "WrongAnimal Parametric Constructor Called" << std::endl;
    return;       
}


// Copy Constructor
WrongAnimal::WrongAnimal( WrongAnimal const & src ) : 
	
	type(src.getType())
{
	std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
}

// Assignment operator 
WrongAnimal &	WrongAnimal::operator=( WrongAnimal const &assign ) {
	
	std::cout << "WrongAnimal Assignment operator Called" << std::endl;
	if (this != &assign) {
		this->type = assign.getType();
	}
    return *this;
    
}

// Destructor
WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Destructor Called" << std::endl;
}

const std::string& WrongAnimal::getType() const {

	return this->type;

}

void	WrongAnimal::makeSound() const {

	std::cout << "WrongAnimal is screaming";
    
}

std::ostream &	operator<<(std::ostream &o, WrongAnimal const &i) {
    
    o << i.getType();
    return o;

}

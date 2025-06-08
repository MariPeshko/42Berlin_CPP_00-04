/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 22:26:52 by mpeshko           #+#    #+#             */
/*   Updated: 2025/06/08 13:14:39 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongCat.hpp"

// Default Constructor
WrongCat::WrongCat( void )
    : WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Default Constructor Called" << std::endl;
}

// Copy Constructor
WrongCat::WrongCat( WrongCat const & src )
    : WrongAnimal(src)
{
	std::cout << "WrongCat Copy Constructor Called" << std::endl;
}

// Assignment operator 
WrongCat &	WrongCat::operator=( WrongCat const &assign ) {
	
	std::cout << "WrongCat Assignment operator Called" << std::endl;
	if (this != &assign) {
		this->type = assign.getType();
	}
    return *this;
}

WrongCat::~WrongCat() {

	std::cout << "WrongCat Destructor Called" << std::endl;
	
}

/* method is overridden function */
void	WrongCat::makeSound( void ) const {
	std::cout << "Meow meow me-e-eow";
}

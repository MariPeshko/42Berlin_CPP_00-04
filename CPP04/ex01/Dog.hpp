/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 21:28:42 by mpeshko           #+#    #+#             */
/*   Updated: 2025/06/09 12:55:33 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{

public:
	// Canonical form
    Dog( void );
	Dog( const std::string &name );
	Dog( Dog const & src );	
	Dog &	operator=( Dog const & assign );	
    ~Dog( void );	

	/* method is overridden */
	void				makeSound( void ) const;
	// test of a deep copy
	void				setIdea(std::string idea);
	std::string const	getIdea(void) const;
	Brain*				getAddress() const;


private:
	Brain	*DogBrain;
	
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 13:41:18 by mpeshko           #+#    #+#             */
/*   Updated: 2025/06/09 13:11:41 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

/** NOTES 0
 * 
 * Objects of class type that we do not explicitly initialize 
 * have a value that is defined by the class.
 * 
 * Initialisation of an array of ideas:
 * 
 * std::string	ideas[100]; - empty implicitly initialized
 * to the empty string.
 */

 /** NOTES 1
  * 
  * Copy Constructor.
  * 
  * In C++98, you cannot initialize a raw array like std::string ideas[100]; 
  * using a function call in the member initializer list — arrays cannot 
  * be assigned or copy-constructed directly in the initializer list.
  * 
  * "" : ideas(src.copyIdeas())"" doesn't work
  */

// Default Constructor
Brain::Brain( void ) 
{
	
	std::cout << "Brain Default Constructor Called" << std::endl;
	
}

// Copy Constructor
Brain::Brain( Brain const & src )
{

	std::cout << "Brain Copy Constructor Called" << std::endl;
	for (std::size_t i = 0; i < size(); ++i) {
            this->ideas[i] = src.ideas[i];
        }

}

// Assignment operator 
Brain &	Brain::operator=( Brain const &assign ) {
	
	std::cout << "Brain Assignment operator Called" << std::endl;
	
	if (this != &assign)
		for (std::size_t i = 0; i < size(); ++i) {
            this->ideas[i] = assign.ideas[i];
        }
    return *this;
	
}

Brain::~Brain() {
	std::cout << "Brain Destructor Called" << std::endl;
}

/** 
 * Static function.
 * Returns the number of elements in array 
 * */
std::size_t Brain::size( void ) {

    return sizeof(ideas) / sizeof(ideas[0]);
	
}

void    Brain::setFirstIdea(std::string idea) {

    this->ideas[0] = idea;

}

std::string const Brain::getFirstIdea( void ) const {

    return this->ideas[0];
    
}



/**
 * Notes
 * 
 * size()
 * 
 * std::string is a class, not a plain C-style array of characters.
 * Each std::string object internally manages its own dynamic memory 
 * — it holds a pointer to a buffer on the heap where it stores 
 * its actual characters.
 * 
 * When you write: sizeof(std::string) you’re getting the size of 
 * the std::string object itself — that is, the size of its 
 * internal structure.
 * 
 * Which typically includes:
 * *** A pointer to the character buffer (on the heap)
 * *** A length
 * *** A capacity
 * *** Maybe some allocator-related data
 * 
 * On most systems, sizeof(std::string) is typically 24 or 32 bytes 
 * — and it never changes, even if you assign it a huge string.
 * 
 */

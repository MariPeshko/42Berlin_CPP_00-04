/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 22:27:00 by mpeshko           #+#    #+#             */
/*   Updated: 2025/06/09 12:00:28 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{

public:
	// Canonical form
    Cat( void );
	Cat( Cat const & src );	
	Cat &	operator=( Cat const & assign );	
    ~Cat( void );	
	
	/* method is overridden */
	void	makeSound( void ) const;
	// test of a deep copy
	void				setIdea(std::string idea);
	std::string const	getIdea(void) const;

private:
	Brain	*CatBrain;
	
};

#endif


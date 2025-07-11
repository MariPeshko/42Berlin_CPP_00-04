/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 22:27:00 by mpeshko           #+#    #+#             */
/*   Updated: 2025/07/11 16:18:41 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Brain.hpp"


class Cat : public AAnimal
{

public:
	// Canonical form
    Cat( void );
	Cat( const std::string &name );
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


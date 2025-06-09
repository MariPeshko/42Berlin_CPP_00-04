/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 22:27:00 by mpeshko           #+#    #+#             */
/*   Updated: 2025/06/09 11:59:36 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include <iostream>
#include <string>
#include "Animal.hpp"


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
	
};

#endif

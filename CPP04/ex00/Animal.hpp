/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 21:28:21 by mpeshko           #+#    #+#             */
/*   Updated: 2025/06/07 23:05:46 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

#include <iostream>
#include <string>

class	Animal
{

public:
	// Canonical form
    Animal( void );
	Animal( const std::string &name );
	Animal( Animal const & src );	
	Animal &	operator=( Animal const & assign );	
    virtual ~Animal( void );	

	const std::string&	getType() const;

	// virtual
	virtual void		makeSound() const;

protected:
	std::string	type;

};

std::ostream &	operator<<(std::ostream &o, Animal const &i);

#endif

/**

*/

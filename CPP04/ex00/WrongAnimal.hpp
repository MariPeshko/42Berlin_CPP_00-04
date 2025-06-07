/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 21:28:21 by mpeshko           #+#    #+#             */
/*   Updated: 2025/06/07 23:05:56 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_H
# define WRONG_ANIMAL_H

#include <iostream>
#include <string>

class	WrongAnimal
{

public:
	// Canonical form
    WrongAnimal( void );
	WrongAnimal( const std::string &name );
	WrongAnimal( WrongAnimal const & src );	
	WrongAnimal &	operator=( WrongAnimal const & assign );	
    virtual ~WrongAnimal( void );	

	const std::string&	getType() const;

	void				makeSound() const;

protected:
	std::string	type;

};

std::ostream &	operator<<(std::ostream &o, WrongAnimal const &i);

#endif

/**

*/

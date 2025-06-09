/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 21:28:21 by mpeshko           #+#    #+#             */
/*   Updated: 2025/06/09 13:10:14 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
# define AANIMAL_H

#include <iostream>
#include <string>

/**
 * In C++, a class is only considered abstract if it contains at least 
 * one pure virtual function.
*/

class	AAnimal
{

public:
    AAnimal( void );
	AAnimal( const std::string &name );
	AAnimal( AAnimal const & src );	
	AAnimal &	operator=( AAnimal const & assign );	
    virtual ~AAnimal( void );

	const std::string&	getType() const;
	// Pure virtual function
	virtual void		makeSound() const = 0;


protected:
	std::string	type;

};

std::ostream &	operator<<(std::ostream &o, AAnimal const &i);

#endif

/**
 * 
pure virtual (C++ Primer Book)

Virtual function declared in the class header using = 0 just before 
the semicolon. A pure virtual function need not be (but may be) defined. 
Classes with pure virtuals are abstract classes. If a derived class does 
not define its own version of an inherited pure virtual, then 
the derived class is abstract as well.

*/

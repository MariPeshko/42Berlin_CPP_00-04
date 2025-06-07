/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 22:27:00 by mpeshko           #+#    #+#             */
/*   Updated: 2025/06/07 22:52:19 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_CAT_H
# define WRONG_CAT_H

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

/* 

*/

class WrongCat : public WrongAnimal
{

public:
	// Canonical form
    WrongCat( void );
	WrongCat( const std::string &name );
	WrongCat( WrongCat const & src );	
	WrongCat &	operator=( WrongCat const & assign );	
    ~WrongCat( void );	

	void	makeSound( void ) const;
	
};

#endif


/** NOTES:
 * 
*/

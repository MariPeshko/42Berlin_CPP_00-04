/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 13:41:26 by mpeshko           #+#    #+#             */
/*   Updated: 2025/06/09 00:20:18 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>
#include <string>

class Brain
{

public:
	// Canonical form
    Brain( void );
	Brain( const std::string &name );
	Brain( Brain const & src );	
	Brain &	operator=( Brain const & assign );	
    ~Brain( void );	

	static std::size_t	size( void );
	void				setFirstIdea(std::string idea);
	std::string const	getFirstIdea( void ) const;

private:
	std::string			ideas[100];
	
};

#endif

/** NOTES
 * 
 * Objects of class type that we do not explicitly initialize 
 * have a value that is defined by the class.
 */

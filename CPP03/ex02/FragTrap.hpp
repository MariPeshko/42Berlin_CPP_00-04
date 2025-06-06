/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 23:22:07 by mpeshko           #+#    #+#             */
/*   Updated: 2025/06/06 13:48:34 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_H
# define FRAG_TRAP_H

#include <iostream>
#include "ClapTrap.hpp"

/**
 * FragTrap class inherits from ClapTrap.
 * However, its construction and destruction messages 
 * must be different from ScavTrap Class.
*/

class FragTrap : public ClapTrap
{

public:
	// Canonical form
    FragTrap( void );
	FragTrap( const std::string &name );
	FragTrap( FragTrap const & src );	
	FragTrap &	operator=( FragTrap const & assign );	
    ~FragTrap( void );	

	// overridden function
	void	attack(const std::string& target);
	
	void	highFivesGuys(void);

};

#endif

/** NOTES:
 * 
 * 
*/

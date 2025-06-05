/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 23:22:07 by mpeshko           #+#    #+#             */
/*   Updated: 2025/06/05 23:47:33 by mpeshko          ###   ########.fr       */
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
    FragTrap( void );
	FragTrap( const std::string &name );
	FragTrap( FragTrap const & src );	
	FragTrap &	operator=( FragTrap const & assign );	
    ~FragTrap( void );	

	void	attack(const std::string& target);
	void	highFivesGuys(void);

};

std::ostream &	operator<<(std::ostream &o, FragTrap const &i);

#endif

/** NOTES:
 * 
 * 
*/

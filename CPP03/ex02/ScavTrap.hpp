/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 18:05:25 by mpeshko           #+#    #+#             */
/*   Updated: 2025/06/05 22:43:38 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_H
# define SCAV_TRAP_H

#include <iostream>
#include "ClapTrap.hpp"

/* 
ScavTrap class is derived robot from a class ClapTrap. 

It will inherit the constructors and destructor from ClapTrap.

Its constructors, destructor, and attack() will print 
different messages.

/////////////////////////////////////////////////////

When a ScavTrap is created, the program starts by constructing a ClapTrap. 
Destruction occurs in reverse order. ScavTrap will use the attributes 
of ClapTrap (update ClapTrap accordingly).

*/


class ScavTrap : public ClapTrap
{

public:
    ScavTrap( void );
	ScavTrap( const std::string &name );
	ScavTrap( ScavTrap const & src );	
	ScavTrap &	operator=( ScavTrap const & assign );	
    ~ScavTrap( void );	

	void	attack(const std::string& target);
	void	guardGate();		



};

std::ostream &	operator<<(std::ostream &o, ScavTrap const &i);

#endif


/** NOTES:
 * 
 * Firstly I have in a child class all private attributes
 * 
 * private:
	std::string _name;
	int			_hit_points;
	int			_energy_points;
	int			_attack_damage;
 * 
 * Fields probably belong to the base class ClapTrap, and they are 
 * private in ClapTrap, so ScavTrap ends up redeclaring its 
 * own versions of these variables instead of modifying the 
 * base class's versions.
 * 
 * Solution: protected: instead of private in parent
 * ClapTrap header.
 * 
 * Conclusion: Avoid Variable Shadowing
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 18:06:26 by mpeshko           #+#    #+#             */
/*   Updated: 2025/08/24 20:21:44 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAP_TRAP_H
# define CLAP_TRAP_H

#include <iostream>
#include <string>

class ClapTrap
{

public:
    ClapTrap( void );
	ClapTrap( const std::string &name );
	ClapTrap( ClapTrap const & src );	
	ClapTrap &	operator=( ClapTrap const & assign );	
    ~ClapTrap( void );	

	const std::string&	getName() const;
	int					getEnergyPoints() const;
	int					getHitPoints() const;
	int					getDamage() const;
	void				attack(const std::string& target);
	void				takeDamage(unsigned int amount);
	void				beRepaired(unsigned int amount);					

protected:
	std::string _name;
	int			_hit_points;
	int			_energy_points;
	int			_attack_damage;

};

std::ostream &	operator<<(std::ostream &o, ClapTrap const &i);

#endif

/**
 * protected instead of private for govong access
 * to a derived class
*/

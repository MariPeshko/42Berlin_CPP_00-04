/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 18:06:40 by mpeshko           #+#    #+#             */
/*   Updated: 2025/06/06 13:35:55 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap("Default")
{
	std::cout << "FragTrap Default Constructor Called" << std::endl;
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
	return;
}

FragTrap::FragTrap( const std::string &name ) : ClapTrap(name)
{
	std::cout << "FragTrap Parametric Constructor Called" << std::endl;
    _hit_points = 100;
    _energy_points = 100;
    _attack_damage = 30;
    return;
}

// Copy Constructor
FragTrap::FragTrap( FragTrap const & src ) : ClapTrap(src)
{
	std::cout << "FragTrap Copy Constructor Called" << std::endl;
}

// Assignment operator 
FragTrap &	FragTrap::operator=( FragTrap const &assign ) {
	
	std::cout << "FragTrap Assignment operator Called" << std::endl;
	if (this != &assign) {
		this->_name = assign.getName();
		this->_hit_points = assign.getHitPoints();
		this->_energy_points = assign.getEnergyPoints();
		this->_attack_damage = assign.getDamage();
	}
    return *this;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destructor Called: ";
	std::cout << "FragTrap " << this->getName();
    std::cout << " was desctructed" << std::endl;
    return;
}

/* getName(), getEnergyPoints(), getHitPoints(), 
getDamage() are inherited from ClapTrap */
/* takeDamage() and beRepaired() are also inherited */


/* attack() method is overridden */
void    FragTrap::attack(const std::string& target) {

	if (this->_energy_points <= 0 && this->_hit_points <= 0) {
		std::cout << "Energy points is 0 and hit points is 0.\nScavTrap ";
		std::cout << this->getName() << " can't attack (╥﹏╥)" << std::endl;
	}
    else if (this->_energy_points <= 0) {
        std::cout << "Energy points is 0. The FragTrap ";
		std::cout << this->getName() << " can't attack (╥﹏╥)";
        std::cout << std::endl;
        return ;
    }
	else if (this->_hit_points == 0) {
        std::cout << "Hit points is 0. The FragTrap ";
		std:: cout << this->getName() << " can't attack (╥﹏╥)";
        std::cout << std::endl;
        return ;
    }
    else {
        std::cout << "FragTrap " << *this << " attacks " << target;
		std::cout << "\nIt costs 1 energy point" << std::endl;
        this->_energy_points--;
        std::cout << "Energy points of " << getName();
        std::cout << " is " << getEnergyPoints() << std::endl;
		this->_hit_points--;
        std::cout << "Hit points of " << getName();
        std::cout << " is " << getHitPoints() << std::endl;
    }
}

void	FragTrap::highFivesGuys(void) {
    std::cout << *this << " says: \"Gimme five, ScavTrap bro!\"" << std::endl;
}

//first wrong version of Constructors
/* FragTrap::FragTrap( void ) :

    _name("Default"),
    _hit_points(100),
    _energy_points(50),
    _attack_damage(20)
{
	std::cout << "FragTrap Default Constructor Called" << std::endl;
    std::cout << this->_name << " is instanciated\n";
}

FragTrap::FragTrap( const std::string &name ) : 
    _name(name),
    _hit_points(100),
    _energy_points(50),
    _attack_damage(20)
{
	std::cout << "FragTrap Parametric Constructor Called" << std::endl;
    std::cout << this->_name << " is instanciated\n";
} */

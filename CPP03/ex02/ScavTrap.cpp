/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 18:06:40 by mpeshko           #+#    #+#             */
/*   Updated: 2025/06/06 16:55:33 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ScavTrap.hpp"

// correct instansiation
ScavTrap::ScavTrap( void ) : ClapTrap("Default")
{
	std::cout << "ScavTrap Default Constructor Called" << std::endl;
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
	return;
}

// Main constructor
ScavTrap::ScavTrap( const std::string &name ) : ClapTrap(name)
{
	std::cout << "ScavTrap Parametric Constructor Called" << std::endl;
    _hit_points = 100;
    _energy_points = 50;
    _attack_damage = 20;
    return;
}

// Copy Constructor
ScavTrap::ScavTrap( ScavTrap const & src ) : ClapTrap(src)
{
	std::cout << "ScavTrap Copy Constructor Called" << std::endl;
}

// Assignment operator 
ScavTrap &	ScavTrap::operator=( ScavTrap const &assign ) {
	
	std::cout << "ScavTrap Assignment operator Called" << std::endl;
	if (this != &assign) {
		this->_name = assign.getName();
		this->_hit_points = assign.getHitPoints();
		this->_energy_points = assign.getEnergyPoints();
		this->_attack_damage = assign.getDamage();
	}
    return *this;
}

// Destructor
ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor Called: ";
	std::cout << "ScavTrap " << this->getName();
    std::cout << " was desctructed" << std::endl;
    return;
}

/* attack() method is overridden */
void    ScavTrap::attack(const std::string& target) {

	if (this->_energy_points <= 0 && this->_hit_points <= 0) {
		std::cout << "Energy points is 0 and hit points is 0.\nScavTrap ";
		std::cout << this->getName() << " can't attack (╥﹏╥)" << std::endl;
	}
    else if (this->_energy_points <= 0) {
        std::cout << "Energy points is 0. The ScavTrap ";
		std::cout << this->getName() << " can't attack (╥﹏╥)";
        std::cout << std::endl;
        return ;
    }
	else if (this->_hit_points == 0) {
        std::cout << "Hit points is 0. The ScavTrap ";
		std:: cout << this->getName() << " can't attack (╥﹏╥)";
        std::cout << std::endl;
        return ;
    }
    else {
        std::cout << "ScavTrap " << *this << " attacks " << target;
		std::cout << "\nIt costs 1 energy point" << std::endl;
        this->_energy_points--;
        std::cout << "Energy points of " << getName();
        std::cout << " is " << getEnergyPoints() << std::endl;
		this->_hit_points--;
        std::cout << "Hit points of " << getName();
        std::cout << " is " << getHitPoints() << std::endl;
    }

}

void	ScavTrap::guardGate() {
    
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;

}		

//first wrong version of Constructors
/* ScavTrap::ScavTrap( void ) :

    _name("Default"),
    _hit_points(100),
    _energy_points(50),
    _attack_damage(20)
{
	std::cout << "ScavTrap Default Constructor Called" << std::endl;
    std::cout << this->_name << " is instanciated\n";
}

ScavTrap::ScavTrap( const std::string &name ) : 
    _name(name),
    _hit_points(100),
    _energy_points(50),
    _attack_damage(20)
{
	std::cout << "ScavTrap Parametric Constructor Called" << std::endl;
    std::cout << this->_name << " is instanciated\n";
} */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 18:06:09 by mpeshko           #+#    #+#             */
/*   Updated: 2025/06/06 00:26:16 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) :

    _name("Default"),
    _hit_points(10),
    _energy_points(10),
    _attack_damage(0)
{
	std::cout << "ClapTrap Default Constructor Called" << std::endl;
	return;
}

// Main constructor
ClapTrap::ClapTrap( const std::string &name ) :

    _name(name),
    _hit_points(10),
    _energy_points(10),
    _attack_damage(0)
{
	std::cout << "ClapTrap Parametric Constructor Called" << std::endl;
    return;       
}


// Copy Constructor
ClapTrap::ClapTrap( ClapTrap const & src ) : 
	
	_name(src.getName()),
	_hit_points(src.getHitPoints()),
	_energy_points(src.getEnergyPoints()),
	_attack_damage(src.getDamage())
{
	std::cout << "ClapTrap Copy Constructor Called" << std::endl;
}

// Assignment operator 
ClapTrap &	ClapTrap::operator=( ClapTrap const &assign ) {
	
	std::cout << "ClapTrap Assignment operator Called" << std::endl;
	if (this != &assign) {
		this->_name = assign.getName();
		this->_hit_points = assign.getHitPoints();
		this->_energy_points = assign.getEnergyPoints();
		this->_attack_damage = assign.getDamage();

	}
    return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap Destructor Called: ";
	std::cout << "ClapTrap " << this->getName() << " was desctructed." << std::endl;
    return;
}

const std::string& ClapTrap::getName() const {

	return this->_name;

}

const int   ClapTrap::getEnergyPoints() const {

    return this->_energy_points;

}

const int   ClapTrap::getHitPoints() const {

    return this->_hit_points;

}

const int	ClapTrap::getDamage() const {

	return this->_attack_damage;

}

std::ostream &	operator<<(std::ostream &o, ClapTrap const &i) {
    std::cout << "<|°_°|> ";
    o << i.getName();
    return o;

}

// Attacking and repairing each cost 1 energy point.
// When ClapTrap attacks, it causes its target 
// to lose <attack damage> hit points.
void    ClapTrap::attack(const std::string& target) {

	if (this->_energy_points <= 0 && this->_hit_points <= 0) {
		std::cout << "Energy points is 0 and hit points is 0\nClapTrap ";
		std::cout << this->getName() << " can't attack (╥﹏╥)" << std::endl;
	}
    else if (this->_energy_points <= 0) {
        std::cout << "Energy points is 0. The ClapTrap ";
		std::cout << this->getName() << " can't attack (╥﹏╥)";
        std::cout << std::endl;
        return ;
    }
	else if (this->_hit_points == 0) {
        std::cout << "Hit points is 0. The ClapTrap ";
		std:: cout << this->getName() << " can't attack (╥﹏╥)";
        std::cout << std::endl;
        return ;
    }
    else {
        std::cout << "ClapTrap " << *this << " attacks " << target;
		std::cout << "\nIt costs 1 energy point" << std::endl;
        this->_energy_points--;
        std::cout << "Energy points of " << getName() << " is " << getEnergyPoints() << std::endl;
		this->_hit_points--;
        std::cout << "Hit points of " << getName() << "    is " << getHitPoints() << std::endl;
    }

}
void    ClapTrap::takeDamage(unsigned int amount) {

		this->_attack_damage = this->_attack_damage + amount;
        std::cout << *this << " is attacked by " << amount << " amount of damage\n";
        std::cout << *this << " Attack Damage: " << this->getDamage() << std::endl;

}

// Attacking and repairing each cost 1 energy point.
// When ClapTrap repairs itself, it regains amount (of) hit points
void    ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energy_points <= 0) {
        std::cout << "Energy points is 0. ";
		std::cout << *this << " can't be repaired ╥﹏╥";
        std::cout << std::endl;
        return ;
    }
	std::cout << *this << " is being repaired for ";
	std::cout << amount << " points! ₍^. .^₎Ⳋ" << std::endl;
	this->_energy_points--;
	std::cout << "It costs 1 energy point" << std::endl;
    std::cout << "Energy points of " << getName() << " is " << getEnergyPoints() << std::endl;
	this->_hit_points += amount;
    std::cout << "Hit points of " << getName() << " is " << getHitPoints() << std::endl;
}



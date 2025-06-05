#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) :

    _name("Default"),
    _hit_points(10),
    _energy_points(10),
    _attack_damage(0)
{
	std::cout << "Parametric Constructor Called" << std::endl;
	return;
}

// Main constructor
ClapTrap::ClapTrap( const std::string &name ) :

    _name(name),
    _hit_points(10),
    _energy_points(10),
    _attack_damage(0)
{
	std::cout << "Parametric Constructor Called" << std::endl;
    std::cout << "ClapTrap " << getName() << " is instanciated\n";
    return;       }

// Full Parametric constructor
/* ClapTrap::ClapTrap(const std::string &name, int const health, int const energy, int const damage) : 
    _name(name),
    _hit_points(health),
    _energy_points(energy),
    _attack_damage(damage)
{
    // The object _name was instanciated
    // Hit points: Energy points: Attack damage:
} */

// Copy Constructor
ClapTrap::ClapTrap( ClapTrap const & src ) : 
	
	_name(src.getName()),
	_hit_points(src.getHitPoints()),
	_energy_points(src.getEnergyPoints()),
	_attack_damage(src.getDamage())
{
	std::cout << "Copy Constructor Called" << std::endl;
}

// Assignment operator 
ClapTrap &	ClapTrap::operator=( ClapTrap const & rhs ) {
	
   /*  if (this != &rhs) {
        this->_value = rhs.getRawBits(); // fix
    } */
    return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor Called: ";
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

    o << i.getName();
    return o;

}

// Attacking and repairing each cost 1 energy point.
// When ClapTrap attacks, it causes its target 
// to lose <attack damage> hit points.
void    ClapTrap::attack(const std::string& target) {

	if (this->_energy_points <= 0 && this->_hit_points <= 0) {
		std::cout << "Energy points is 0 and hit points is 0 ClapTrap ";
		std::cout << this->getName() << " can't attack" << std::endl;
	}
    else if (this->_energy_points <= 0) {
        std::cout << "Energy points is 0. The ClapTrap ";
		std::cout << this->getName() << " can't attack";
        std::cout << std::endl;
        return ;
    }
	else if (this->_hit_points == 0) {
        std::cout << "Hit points is 0. The ClapTrap ";
		std:: cout << this->getName() << " can't attack";
        std::cout << std::endl;
        return ;
    }
    else {
        std::cout << "ClapTrap " << getName() << " attacks " << target;
		std::cout << ". It costs 1 energy point" << std::endl;
        this->_energy_points--;
        std::cout << "Energy points of " << getName() << " is " << getEnergyPoints() << std::endl;
		this->_hit_points--;
        std::cout << "Hit points of " << getName() << " is " << getHitPoints() << std::endl;
		takeDamage(1);
    }
    // ClapTrap <name> attacks <target>, causing <damage> points of damage!

}
void    ClapTrap::takeDamage(unsigned int amount) {

		this->_attack_damage = this->_attack_damage + amount;
        std::cout << "Attack Damage: " << getDamage() << std::endl;

}

// Attacking and repairing each cost 1 energy point.
// When ClapTrap repairs itself, it regains amount (of) hit points
void    ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energy_points <= 0) {
        std::cout << "Energy points is 0. The ClapTrap ";
		std::cout << this->getName() << " can't be repaired";
        std::cout << std::endl;
        return ;
    }
	std::cout << "ClapTrap " << getName() << " is being repaired for ";
	std::cout << amount << " points!" << std::endl;
	this->_energy_points--;
	std::cout << "It costs 1 energy point" << std::endl;
    std::cout << "Energy points of " << getName() << " is " << getEnergyPoints() << std::endl;
	this->_hit_points += amount;
    std::cout << "Hit points of " << getName() << " is " << getHitPoints() << std::endl;
}



#include <iostream>
#include <string>
#include "HumanA.hpp"

// HumanA takes the Weapon in its constructor

HumanA::HumanA(std::string name, Weapon& weapon)
	:	name(name),
		WeaponA(weapon)
{
}

void	HumanA::attack(void) {
    std::cout << this->name << " attacks with their ";
    std::cout << WeaponA.getType() << std::endl;
}

// The destructor must print a message with 
// the name of the zombie for debugging purposes.
HumanA::~HumanA( void ) {
    std::cout << "Desctructor called for ";
    std::cout << this->name << std::endl;
}

/*
Notes:
// The unused Constructor
// HumanA::HumanA() : name("HumanA") {}

*/
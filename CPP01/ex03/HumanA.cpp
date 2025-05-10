#include <iostream>
#include <string>
#include "HumanA.hpp"

// The Constructor
HumanA::HumanA() : name("HumanA") {}

// HumanA takes the Weapon in its constructor

// The Constructor overloading
// Reference to string? Or not? Reference to weapon?
HumanA::HumanA(std::string name, Weapon weapon)
	:	name(name),
		WeaponA(weapon)
{

}

/* void HumanA::announce(void) {
    std::cout << name << ": ";
    std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void HumanA::setName(const std::string& rename) {
    name = rename;
} */

void	attack(void) {
     //<name> attacks with their <weapon type>
    std::cout << this->name << " attacks with their ";
    std::cout << this->
}


// The destructor must print a message with 
// the name of the zombie for debugging purposes.
HumanA::~HumanA( void ) {
    std::cout << "Desctructor called for ";
    std::cout << this->name << std::endl;
}

/*
Notes:
*/
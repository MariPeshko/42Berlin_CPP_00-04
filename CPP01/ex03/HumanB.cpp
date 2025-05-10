#include <iostream>
#include <string>
#include "HumanB.hpp"

// The Constructor
HumanB::HumanB() : name("HumanB") {}

// HumanB takes the Weapon NOT in its constructor
// HumanB may not always have a weapon

// The Constructor overloading
HumanB::HumanB(std::string name) : name(name) {}

// reference or pointer?
void setWeapon(Weapon instance) {
    this->WeaponB = instance;
}

/* void HumanB::announce(void) {
    std::cout << name << ": ";
    std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void HumanB::setName(const std::string& rename) {
    name = rename;
} */

// The destructor must print a message with 
// the name of the zombie for debugging purposes.
HumanB::~HumanB( void ) {
    std::cout << "Desctructor called for ";
    std::cout << this->name << std::endl;

}

/*
Notes:
*/
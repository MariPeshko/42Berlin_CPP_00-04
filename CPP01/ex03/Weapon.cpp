#include "Weapon.hpp"
#include <iostream>
#include <string>

// The Constructor
Weapon::Weapon() : name("Weapon") {}

// The Constructor overloading
Weapon::Weapon(std::string name) : name(name) {}

/* void Weapon::announce(void) {
    std::cout << name << ": ";
    std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Weapon::setName(const std::string& rename) {
    name = rename;
} */

// The destructor must print a message with 
// the name of the zombie for debugging purposes.
Weapon::~Weapon( void ) {
    std::cout << "Desctructor called for ";
    std::cout << this->name << std::endl;

}

/*
Notes:
*/
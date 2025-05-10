#include "Weapon.hpp"
#include <iostream>
#include <string>

// The Constructor
Weapon::Weapon() : type("DefaultWeapon") {}

// The Constructor overloading
Weapon::Weapon(std::string name) : type(name) {}

// member function that returns a constant reference to type
const std::string&	Weapon::getType() const {
	return type;
}

// Why const???
void Weapon::setType(const std::string new_type) {
	this->type = new_type;
}

Weapon::~Weapon( void ) {
   // std::cout << "Desctructor called for ";
    // std::cout << this->type << std::endl;
}

/*
Notes:
*/
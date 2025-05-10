#include <iostream>
#include <string>
#include "Zombie.hpp"

// The Constructor
Zombie::Zombie() : name("Zombie") {}

// The Constructor overloading
Zombie::Zombie(std::string name) : name(name) {}

void Zombie::announce(void) {
    std::cout << name << ": ";
    std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(const std::string& rename) {
    name = rename;
}

// The destructor must print a message with 
// the name of the zombie for debugging purposes.
Zombie::~Zombie( void ) {
    std::cout << "Desctructor called for ";
    std::cout << this->name << std::endl;

}

/*
Notes:
A class can have more than one constructor. 
This is called constructor overloading in C++.

Zombie::Zombie(std::string name) : _name(name)
{
}

In header:
Zombie(std::string name);

*/
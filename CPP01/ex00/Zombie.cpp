#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie() : _name("what_name") {
    std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
}

// The destructor must print a message with 
// the name of the zombie for debugging purposes.
Zombie::~Zombie( void ) {
    std::cout << this->_name << std::endl;
}
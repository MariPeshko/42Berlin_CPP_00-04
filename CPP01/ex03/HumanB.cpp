#include <iostream>
#include <string>
#include "HumanB.hpp"
#include "Weapon.hpp"

// HumanB takes the Weapon NOT in its constructor
// HumanB may not always have a weapon

// The Constructor
HumanB::HumanB() : name("HumanB") {}

// The Constructor overloading
HumanB::HumanB(std::string name) 
    : name(name),
      WeaponB(NULL)
{   
}

/*
    WeaponB is a pointer.
    instance is passed by reference
*/
void    HumanB::setWeapon(Weapon& instance) {
    this->WeaponB = &instance;
}

void	HumanB::attack(void) {

    if (!WeaponB) {
        std::cout << this->name << " has no weapon ";
        std::cout << std::endl;
    }
    else {
        //<name> attacks with their <weapon type>
        std::cout << this->name << " attacks with their ";
        std::cout << WeaponB->getType() << std::endl;
    }
}

// The destructor must print a message with 
// the name of the zombie for debugging purposes.
HumanB::~HumanB( void ) {
    
    std::cout << "Desctructor called for ";
    std::cout << this->name << std::endl;

}

/*
Notes:
1.
When WeaponB was a reference " Weapon&	WeaponB;" I got the error:

"error: reference to type 'Weapon' requires an initializer
      WeaponB()"

can't do anything valid here with WeaponB 
if no Weapon is passed to the Constructor.

But since WeaponB is a reference, it must be initialized 
in the constructor's initializer list. If you don't 
have a Weapon at construction time, that's impossible.

2. 
void    HumanB::setWeapon(Weapon instance) {
    this->WeaponB = &instance; 
} 
   BAD: storing a pointer to a temporary object.

You pass Weapon instance by value. That means a copy 
of the weapon is made inside the function. When 
the function exits, instance is destroyed, 
and the memory is reclaimed.

Now WeaponB points to freed memory — a dangling pointer.
*/
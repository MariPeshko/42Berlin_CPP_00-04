#ifndef HUMANB_H
# define HUMANB_H

#include <string>
#include <iostream>
#include "Weapon.hpp"

class	HumanB
{
    public:
		HumanB( void );
		~HumanB( void );
		HumanB(std::string name);
		void	attack(void);
		void	setWeapon(Weapon& instance);
		
	private:
        std::string name;
        Weapon	*WeaponB;
};

#endif

/*
Notes:
a pointer to Weapon instead of a reference.
More - in .cpp.

*/
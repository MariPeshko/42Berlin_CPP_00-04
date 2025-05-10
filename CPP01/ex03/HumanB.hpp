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
		//void	announce(void);
		HumanB(std::string name);
		//void	setName(const std::string& rename);

		void setWeapon(Weapon instance);

		// <name> attacks with their <weapon type>
		//void	attack();

	private:
        std::string name;
        Weapon	WeaponB;
};

#endif

/*
Notes:

*/
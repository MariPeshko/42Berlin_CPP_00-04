#ifndef HUMANA_H
# define HUMANA_H

#include <string>
#include <iostream>
#include "Weapon.hpp"

class	HumanA
{
    public:
		HumanA( void );
		//void	announce(void);
		HumanA(std::string name, Weapon weapon);
		~HumanA( void );

		//void	setName(const std::string& rename);
		// <name> attacks with their <weapon type>
		//void	attack();

	private:
        std::string name;
        Weapon	WeaponA;
};

#endif

/*
Notes:

*/
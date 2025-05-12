#include <string>
#include <iostream>
#include "Weapon.hpp"

#ifndef HUMANA_H
# define HUMANA_H

class	HumanA
{
    public:
		HumanA( void );
		HumanA(std::string name, Weapon& weapon);
		~HumanA( void );
		void	attack(void);

	private:
        std::string name;
        Weapon&	WeaponA;
};

#endif
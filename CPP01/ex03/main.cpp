#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

//#include <iostream>

int	main(void) {
	{
		Weapon club = Weapon("crude spiked club");

		HumanA bob = HumanA("bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	std::cout << std::endl;
	{
		HumanB jim = HumanB("jim");
		jim.attack();

		
		Weapon club = Weapon("crude spiked club");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return (0);
}
	
/*
Notes:
		Weapon club = Weapon("crude spiked club");
	Then club is copy-constructed from that temporary Weapon.
	The temporary is destroyed immediately after 
	that copy (calling the destructor once).
	So you actually get two destructor calls
*/
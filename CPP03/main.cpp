#include <iostream>
#include "ClapTrap.hpp"

int	main ( void ) {

	ClapTrap a("Vadym");
	a.attack("target");
	a.attack("target");
	a.attack("target");
	a.attack("target");
	a.attack("target");
	a.attack("target");
	a.attack("target");
	a.attack("target");
	a.attack("target");
	a.attack("target");

//11
	a.attack("target");
//12
	a.attack("target");

	return 0;
}

/*
Since these exercises serve as an introduction, 
the ClapTrap instances should not interact directly 
with one another, and the parameters will not refer 
to another instance of ClapTrap.
*/
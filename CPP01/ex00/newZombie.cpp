#include "Zombie.hpp"

// This function creates a zombie, names it, 
// and returns it so you can use it outside
// of the function scope.
Zombie*	newZombie( std::string name )
{
	Zombie *z = new Zombie();
	z->setName(name);
	return z;
}

/*
Notes:

Error_1.
new Zombie(); 
// creates a new Zombie, but the pointer is not stored.
Fix:
Zombie* z = new Zombie();
// allocate a new Zombie on the heap

*/

#include "Zombie.hpp"

// Now, what is the actual point of the exercise?
// You have to determine in which case it is better 
// to allocate zombies on the stack or the heap.
int	main(void) {

	Zombie *RefZombie = newZombie("Vadym");
	RefZombie->announce();
	randomChump("RandomChump");
	delete RefZombie;
	return 0;
	
}
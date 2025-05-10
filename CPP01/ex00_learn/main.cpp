#include "Zombie.hpp"

//Now, what is the actual point of the exercise?
//You have to determine in which case it is 
// better to allocate zombies on the stack or 
// the heap.
int	main(void) {

	Zombie Me;

	Me.setName("Maryna");
	Me.announce();

	Zombie *RefZombie = newZombie("Vadym");
	RefZombie->announce();
	delete RefZombie;

	Zombie ConstructorOverloading("ConstructorOverloading");
	
	randomChump("RandomChump");

	return 0;
}
#include "Zombie.hpp"
#include <iostream>

// new array of instances
int	main(void) {

	int N = 8;
	
	Zombie* zombies = zombieHorde(N, "Grace");

	if(zombies == NULL)
		return (0);

	int	i = 0;
	while(i < N) {
		std::cout << (i + 1) << " ";
		zombies[i].announce();
		i++;
	}

	delete [] zombies;
	return (0);
	
}
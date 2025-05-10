#include "Zombie.hpp"

#include <iostream>

int	main(void) {

	int N = 8;
	// new array
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
#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class	Zombie
{
    public:
		Zombie( void );
		Zombie(std::string name); // second constructor
		~Zombie( void );
		void	announce(void);

	private:
        std::string name;
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif

/*
Notes:
// second constructor
Zombie(std::string name);

*/
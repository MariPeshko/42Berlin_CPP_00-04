#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>

class	Zombie
{
    public:
		Zombie( void );
		~Zombie( void );
		void	setName(const std::string& rename);
		void	announce(void);
		Zombie(std::string name);

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
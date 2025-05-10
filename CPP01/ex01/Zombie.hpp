#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>
#include <iostream>

class	Zombie
{
    public:
		Zombie( void );
		~Zombie( void );
		void	announce(void);
		Zombie(std::string name);
		void	setName(const std::string& rename);

	private:
        std::string name;
};

Zombie* zombieHorde( int N, std::string name );

#endif

/*
Notes:

*/
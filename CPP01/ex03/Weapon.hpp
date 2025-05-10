#ifndef WEAPON_H
# define WEAPON_H

#include <string>
#include <iostream>

class	Weapon
{
    public:
		Weapon( void );
		~Weapon( void );
		//void	announce(void);
		Weapon(std::string name);
		//void	setName(const std::string& rename);

        //member function that returns a constant reference to type
        //std::string& getType();
        //member function that sets type using
        //the new value passed as a parameter
        //setType(std::string mew_type);

	private:
        std::string type;
};

#endif

/*
Notes:

*/
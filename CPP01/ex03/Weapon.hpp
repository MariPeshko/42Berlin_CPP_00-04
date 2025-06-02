#ifndef WEAPON_H
# define WEAPON_H

#include <string>
#include <iostream>


class	Weapon
{
    public:
        Weapon( void );
        ~Weapon( void );
        Weapon(std::string name);

        //member function that returns a constant reference to type
        const std::string& getType() const;

        //member function that sets type using
        //the new value passed as a parameter
        void setType(std::string new_type);

	private:
        std::string type;
};

#endif

/*
Notes:

*/
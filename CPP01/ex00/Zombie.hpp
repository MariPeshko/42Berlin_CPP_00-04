#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>

class	Zombie
{
    public:
		Zombie( void );
		~Zombie( void );
        void announce( void );
        /* 
		void Display_Cont(int _index);
		void Display_All_Cont();
		void Print_Column(const std::string& str); */

	private:
        std::string _name;
        /* 
		std::string _last_name;
		std::string _nickname;
		std::string _phone_number;
		std::string _dark_secret; */
};

#endif
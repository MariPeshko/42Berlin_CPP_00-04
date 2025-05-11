#include <iostream>
#include "Harl.hpp"

// The Constructor
Harl::Harl() {
	std::cout << "Harl is here!" << std::endl;
}

// The Descturcot
Harl::~Harl( void ) {
	std::cout << "Harl says bye-bye!" << std::endl;
}

void    Harl::debug( void ) {
	std::cout << "DEBUG level:" << std:: endl;
	std::cout << "I love having extra bacon for my \n";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger.\n";
	std::cout << "I really do!" << std::endl;

}
void    Harl::info( void ) {
	std::cout << "INFO level:" << std:: endl;
	std::cout << "I cannot believe adding extra bacon costs more money.\n";
	std::cout << "You didn’t put enough bacon in my burger! ";
	std::cout << "If you did,\n I wouldn’t be asking for more!" << std::endl;

}
void    Harl::warning( void ) {
	std::cerr << "WARNING level:" << std:: endl;
	std::cout << "I think I deserve to have some extra bacon for free.\n";
	std::cout << "’ve been coming for years, whereas \n";
	std::cout << "ou started working here just last month." << std::endl;

}
void    Harl::error( void ) {
	std::cerr << RED <<  "ERROR level:" << NORMAL << std:: endl;
	std::cerr << "This is unacceptable! I want to speak to the manager now.";
	std::cerr << std:: endl;
}
void	Harl::complain(std::string level) {
	
	std::cout << std::endl;
	void	(Harl::*f[4])(void) = {&Harl::debug, &Harl::info, 
				&Harl::warning, &Harl::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level) {
			(this->*f[i])();
		}
	}
}

/*
Notes:
	1. Simple pointer to one member.
	void	(Harl::*f)( void );
	f[i] = &Harl::error;
	(this->*f)();
*/

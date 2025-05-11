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

}
void    Harl::info( void ) {

}
void    Harl::warning( void ) {

}
void    Harl::error( void ) {
	std::cerr << "This is unacceptable! I want to speak to the manager now.";
	std::cerr << std:: endl;
}
void	Harl::complain(std::string level) {

}

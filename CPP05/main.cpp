#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>

int	main(void) {

	Bureaucrat	Andrew(150, "Andrew");
	std::cout << Andrew ;
	// Bureaucrat Tomas(Andrew);
	// std::cout << Tomas;

	Bureaucrat	Patrick(1, "Patrick");
	std::cout << Patrick ;

	/* std::cout << "Basic upgrade" << std::endl;
	Andrew.upgrade();
	std::cout << Andrew ;

	std::cout << "Basic downgrade" << std::endl;
	Patrick.downgrade();
	std::cout << Patrick ; */

	/* std::cout << "Grade too low " << std::endl;
	Bureaucrat	John(160, "John");

	std::cout << "Grade too high " << std::endl;
	Bureaucrat	Emma(0, "Emma"); */

	std::cout << "Invalid downgrade" << std::endl;
	Andrew.downgrade();
	std::cout << Andrew ;




}
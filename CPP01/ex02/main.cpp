#include <iostream>
#include <string>

/* Your program must print:
• The memory address of the string variable.
• The memory address held by stringPTR.
• The memory address held by stringREF. */
/* And then:
• The value of the string variable.
• The value pointed to by stringPTR.
• The value pointed to by stringREF. */

int	main(void) {

	std::string original("HI THIS IS BRAIN");
	std::string *stringPTR = &original;
	std::string &stringREF = original;

	std::cout << "The memory address of the string variable:" << std::endl; 
	std::cout << &original << std::endl;
	std::cout << "The memory address held by stringPTR:" << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << "The memory address held by stringREF:" << std::endl; 
	std::cout << &stringREF << std::endl;

	std::cout << "The value of the string variable:" << std::endl; 
	std::cout << original << std::endl;
	std::cout << "The value pointed to by stringPTR:" << std::endl; 
	std::cout << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF:" << std::endl; 
	std::cout << stringREF << std::endl;

	return (0);
	
}
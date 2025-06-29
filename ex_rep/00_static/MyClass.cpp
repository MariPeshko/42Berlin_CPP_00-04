#include <iostream>
#include "MyClass.hpp"

int	MyClass::x = 42;

void	MyClass::SFunc() {

	std::cout << "Static function prints static value ";
	std::cout << MyClass::x << std::endl;
}



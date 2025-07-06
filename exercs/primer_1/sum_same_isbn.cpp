/* Exercise 1.21: Write a program that reads 
two Sales_item objects that have the
same ISBN and produces their sum. */

#include <iostream>
#include "Sales_item.h"

int	main( void ) {

	Sales_item	trans1, trans2;

	std::cin >> trans1 >> trans2;

	std::cout << trans1 + trans2 << std::endl;
	return (0);

}
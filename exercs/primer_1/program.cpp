/* Use it to write a program that reads 
a set of book sales transactions, writing
each transaction to the standard output. */

#include <iostream>
#include "Sales_item.h"

int	main( void ) {

	Sales_item	book;

	while (std::cin >> book) {
		
		std::cout << book << std::endl;
	};
	
	return (0);

}
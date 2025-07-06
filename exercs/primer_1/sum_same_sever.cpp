/* Write a program that reads several transactions 
for the same ISBN. Write the sum of all 
the transactions that were read. */

#include <iostream>
#include "Sales_item.h"

int	main( void ) {

	Sales_item	total;

	if (std::cin >> total) {
		Sales_item	trans;
		while(std::cin >> trans) {

			if (total.isbn() == trans.isbn())
				total += trans;
			else {
				std::cout << total << std::endl;
				std::cout << "Next book has different isbn" << std::endl;
				return 0;
			}
		}
		std::cout << total << std::endl;
	}
	else {
		std::cerr << "No data?" << std::endl;
		return -1;
	}
	return 0;

}
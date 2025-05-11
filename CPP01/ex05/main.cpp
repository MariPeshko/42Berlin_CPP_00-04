#include "Harl.hpp"
#include <iostream>

// Use pointer to member function 
// to determine which function to call
// Harl has to complain without using 
// a forest of if/else if/else.

int  main () {

    Harl harl;

	harl.complain("ERROR");
	harl.complain("WARNING");
    harl.complain("INFO");
	harl.complain("DEBUG");
	harl.complain("");
    
    return 0;
}
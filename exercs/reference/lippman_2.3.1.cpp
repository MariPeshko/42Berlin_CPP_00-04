#include <iostream>

// here implicit type conversion 
int main (void) {

    int i = 0, &r1 = i;
    double d = 0, &r2 = d;

    std::cout << r1 << std::endl;
    std::cout << r2 << std::endl;

    r2 = 3.14159;
    std::cout << r2 << std::endl;

    r2 = r1;
    std::cout << r2 << std::endl;

    // int &r3 = d; 
    // error: cannot bind reference of type 'int&'
    // to a valua of type 'double'

    i = r2; 
    std::cout << i << std::endl;

    r1 = d;
    std::cout << r1 << std::endl;

    return 0;

}
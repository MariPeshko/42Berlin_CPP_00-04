#include <iostream>
#include "Sample.hpp"


Sample::Sample( void ) : _foo( 0 ) {

    std::cout << "Default Constructor Called" << std::endl;
    return;
}

/// Function non-canonical
Sample::Sample(int const n) : _foo( n ) {

    std::cout << "Parametric Constuctor" << std::endl;
    return;
}

Sample::~Sample( void ) {

    std::cout << "Destructor Called" << std::endl;
    return;
}

// function geter
int Sample::getFoo( void ) const {

    return this->_foo;
}

Sample::Sample( Sample const & src ) {

    std::cout << "Copy Constructor Called" << std::endl;
    *this = src;

    return;
}

// Assignment operator called
Sample &	Sample::operator=( Sample const & rhs ) {
	
	std::cout << "Assignment operator called" << std::endl;
    if (this != &rhs) {
        this->_value = rhs.getFoo();
    }
    return *this;
}

// overloaded operator for stream redirection
std::ostream &      operator<<( std::ostream & o, Sample const & i ) {

    o << "The value of _foo is : " << i.getFoo();

    return o;
}

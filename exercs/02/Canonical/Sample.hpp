#ifndef MY_CANONICAL_CLASS
#define MY_CANONICAL_CLASS


#include <iostream>

class Sample {

	
public:

	// Constructor
    Sample( void );									// Canonical
	// Constructor parametric
	Sample(int const n);
	// Copy constructor;
	Sample( Sample const & src );					// Canonical
	// Copy assignment operator;
	// To update the current instance
	Sample &	operator=( Sample const & rhs );	// Canonical
	// Destructor
	~Sample( void );								// Canonical
	
	int	getFoo( void ) const;

private:

	int	_foo;

};

// an overloaded operator — specifically, 
// it’s an overloaded 'operator<<' for outputting an object 
// of type 'Sample' to a stream like 'std::cout'.

std::ostream &	operator<<( std::ostream & o, Sample const & i );

/*

 It's used so that you can do something like:
 	Sample s;
	std::cout << s;

*/

#endif // ****************************************** SAMPLE_H //

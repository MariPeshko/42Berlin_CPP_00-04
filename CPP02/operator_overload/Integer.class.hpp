// Simulates the behaviour of natural integer with a clas.

#ifndef INTEGER_CLASS_H
# define INTEGER_CLASS_H

# include <iostream>


class Integer
{

public:

    Integer(int const n);
    ~Integer( void );

	int getValue(void) const;

	// Two operator overloads
	// Assignment operator
	Integer &	operator=( Integer const & rhs );
	// Overloading the plus operator
	Integer		operator+( Integer const & rhs ) const;

private:

    int	_n;

};

std::ostream &	operator<<( std::ostream & o, Integer const & rhs );

#endif // ******************* INTEGER_CLASS_H //
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

	// Normally, assignment just copies values, but here, 
	// we’re overloading it — it’s a novelty here.
	// Two operator overloads
	// Overloading the minus operator
	Integer &	operator-( Integer const & rhs );
	// Overloading the plus operator
	Integer		operator+( Integer const & rhs ) const;

private:

    int	_n;

};

std::ostream &	operator<<( std::ostream & o, Integer const & rhs );

Integer::Integer(int const n) : _n( n ) {}

Integer::~Integer() {}

int getValue(void) const {
	return this->_n;
}

Integer operator-(const Integer& rhs) const {
        return Integer(value - rhs.value);
    }


#endif // ******************* INTEGER_CLASS_H //
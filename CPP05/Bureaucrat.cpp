#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ) { };

Bureaucrat::Bureaucrat( int grade ) :
	_grade(grade)	
 { 
	//if (grade > 150)
	// Bureaucrat::GradeTooHighException
	//if (grade < 1)
	//Bureaucrat::GradeTooLowException

	/* try
	{
	do some stuff with bureaucrats
	}
	catch (std::exception & e)
	{
	handle exception
	} */
 };


// Copy Constructor
Bureaucrat::Bureaucrat ( Bureaucrat const & src ) :
	_grade(src.getGrade())	{ }

// Assignment operator 
Bureaucrat &	Bureaucrat::operator=( Bureaucrat const &assign ) {
	
	if (this != &assign) {
		this->_grade = assign._grade;
	}
    return *this;
}

Bureaucrat::~Bureaucrat() { };

unsigned Bureaucrat::getGrade() {
	return this->_grade;
}

const std::string& Bureaucrat::getName() {
	return this->_name;
}

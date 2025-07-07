#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>

Bureaucrat::Bureaucrat( void ) :
	_grade(75), _name("Default")
{ };

Bureaucrat::Bureaucrat( int grade, std::string name ) :
	_grade(grade), _name(name)	
 { 
	if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();

 };

// Copy Constructor
Bureaucrat::Bureaucrat ( Bureaucrat const & src ) :
	_grade(src.getGrade()), _name(src.getName())	{ }

// Assignment operator 
Bureaucrat &	Bureaucrat::operator=( Bureaucrat const &assign ) {
	
	if (this != &assign) {
		this->_grade = assign._grade;
	}
    return *this;
}

Bureaucrat::~Bureaucrat() { };

unsigned int Bureaucrat::getGrade() const {
	return this->_grade;
}

const std::string& Bureaucrat::getName() const {
	return this->_name;
}

std::ostream &	operator<<(std::ostream &o, Bureaucrat const &i) {

    o << i.getName() << ", bureaucrat grade " << i.getGrade();
	o << "." << std::endl;
    return o;

}

void	Bureaucrat::upgrade() {
	if(this->_grade > 1)
		this->_grade--;
	else
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::downgrade() {
	if(this->_grade < 149)
		this->_grade++;
	else
		throw Bureaucrat::GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "Exception. Grade too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw () {
	return "Exception. Grade too low!";
}
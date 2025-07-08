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
		this->Except(this->_grade - 1);
		this->_grade--;
}

void	Bureaucrat::downgrade() {
		this->Except(this->_grade + 1);
		this->_grade++;
}

void	Bureaucrat::Except( const int newgrade ) {
	if(newgrade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	if(newgrade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "_ _ _Exception_ _ _ Grade too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw () {
	return "_ _ _Exception_ _ _ Grade too low!";
}

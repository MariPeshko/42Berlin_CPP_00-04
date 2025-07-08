/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 19:14:42 by mpeshko           #+#    #+#             */
/*   Updated: 2025/07/08 19:52:18 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>
#include <exception>
#include <string>

Form::Form( void ) :
	_name("DefaultForm"), _signed(false), _formGrade(1), _formGradeExe(10)
{ };

Form::Form( std::string name, int grade, int exgrade ) :
	_name(name), _signed(false), _formGrade(grade), _formGradeExe(10)
{ 
	if (this->_formGrade > 150 || this->_formGradeExe > 150)
	{
		std::cerr << "On attempt to construct a form object with a grade ";
		std::cerr << grade << "\n";
		throw Form::GradeTooLowException();
	}
	else if (this->_formGrade < 1 || this->_formGradeExe < 1) {
		std::cerr << "On attempt to construct a form object with a grade ";
		std::cerr << grade << "\n";
		throw Form::GradeTooHighException();
	}
};

// Copy Constructor
Form::Form ( Form const & src ) :
	_formGrade(src.getGrade()), _name(src.getName()), 
	_formGradeExe(src.getExGrade()), _signed(src.getBoolSigned())	{
		
		std::cout << "Copy Constructor of Form class type" << std::endl;
}

// Assignment operator 
Form &	Form::operator=( Form const &assign ) {
	
	std::cout << "Assignment operator of Form class type" << std::endl;
	if (this != &assign) {
		this->_signed = assign.getBoolSigned();
	}
    return *this;
}

Form::~Form() {
	std::cout << "Form class type destructor" << std::endl;
};

unsigned int Form::getGrade() const {
	return this->_formGrade;
}

unsigned int Form::getExGrade() const {
	return this->_formGradeExe;
}

const std::string& Form::getName() const {
	return this->_name;
}

const std::string Form::getSigned() const {
	if (this->_signed == false)
		return "False.";
	return "True.";
}

bool	Form::getBoolSigned() const {
	return this->_signed;
}


std::ostream &	operator<<(std::ostream &o, Form const &i) {

    o << "Form's name " << i.getName() << "\n";
	o << "Grade required to sign " << i.getGrade();
    o << ", grade to execute " << i.getExGrade() << ".\n";
	o << "Signed: " << i.getSigned() << std::endl;
    return o;

}

/* void	Form::upgrade() {
		if (this->_formGrade - 1 < 1)
			throw Form::GradeTooHighException();
		this->_formGrade--;
}

void	Form::downgrade() {
		if (this->_formGrade + 1 > 150)
			throw Form::GradeTooLowException();
		this->_formGrade++;

} */

const char* Form::GradeTooHighException::what() const throw() {
	return "_ _ _Exception_ _ _ Grade of this form too high!";
}

const char* Form::GradeTooLowException::what() const throw () {
	return "_ _ _Exception_ _ _ Grade of this form too low!";
}

/**
 * Notes
 * 
 * Modern C++ (C++11 and later)
 * Instead of throw(), you should use noexcept:
 * 
 * 'const char* what() const noexcept;'
 * 
 */

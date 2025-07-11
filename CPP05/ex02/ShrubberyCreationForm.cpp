/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 16:17:13 by mpeshko           #+#    #+#             */
/*   Updated: 2025/07/11 18:34:05 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "AForm.hpp"

// Default
ShrubberyCreationForm::ShrubberyCreationForm( void ) : 
	AForm("ShrubberyCreationForm", 145, 137),
	_target("DefaultTarget")
{ 
	std::cout << "Default constructor of ShrubberyCreationForm class type\n";
	std::cout << this->_target << " is created" << std::endl;
}

// Parametrized
ShrubberyCreationForm::ShrubberyCreationForm( std::string target ) :
	AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "Constructor of ShrubberyCreationForm class type\n";
	std::cout << this->_target << " is instantiated" << std::endl;
}

// Copy Constructor
ShrubberyCreationForm::ShrubberyCreationForm ( ShrubberyCreationForm const & src )
	: AForm(src), _target(src._target)
{		
	std::cout << "Copy Constructor of ShrubberyCreationForm class type" << std::endl;
	std::cout << this->_target << " is instantiated as a copy of " << src.getTarget();
	std::cout << std::endl;
}

// Assignment operator 
ShrubberyCreationForm &	ShrubberyCreationForm::operator=( ShrubberyCreationForm const &assign ) {
	
	std::cout << "Assignment operator of ShrubberyCreationForm class type" << std::endl;
	if (this != &assign) {
		AForm::operator=(assign); // Call base class assignment
		this->_target = assign.getTarget();
	}
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "Destructor of class type ShrubberyCreationForm" << std::endl;
};

void			ShrubberyCreationForm::action() const {

	std::cout << "Shrubbery creates a file and draws a tree\n";
	
}

const std::string&	ShrubberyCreationForm::getTarget() const {
	return this->_target;
}

std::ostream &operator<<(std::ostream &o, const ShrubberyCreationForm &form) {
	
	// Reuse base class operator<<
	o << static_cast<const AForm &>(form);
	o << "ShrubberyCreationForm's Target: " << form.getTarget();

	return o;
}


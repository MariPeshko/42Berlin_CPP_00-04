/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 22:20:55 by mpeshko           #+#    #+#             */
/*   Updated: 2025/07/10 22:21:46 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat;

/*
The base class Form must be an abstract class and should therefore
be renamed AForm.
*/

/**
 * 
 * 
 * 
 * 
 * In C++, a class is only considered abstract if it contains at least 
 * one pure virtual function.
*/

class	AForm {
	
	public:
		AForm( void );
		AForm( std::string name, int grade, int exgrade );
		AForm (AForm const & src);
		AForm &	operator=( AForm const &assign );
		~AForm();

		unsigned int		getGrade() const;
		unsigned int		getExGrade() const;
		const std::string&	getName() const;
		const std::string	getSigned() const;
		bool				getBoolSigned() const;

		void				beSigned(Bureaucrat &b);

		// override the what() method
		class GradeTooHighException : public std::exception { 
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};

	private:
		const std::string	_name;
		bool				_signed;
		const int			_formGrade;
		const int			_formGradeExe;

};

std::ostream &	operator<<(std::ostream &o, AForm const &i);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/11 16:17:16 by mpeshko           #+#    #+#             */
/*   Updated: 2025/07/15 13:39:13 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat;

/**
 * In C++, a class is only considered abstract if it contains at least 
 * one pure virtual function.
*/

class	AForm {
	
	public:
		AForm( void );
		AForm( std::string name, int grade, int exgrade );
		AForm (AForm const & src);
		AForm &	operator=( AForm const &assign );
		virtual ~AForm();
		// A base class generally should define a virtual destructor 

		unsigned int		getGrade() const;
		unsigned int		getExGrade() const;
		const std::string&	getName() const;
		const std::string	getSigned() const;
		bool				getBoolSigned() const;

		void				beSigned(Bureaucrat &b);
		void				execute(Bureaucrat const & executor) const;
		
		// pure virtual functions
		virtual void				action() const = 0;
		virtual const std::string &	getTarget() const = 0;

		class GradeTooHighException : public std::exception { 
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};
		class NotSignedException : public std::exception {
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

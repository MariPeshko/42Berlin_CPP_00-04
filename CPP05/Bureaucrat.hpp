/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 19:40:36 by mpeshko           #+#    #+#             */
/*   Updated: 2025/07/08 16:56:33 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

class	Bureaucrat {
	
	public:
		Bureaucrat( void );
		Bureaucrat(int grade, std::string name);
		Bureaucrat (Bureaucrat const & src);
		Bureaucrat &	operator=( Bureaucrat const &assign );
		~Bureaucrat();

		unsigned int		getGrade() const;
		const std::string&	getName() const;
		void				upgrade();
		void				downgrade();
		void				Except(const int newgrade);

		// override the what() method
		class GradeTooHighException : public std::exception { 
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};

		// You must also implement two member functions 
		// to increment or decrement the bureaucrat’s grade.
		// If the grade goes out of range, both functions 
		// must throw the same exceptions as the constructor.
		
		// Remember, since grade 1 is the highest and 150 the lowest,
		// incrementing a grade 3 should result in 
		// a grade 2 for the bureaucrat.

	private:
		const std::string	_name;
		int					_grade;

};

std::ostream &	operator<<(std::ostream &o, Bureaucrat const &i);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 19:40:36 by mpeshko           #+#    #+#             */
/*   Updated: 2025/07/06 20:20:17 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

class	Bureaucrat {
	
	public:
		// Constructor
		Bureaucrat();
		Bureaucrat(int grade);
		// Copy Constructor
		Bureaucrat (Bureaucrat const & src);
		// Copy Assignment operator
		Bureaucrat &	operator=( Bureaucrat const &assign );
		// Destractor
		~Bureaucrat();

		getGrade();
		const getName();
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

}

/*
You must implement an overload of the insertion («) operator 
to print output in the following format (without the angle brackets):
<name>, bureaucrat grade <grade>.

std::ostream &	operator<<(std::ostream &o, Fixed const &i);

*/

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 19:14:39 by mpeshko           #+#    #+#             */
/*   Updated: 2025/07/11 18:40:57 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <exception>

int	main(void) {
	
	{
		ShrubberyCreationForm	home("Home");
		ShrubberyCreationForm	neighbour(home);
		std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;
		ShrubberyCreationForm	garden("Garden");
		garden = home;
		std::cout << garden << std::endl;
		Bureaucrat	gardener(100, "Gardener");
		try {
			gardener.signForm(garden);
			garden.execute(gardener);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;
	return 0;

}
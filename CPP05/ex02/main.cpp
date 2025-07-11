/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 19:14:39 by mpeshko           #+#    #+#             */
/*   Updated: 2025/07/11 19:58:58 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <exception>

int	main(void) {
	/* {
		std::cout << "_ _ Valid execute() - Form class attribute_ _" << std::endl;
		ShrubberyCreationForm	garden("Garden");
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
	{
		std::cout << "_ _ Not signed _ _" << std::endl;
		try {
			ShrubberyCreationForm	garden("Garden");
			Bureaucrat	gardener(146, "Gardener");
			//gardener.signForm(garden);
			garden.execute(gardener);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;
	{
		std::cout << "_ _ Grade too low to sign _ _" << std::endl;
		try {
			ShrubberyCreationForm	garden("Garden");
			Bureaucrat	gardener(146, "Gardener");
			gardener.signForm(garden);
			garden.execute(gardener);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;
	{
		std::cout << "_ _ Grade too low to execute _ _" << std::endl;
		try {
			ShrubberyCreationForm	garden("Garden");
			Bureaucrat	gardener(138, "Gardener");
			gardener.signForm(garden);
			garden.execute(gardener);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	} */
	
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;
	
	{
		std::cout << "_ _ Valid executeForm - Buraucrat class attribute_ _" << std::endl;
		ShrubberyCreationForm	garden("Yard");
		//std::cout << garden << std::endl;
		Bureaucrat	gardener(1, "Gardener");
		try {
			gardener.signForm(garden);
			gardener.executeForm(garden);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;
	{
		std::cout << "_ _ Inalid executeForm - Buraucrat class attribute_ _" << std::endl;
		ShrubberyCreationForm	garden("Yard");
		Bureaucrat	gardener(1, "Gardener");
		try {
			//gardener.signForm(garden);
			gardener.executeForm(garden);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;
	{
		std::cout << "_ _ Inalid executeForm - Buraucrat class attribute_ _" << std::endl;
		ShrubberyCreationForm	garden("Yard");
		Bureaucrat	gardener(138, "Gardener");
		try {
			gardener.signForm(garden);
			gardener.executeForm(garden);
		} catch (std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	return 0;

}
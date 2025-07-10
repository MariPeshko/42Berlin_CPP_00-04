/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/08 19:14:39 by mpeshko           #+#    #+#             */
/*   Updated: 2025/07/10 22:23:32 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include <iostream>
#include <exception>

static void	test_basic() {
	{
	std::cout << "OCF tests" << std::endl;
	AForm Doc1("Doc1", 2, 20);
	std::cout << Doc1 << std::endl;

	AForm Doc2(Doc1);
	std::cout << Doc2 << std::endl;

	AForm Doc3;
	std::cout << Doc3 << std::endl;

	Doc3 = Doc1;
	std::cout << Doc3 << std::endl;
	}
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;
	try {
		AForm	TooLowGrade("TooLowGrade", 152, 15);	
	} catch ( const std::exception &e) {
		std::cerr << e.what() << std:: endl;
	}
	try {
		AForm	TooLowExGrade("TooLowExGrade", 15, 151);	
	} catch ( const std::exception &e) {
		std::cerr << e.what() << std:: endl;
	}  
	try {
		AForm	TooHighGrade("TooHighGrade", -1, 15);	
	} catch ( const std::exception &e) {
		std::cerr << e.what() << std:: endl;
	}
	try {
		AForm	TooHighExGrade("TooHighExGrade", 15, -1);	
	} catch ( const std::exception &e) {
		std::cerr << e.what() << std:: endl;
	}
}

static void test_Form_beSigned() {
	try {
		Bureaucrat	Bob(1, "Bob");
		AForm		Anmeldung("Anmeldung", 1, 10);
		std::cout << Anmeldung << std::endl;
		Anmeldung.beSigned(Bob);
		std::cout << Anmeldung << std::endl;	
	} catch ( std::exception &e ) {
		std::cerr << e.what() << std:: endl;
	}
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;
	try {
		Bureaucrat	Nicolaus(15, "Nicolaus");
		AForm		Meld("Meldebescheinigung", 14, 10);
		std::cout << Meld << std::endl;
		Meld.beSigned(Nicolaus);
		std::cout << Meld << std::endl;
	} catch ( std::exception &e ) {
		std::cerr << e.what() << std:: endl;
	}
}

void	test_Bur_signForm() {
	{
		Bureaucrat	Bob(1, "Bob");
		AForm		Anmeldung("Anmeldung", 1, 10);
		Bob.signForm(Anmeldung);
	}
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;
	{
		try {
			Bureaucrat	Bob(2, "Bob");
			AForm		Anmeldung("Anmeldung", 1, 10);
			Bob.signForm(Anmeldung);
		} catch (std::exception &e) {
			std::cerr << e.what() << std:: endl;
		}
		
	}
}


int	main(void) {
	
	//test_basic();
	//test_Form_beSigned();
	test_Bur_signForm();
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;
	return 0;

}
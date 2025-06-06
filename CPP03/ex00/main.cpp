/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 18:05:58 by mpeshko           #+#    #+#             */
/*   Updated: 2025/06/06 16:53:27 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int	main ( void ) {

	int i = 1;
	ClapTrap a("Vadym");

	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;
	std::cout << i++ << " attack:\n";
	a.attack("itself");
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;
	std::cout << i++ << " attack:\n";
	a.attack("itself");
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;
	std::cout << i++ << " attack:\n";
	a.attack("itself");
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;
	std::cout << i++ << " attack:\n";
	a.attack("itself");
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;
	std::cout << i++ << " attack:\n";
	a.attack("itself");
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;
	
	std::cout << "ClapTrap " << a.getName() << " is trying to REPAIR" << std::endl;
	a.beRepaired(1);
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;
	
	std::cout << i++ << " attack:\n";
	a.attack("itself");
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;
	std::cout << i++ << " attack:\n";
	a.attack("itself");
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;
	std::cout << i++ << " attack:\n";
	a.attack("itself");
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;
	std::cout << i++ << " attack:\n";
	a.attack("itself");
//10 energy is 0 

	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;
	std::cout << i++ << " attack:\n";
	a.attack("itself");
//11 energy is 0 
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;
	std::cout << i++ << " attack:\n";
	a.attack("itself");

	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;
	std::cout << "ClapTrap " << a.getName() << " is trying to REPAIR" << std::endl;
	a.beRepaired(1);

	return 0;
}

/*
Since these exercises serve as an introduction, 
the ClapTrap instances should not interact directly 
with one another, and the parameters will not refer 
to another instance of ClapTrap.
*/


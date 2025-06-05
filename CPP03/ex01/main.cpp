/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 18:06:33 by mpeshko           #+#    #+#             */
/*   Updated: 2025/06/05 22:31:11 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main ( void ) {

	ClapTrap clap_a("Vadym");
	std::cout << "Name of Vadym obj is:  " << clap_a << std::endl;
	std::cout << "Default Damage         " << clap_a.getDamage() << std::endl;
	std::cout << "Default Energy         " << clap_a.getEnergyPoints() << std::endl;
	std::cout << "Default Hit Points     " << clap_a.getHitPoints() << std::endl;
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;

	ScavTrap scav_a("Maryna");
	std::cout << "Name of Maryna obj is: " << scav_a << std::endl;
	std::cout << "Default Damage         " << scav_a.getDamage() << std::endl;
	std::cout << "Default Energy         " << scav_a.getEnergyPoints() << std::endl;
	std::cout << "Default Hit Points     " << scav_a.getHitPoints() << std::endl;

	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;
	clap_a.attack("Maryna");
	scav_a.takeDamage(5);
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;

	scav_a.attack("Vadym");
	clap_a.takeDamage(3);
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;
	scav_a.guardGate();
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;
	scav_a.beRepaired(2);
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;
	clap_a.attack("scavTrap");
	clap_a.attack("scavTrap");	
	clap_a.attack("scavTrap");	
	clap_a.attack("scavTrap");	
	clap_a.attack("scavTrap");	
	clap_a.attack("scavTrap");	
	clap_a.attack("scavTrap");	
	clap_a.attack("scavTrap");	
	clap_a.attack("scavTrap");

	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;
	clap_a.attack("scavTrap"); 	
	

	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;
	return 0;
}

/*
Since these exercises serve as an introduction, 
the ClapTrap instances should not interact directly 
with one another, and the parameters will not refer 
to another instance of ClapTrap.
*/
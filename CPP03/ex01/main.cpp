/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 18:06:33 by mpeshko           #+#    #+#             */
/*   Updated: 2025/06/05 19:30:41 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main ( void ) {

	ClapTrap clap_a("Vadym");
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;

	ScavTrap scav_a("Maryna");
	std::cout << "Name of Maryna obj is: " << scav_a << std::endl;

	return 0;
}

/*
Since these exercises serve as an introduction, 
the ClapTrap instances should not interact directly 
with one another, and the parameters will not refer 
to another instance of ClapTrap.
*/
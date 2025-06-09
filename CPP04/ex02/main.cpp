/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 21:28:50 by mpeshko           #+#    #+#             */
/*   Updated: 2025/06/09 13:10:49 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

static void	test_0(void); // from ex00

int	main ( void ) {

	// the default AAnimal class should not be instantiable
	
	/* const AAnimal* ab_animal = new AAnimal();
	delete ab_animal;
	
	AAnimal bla;
	*/

	const AAnimal* Karma = new Dog();
	const AAnimal* Tropy = new Cat();
	
	delete Karma;
	delete Tropy;

	test_0();
	
	return 0;
	
}

static void	test_0(void) {

	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;
	std::cout << "_ _ _ _ _ _ _ _ _ _ T E S T 0_0 _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;
	//const AAnimal* meta = new AAnimal(); // not instantiable
	const AAnimal* j = new Dog();
	const AAnimal* i = new Cat();
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;

	std::cout << "Dog says : \"";
	j->makeSound();
	std::cout << "\"" << std::endl;
	std::cout << "Cat says : \"";
	i->makeSound();
	std::cout << "\"" << std::endl;
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;

	// delete meta; // not instantiable
	delete j;
	delete i;
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;

}


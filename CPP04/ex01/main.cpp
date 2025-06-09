/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 21:28:50 by mpeshko           #+#    #+#             */
/*   Updated: 2025/06/09 12:11:57 by mpeshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int	main ( void ) {

	{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "j type: " << j->getType() << std::endl;
	std::cout << "i type: " << i->getType() << std::endl;
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n" << std::endl;
	std::cout << "Destructors:" << std::endl;
	delete j; //should not create a leak
	delete i;
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n" << std::endl;
	}
	
	std::cout << "_ _ dog test that your copies are deep copies!_ _" << std::endl;
	{
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n" << std::endl;
	Dog *dog1 = new Dog();
	dog1->setIdea("I am Jack Russel");
	std::cout << dog1->getIdea() << std::endl;
	Dog dog2 = *dog1;
	delete dog1;
	std::cout << dog2.getIdea() << std::endl;
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n" << std::endl;
	std::cout << "Destructors:" << std::endl;
	}
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n" << std:: endl;
	std::cout << "_ _ cat test that your copies are deep copies!_ _" << std::endl;
	{
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n" << std::endl;
	Cat *cat1 = new Cat();
	cat1->setIdea("I am Maine Coon");
	std::cout << cat1->getIdea() << std::endl;
	Cat cat2 = *cat1;
	delete cat1;
	std::cout << cat2.getIdea() << std::endl;
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n" << std::endl;
	std::cout << "Destructors:\n" << std::endl;
	}
	return 0;
}


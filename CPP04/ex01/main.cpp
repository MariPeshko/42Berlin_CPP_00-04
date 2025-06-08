/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeshko <mpeshko@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 21:28:50 by mpeshko           #+#    #+#             */
/*   Updated: 2025/06/08 15:29:19 by mpeshko          ###   ########.fr       */
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

static void	test_0(void);
static void	test_1(void);

int	main ( void ) {

	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j; //should not create a leak
	delete i;
	
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;
	Brain Brain_1;

	std::cout << "Number of ideas " <<  Brain_1.size() << std::endl;
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;
	Brain Brain_2;
	Brain_2 = Brain_1;
	std::cout << "Number of ideas " <<  Brain_2.size() << std::endl;
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;


	/// test:
	/*
	A copy of a Dog or a Cat mustn’t be shallow. 
	Thus, you have to test that your copies
	are deep copies!
	*/

/* 	test_0();
	test_1(); */

	return 0;
	
}

static void	test_0(void) {

	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;
	std::cout << "_ _ _ _ _ _ _ _ _ _ T E S T 0_0 _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;

	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;

	std::cout << "Default Animal says : \"";
	meta->makeSound();
	std::cout << "\"" << std::endl;
	std::cout << "Dog says : \"";
	j->makeSound();
	std::cout << "\"" << std::endl;
	std::cout << "Cat says : \"";
	i->makeSound(); //will output the cat sound!
	std::cout << "\"" << std::endl;
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;

	delete meta;
	delete j;
	delete i;
	
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;

}

static void	test_1(void) {

	std::cout << "_ _ _ _ _ _ _ _ _ _ T E S T 0_1 _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;
	const WrongAnimal* kuku = new WrongAnimal();
	std::cout << kuku->getType() << " " << std::endl;
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;
	std::cout << "WrongAnimal says : \"";
	kuku->makeSound();
	std::cout << "\"" << std::endl;
	
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;
	
		const WrongAnimal* lulu = new WrongCat();
	std::cout << lulu->getType() << " " << std::endl;
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;
	std::cout << "WrongCat says : \"";
	lulu->makeSound();
	std::cout << "\"" << std::endl;
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;

	delete kuku;
	delete lulu;
	std::cout << "_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << std:: endl << std:: endl;

}

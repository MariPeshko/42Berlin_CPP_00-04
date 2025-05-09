#include <iostream>
#include <cstdio> // for CTRL + D cin
#include <string>
#include <cctype>
#include <iomanip> // For setw
#include <limits> // For cin.ignore(std::numeric_limits<std::streamsize>::max()
#include "PhoneBook.hpp"

/* Conventionally, header file names are derived from the name 
of a class defined in that header. */

// constractor and initialization list
PhoneBook::PhoneBook() : _how_many_cont(0) {}

void PhoneBook::Search_Contact()
{
	if (_how_many_cont == 0)
	{
		std::cout << "There are no contacts in the phone book." << std::endl;
		std::cout << "Type ADD to save the first contact!" << std::endl;
		return ;
	}
	std::cout << "|" << std::setw(10) << "Index"
			  << "|" << std::setw(10) << "First Name"
			  << "|" << std::setw(10) << "Last Name"
			  << "|" << std::setw(10) << "Nickname"
			  << "|" << std::endl;
	std::cout << std::string(44, '-') << std::endl;
	for (int i = 0; i < _how_many_cont; i++)
		_contacts[i].Display_Cont(i + 1);
	/*After reading the number, the newline character \n 
	(from when the user pressed Enter) is still sitting 
	in the input buffer. If you then try to std::getline() 
	to read a string, it immediately sees the leftover 
	\n and thinks it's the end of input — so it returns an empty string.*/
	int index;
	while (true)
	{
		std::cout << "Please enter the index of the contact: ";
		if (std::cin >> index && index >= 1 && index <= _how_many_cont)
		{
			// std::cin.ignore(...) to flush out any unwanted leftover characters
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			_contacts[index - 1].Display_All_Cont();
			break;
		}
		else
		{
			std::cout << "Invalid input. Enter a number from 1 to " << _how_many_cont << ".\n";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}
}

int PhoneBook::Prompt_For_Add(std::string& data, std::string prompt)
{
	std::cout << prompt << std::endl;
	std::getline(std::cin, data);
	while (true)
	{
		if (std::cin.eof()) {
			std::cin.clear();
			clearerr(stdin);
			std::cout << "EOF reached. Reset all condition values ";
			std::cout << "in the stream cin to valid state." << std::endl;
			std::cout << "Field must be filled." << std::endl;
			std::cout << std::endl;
			std::cout << prompt << std::endl;
			std::getline(std::cin, data);
		}
		else if (data.empty()) {
			std::cout << "Field must be filled. ";
			std::cout << prompt << std::endl;
			std::getline(std::cin, data);
		}
		else if (prompt == "Enter the phone number: ") {
			bool valid = true;
			for (size_t i = 0; data[i] != '\0'; i++) // i < data.size();
			{
				if (!isdigit(data[i]))
				{
					valid = false;
					break ;
				}
			}
			if (!valid) {
				std::cout << "Phone number must contain digits only.\n" << prompt << std::endl;
				std::getline(std::cin, data);
			}
			else {
				break; // valid phone number, exit loop
			}
		}
		else {
			break; // prompt is not for phone number, and input is valid
		}
	}
	if (data == "EXIT" or data == "exit")
		return 1;
	return 0;
}

int PhoneBook::Add_Contact()
{
	static int i = 0;

	std::string f_name, l_name, n_name, ph_number, secret;
	if (i == 3)
	{
		std::cout << "Reminder:" << std::endl;
		std::cout << "The user tries to add a 9th contact, ";
		std::cout << "it replaces the oldest one by the new one." << std::endl;
		i = 0;
	}
	i++;
	if (_how_many_cont == 3)
		std::cout << "Attention! You will replace " << i << " contact" << std::endl;

	if (Prompt_For_Add(f_name, "Enter first name: ") == 1)
		return 1;
	if (Prompt_For_Add(l_name, "Enter last name: ") == 1)
		return 1;
	if (Prompt_For_Add(n_name, "Enter nickname: ") == 1)
		return 1;
	if (Prompt_For_Add(ph_number, "Enter the phone number: ") == 1)
		return 1;
	if (Prompt_For_Add(secret, "Enter the darkest secret: ") == 1)
		return 1;
	if (_how_many_cont != 3)
		_how_many_cont++;
	_contacts[(i - 1) % 3].Set_Contact(f_name, l_name, n_name, ph_number, secret);
	return 0;
}

PhoneBook::~PhoneBook( void ) {
	return;
}

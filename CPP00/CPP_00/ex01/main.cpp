#include <iostream>
#include <cstdio> // for CTRL + D cin
#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main()
{
	PhoneBook	Book_instance;
	std::string	command = "";

	int	i = 0;
	
	while (1) {
		/* if (i == 7)
			i = 0; */

        std::cout << "Please enter the command (ADD, SEARCH or EXIT):" << std::endl;
        
        std::getline(std::cin, command);
		while (std::cin.eof()) {
			std::cin.clear();
			clearerr(stdin);
			std::getline(std::cin, command);
		}
        while (command != "ADD" && command != "add" && command != "SEARCH" 
			&& command != "search" && command != "EXIT" && command != "exit") {
			std::cout << "Enter a valid command (ADD, SEARCH, EXIT): ";

			std::getline(std::cin, command);
            while (std::cin.eof()) {
                std::cin.clear();
                clearerr(stdin);
                std::getline(std::cin, command);
            }
		}
		if (command == "ADD" or command == "add") {			
			if (Book_instance.Add_Contact() == 1) {
				std::cout << "Exit... the contacts are lost forever!" << std::endl;
				return 0;
			}
			i++;
        } else if (command == "SEARCH" or command == "search") {            
			Book_instance.Search_Contact();
        } else if (command == "EXIT" or command == "exit") {
			std::cout << "Exit... the contacts are lost forever!" << std::endl;
            break;
        }
    }
    return 0;
}

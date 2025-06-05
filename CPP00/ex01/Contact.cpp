#include <iostream>
#include <string>
#include <iomanip> // For setw
#include "Contact.hpp"

Contact::Contact() {}

// Each column must be 10 characters wide. A pipe character (’|’)
// separates them. The text must be right-aligned.
// If the text is longer than the column, it must be truncated 
// and the last displayable character must be
// replaced by a dot (’.’).
void Contact::Print_Column(const std::string& str)
{
    if (str.length() > 10)
        std::cout << "|" << std::setw(10) << str.substr(0, 9) + ".";
    else
        std::cout << "|" << std::setw(10) << str;
}

void Contact::Display_Full_Cont() 
{
	std::cout << "First Name: " << _first_name << std::endl;
	std::cout << "Last Name: " << _last_name << std::endl;
	std::cout << "Nickname: " << _nickname << std::endl;
	std::cout << "Phone Number: " << _phone_number << std::endl;
	std::cout << "Darkest Secret: " << _dark_secret << std::endl;
}

void Contact::Display_Cont(int index)
{
	std::cout << "|" << std::setw(10) << std::right << index;
	Print_Column(_first_name);
	Print_Column(_last_name);
	Print_Column(_nickname);
	std::cout << "|" << std::endl;
}

void Contact::Set_Contact(const std::string &f_name, const std::string &l_name,
					const std::string &n_name, const std::string &ph_number,
					const std::string &secret)
{
	_first_name = f_name;
	_last_name = l_name;
	_nickname = n_name;
	_phone_number = ph_number;
	_dark_secret = secret;
}

Contact::~Contact( void ) {}

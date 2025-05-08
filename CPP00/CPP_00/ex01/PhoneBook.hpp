#ifndef PHONEBOOK_H
// we're here only if SALESITEM_H has not yet been defined 
# define PHONEBOOK_H

// anything that will always be used inside a class is private
// anything that can be used outside a class is public

#include "Contact.hpp"

class PhoneBook
{

public:
	PhoneBook( void );
	// Copy costructor (const Contact &c) // & - reference
	~PhoneBook( void );
	// Copy assignment operator
	int Add_Contact();
	void Search_Contact();

private:
	int Prompt_For_Add(std::string& data, std::string prompt);
	// member function
	// member function
	Contact	_contacts[8];
	int		_how_many_cont;
	static int IndexContact;
    // Please note that dynamic allocation is forbidden.
};

#endif

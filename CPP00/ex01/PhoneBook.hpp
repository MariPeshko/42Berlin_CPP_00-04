/* Conventionally, header file names are derived from the name 
of a class defined in that header. */

#ifndef PHONEBOOK_H
// include guard
// we're here only if PHONEBOOK_H has not yet been defined 
# define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook
{

public:
	PhoneBook( void );
	~PhoneBook( void );
	int		Add_Contact();
	void	Search_Contact();

private:
	// a member function (a method)
	int			Prompt_For_Add(std::string& data, std::string prompt);
	// an attribute
	Contact		_contacts[8];
	int			_how_many_cont;
	static int	IndexContact;

};

#endif

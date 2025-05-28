/*

 Task – Build a Small Class

Write a class Book with:

- a private member std::string title

- two constructors:

    one that takes no parameters and sets title = "Untitled"

    one that takes a const std::string &t and sets title = t

- a getter getTitle() that returns 
  const std::string & and is marked const

*/

#include <string>

class Book {
	
	public:
		Book( void );
		Book( const std::string &t );
		~Book( void );
		const std::string& getTitle() const;

    private:
		std::string title;

};

// Constructor
Book::Book( void ) : title("Untitled") {}

// The Constructor overloading
Book::Book( const std::string &t ) : title(t) {}

const std::string& Book::getTitle() const {

	return this->title;

}

// Destructor
Book::~Book( void ) {}
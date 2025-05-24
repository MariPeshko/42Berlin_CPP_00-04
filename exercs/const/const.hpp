#ifndef BOOK_HPP
#define BOOK_HPP

#include <iostream>
#include <string>

class Book {
public:
    // Constructor to initialize title
    Book(const std::string& t);

    // !!!!!!!!!!!!!!!!!!!!!!! const
    // Const member function: promises not to modify the object
    std::string getTitle() const;

private:
    std::string title;
};

#endif

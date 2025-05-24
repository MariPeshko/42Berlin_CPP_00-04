#include "const.hpp"

// Constructor definition using scope operator ::
Book::Book(const std::string& t) : title(t) {}

// !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
// const
// You must use const here if you want to call 
// this function on a const Book object
std::string Book::getTitle() const {
        return title;
    }
    
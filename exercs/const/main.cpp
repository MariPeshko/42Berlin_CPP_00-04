#include <iostream>
#include "const.hpp"

int main() {
    const Book b("The Little Prince");  // Const object

    // Can call getTitle() because it's a const member function
    std::cout << "Book title: " << b.getTitle() << std::endl;

    return 0;
}
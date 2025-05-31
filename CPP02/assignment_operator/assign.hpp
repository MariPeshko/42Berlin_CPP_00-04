// Simulates the behaviour of natural integer with a clas.

#ifndef INTEGER_CLASS_H
# define INTEGER_CLASS_H

#include <iostream>

class Integer {

    
public:
    // Constructor
    Integer(int v = 0) : value(v) {}

    // Getter
    int getValue() const {
        return value;
    }

    // (Overloaded) Assignment operator (default behavior is fine, but 
    // we can define it explicitly)
    // Overloading the assignment operator
    Integer& operator=(const Integer& rhs) {
        std::cout << "Assignment operator called\n";
        if (this != &rhs) {
            value = rhs.value;
        }
        return *this;
    }

private:
    int value;

};

int main() {

    Integer a(42);
    Integer b;

    std::cout << "Before assignment: b = " << b.getValue() << "\n";
    b = a;  // Normal assignment – copies the value
    std::cout << "After assignment:  b = " << b.getValue() << "\n";

    return 0;
}





#endif // ******************* INTEGER_CLASS_H //
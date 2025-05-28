#include <iostream>
#include "static_member.hpp"

// static Member Attribute and Function

// Here we don't instantiate an object.
// That’s one of the key features of static member attributes 
// and member functions — they belong to the class itself, 
// not to any particular instance.

/* static int staticValue; 
    Only one copy exists, shared by all objects 
    (or used without any object).
*/

// Define the static member outside the class
int MyClass::staticValue = 42;

int main() {
    // call without a name of the object
    // caus ewe don't need to instanciate an object
    MyClass::staticFunction(); // Call without object
    MyClass::staticValue = 99;
    MyClass::staticFunction();
    return 0;
}

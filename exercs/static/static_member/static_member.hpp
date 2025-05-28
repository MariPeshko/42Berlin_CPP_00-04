#include <iostream>

#ifndef STATIC_MEMBER_H
#define STATIC_MEMBER_H

class MyClass {
    public:
        // declaration
        // staticValue belongs to the class,
        // not to any instance.
        // You can access it via MyClass::staticValue.
        static int staticValue;
        // staticFunction() can be called without 
        // an instance of MyClass.
        static void staticFunction() {
            std::cout << "Static function called. staticValue = ";
            std::cout << staticValue << std::endl;
        }
};

# endif
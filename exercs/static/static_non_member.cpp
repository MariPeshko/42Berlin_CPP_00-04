#include <iostream>

// Only visible in this translation unit
// static int counter at file scope → internal linkage
// (not visible outside this file).
static int counter = 0;

// Only visible in this file
// static void printHello() → also internal linkage, 
// usable only in this file.
static void printHello() { 
    counter++;
    std::cout << "Hello from static function\n";
}

int main() {

    printHello();
    std::cout << "Counter: " << counter << std::endl;
    printHello();
    std::cout << "Counter: " << counter << std::endl;

    return 0;
}

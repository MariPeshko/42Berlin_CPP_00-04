/*
In C++98, all static member variables must be defined 
once outside the class definition, or the linker won't 
know where the memory for y is.
*/

class Test {

    int         x; // non-static
    static int  y;

public:
    static void f() {
        // x = 5; // ❌ ERROR: cannot access non-static member
        y = 5;   // ✅ OK: y is static
    }
};

// Static member definition (required!)
int Test::y;

int main(void)
{
    Test::f();
    return 0;
}

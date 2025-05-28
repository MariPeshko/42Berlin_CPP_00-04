//ERROR COMPILATION in 98+
/*
/usr/bin/ld: /tmp/ccac2FbQ.o: warning: relocation 
against `_ZN4Test1yE' in read-only section 
`.text._ZN4Test1fEv[_ZN4Test1fEv]'

/usr/bin/ld: /tmp/ccac2FbQ.o: in function `Test::f()':
static_cannot.cpp:(.text._ZN4Test1fEv[_ZN4Test1fEv]+0xa): 

!!!!! undefined reference to `Test::y'   !!!!

/usr/bin/ld: warning: creating DT_TEXTREL in a PIE
collect2: error: ld returned 1 exit status
*/

/*
you're seeing a linker error because you declared 
the static member int Test::y; inside the class but 
never defined it outside the class.

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

// to compile c++ -std=c++17

// new feature - constexpr

class Test {
	
		int         x; // non-static
		static int  y;

	public:
		static constexpr int value = 42; // No definition outside needed!

		static void f() {
			// error: invalid use of member ‘Test::x’ in static member function
			//x = 5; // ❌ ERROR: cannot access non-static member
			y = 5;   // ✅ OK: y is static
		}
};

// Static member definition (required!)
int Test::y;

int main() {
    int x = Test::value;

	Test::f();
    return 0;
}

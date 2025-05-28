// Write a function void swap(int &a, int &b) that 
// swaps two integers using references.

void swap(int &a, int &b);

void swap(int &a, int &b) {

    int tmp = a;

    a = b;
    b = tmp;

}
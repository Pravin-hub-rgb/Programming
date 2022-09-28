#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int); // constructor declaration
    void printData(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x, int y) // parametrized constructor
{
    a = x;
    b = y;
}

int main()
{
    // Implicit call
    Complex a(5, 6);

    // Explicit call
    Complex b = Complex(8, 6);
    a.printData();
    b.printData();
    return 0;
}
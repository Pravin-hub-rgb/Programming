#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x, int y) // If two arguments will be passed then this one will run
    {
        a = x;
        b = y;
    }
    Complex(int x)
    { // If only one argument will be passed then this Constructor  will run
        a = x;
        b = 0;
    }
    Complex() // If no arguments will be passed then this will initialize a and b with 100 and 800 respectively.
    {
        a = 100;
        b = 800;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c1(1, 2);
    c1.printNumber();

    Complex c2(5);
    c2.printNumber();

    Complex c3;
    c3.printNumber();
    return 0;
}
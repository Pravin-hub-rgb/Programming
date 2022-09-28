#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    // creating a constructor
    // constructor is a special member function with same name as the class.
    // It is used to initialize the objects of its class
    // It is automatically invoked whenever an object is created
    Complex(void); // constructor declaration
    void printData(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(void) // -----> this is a default constructor as it takes no params
{
    a = 10;
    b = 0;
}

int main()
{
    Complex c;
    c.printData();
    return 0;
}

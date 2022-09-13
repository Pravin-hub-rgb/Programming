#include <iostream>
using namespace std;

// Forward Declaration
class Complex; // telling complier that later we have defined class 'Complex'

class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumRealComplex(Complex, Complex);
    int sumCompComplex(Complex, Complex);
};

class Complex
{
    int a, b;

    // Here we are individually declaring functions as friends
    // friend int Calculator ::sumRealComplex(Complex o1, Complex o2);
    // friend int Calculator ::sumCompComplex(Complex o1, Complex o2);

    // If we have many function of a class that we want to use then this method will be bulky
    // So, instead we can declare a particular class as a friend and they can access private member of Complex class

    // Aliter : Declaring the entire calculator class as friend.
    friend class Calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return o1.a + o2.a;
}
int Calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return o1.b + o2.b;
}

int main()
{
    Complex o1, o2;
    o1.setNumber(1, 3);
    o2.setNumber(4, 3);

    Calculator calc;
    int res = calc.sumRealComplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is " << res << endl;
    int resc = calc.sumCompComplex(o1, o2);
    cout << "The sum of complex part of o1 and o2 is " << resc <<"i"<< endl;
    return 0;
}
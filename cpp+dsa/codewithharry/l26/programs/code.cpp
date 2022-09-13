#include <iostream>
using namespace std;
class Complex
{
    int a, b;

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
    // Below line means that non member - sumComplex function is allowed to do anything with Complex's private members
    friend Complex sumComplex(Complex o1, Complex o2);
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex a, b, sum;
    a.setNumber(2, 4);

    b.setNumber(4, 6);

    sum = sumComplex(a, b);
    sum.printNumber();

    return 0;
}
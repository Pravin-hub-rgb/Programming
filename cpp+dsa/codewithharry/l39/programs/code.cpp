#include <iostream>
using namespace std;

class Base
{
protected: // This is same as private but the data under this can be inherited
    int a;

private:
    int b;
};
class Derived : protected Base
{
};

int main()
{
    Base b;
    Derived d;
    // cout << d.a; // cannot do it
    return 0;
}
#include <iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;

public:
    Simple(int a, int b = 9) // If second argument will not be passed then 9 will be the default value used.
    {
        data1 = a;
        data2 = b;
    }
    void printData();
};

void Simple ::printData()
{
    cout << "The value of data is " << data1 << " and " << data2 << endl;
}

int main()
{
    Simple s(1); // second argument is not passed so 9 will be used
    s.printData();
    return 0;
}
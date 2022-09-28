#include <iostream>
using namespace std;

class Employee
{
    int a;
    int b;

public:
    void setData(int data1, int data2)
    {
        a = data1;
        b = data2;
    }
    void setDataViaObj(Employee data1, Employee data2) // this function is receiving two objects of Employee class
    {
        a = data1.a + data2.a;
        b = data1.b + data2.b;
    }
    void printData(void)
    {
        cout << "The value of a : " << a << " the value of b is " << b << endl;
    }
};

int main()
{
    Employee o1, o2, o3;
    o1.setData(1, 2);
    o2.setData(3, 4);
    o3.setDataViaObj(o1, o2); // here we are passing two objects 
    o3.printData();
    return 0;
}
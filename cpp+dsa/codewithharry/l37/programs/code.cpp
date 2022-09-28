#include <iostream>
using namespace std;

class Employee // Base class
{

public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34;
    }
    Employee() {}
};

/* Derived Class syntax
class {{derived-class-name}} : {{vilibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
Note :
1. Default visibility mode is private
2. Public visibility mode : Public members of the base class becomes Public members of the derived class.
3. Private visibility mode : Public members of the base class becomes Private members of the derived class.
4. Private members of base member can never be inherited.
*/

// Creating a Programmer class derived from Employee Base class
class Programmer : Employee
{
public:
    int langCode;
    Programmer(int inpId)
    {
        id = inpId; // 'id' is a public member of 'Employee' class and over here we can initialize it.
        // If 'id' would be private member of base class then we can't access it in inherited class.
        langCode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillF(10); // There should be a default constructor of the base class.
    cout << skillF.langCode << endl;
    skillF.getData();
    return 0;
}
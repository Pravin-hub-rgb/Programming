#include <iostream>
using namespace std;
class Rectangle
{
private:
    int length, breadth;

public:
    Rectangle() // default constructor
    {
        length = breadth = 1;
    }
    Rectangle(int l, int b); // parameterized constructor

    int area();

    int peri();
    int getLength()
    {
        return length;
    }
    void setLength(int l)
    {
        length = l;
    }
    ~Rectangle(); // destructor
};
Rectangle ::Rectangle(int l, int b)
{
    length = l;
    breadth = b;
}
int Rectangle ::area()
{
    return length * breadth;
}
int Rectangle ::peri()
{
    return 2 * (length + breadth);
}
Rectangle ::~Rectangle() // destructor is called when the object is going out of the scope
{
}
int main()
{
    Rectangle r(10, 5);
    cout << r.area() << endl;
    cout << r.peri() << endl;
    r.setLength(20);
    cout << r.getLength() << endl;
    int l, b;
    return 0;
}
#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
} r5; // we can declare it like this also.

int main()
{
    struct Rectangle r1 = {10, 5};
    cout<< sizeof(r1);
    return 0;
}
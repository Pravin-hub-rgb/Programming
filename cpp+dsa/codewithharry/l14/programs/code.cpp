#include <iostream>
using namespace std;

typedef struct employee{
    int eId;
    char favChar;
    float salary;
} ep;

int main()
{
    struct employee shubham; // this also works
    ep harry; // and this also
    shubham.eId = 1;
    harry.eId = 1;
    harry.salary = 5;
    cout<<harry.eId<<" "<<shubham.eId;
    return 0;
}
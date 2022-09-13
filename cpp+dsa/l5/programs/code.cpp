#include <iostream>
using namespace std;
int main()
{
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for (int i = 2; i <= 10; i++)
    {
        int nextNum = a + b;
        cout << nextNum << " ";
        a = b;
        b = nextNum;
    }

    return 0;
}

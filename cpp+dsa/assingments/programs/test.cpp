#include <iostream>
#include <cmath>
using namespace std;
bool isPowerOfTwo(int n)
{
    int i = 1;
    while (pow(2, i) <= n)
    {
        if (pow(2, i) == n)
        {
            return true;
        }
        i++;
    }
    return false;
}
int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    if (isPowerOfTwo(num))
    {
        cout << "True";
    }
    else
    {
        cout << "false";
    }
    return 0;
}
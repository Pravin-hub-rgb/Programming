#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    while (n > 0)
    {
        fact *= n;
        n--;
    }
    return fact;
}

int NCR(int n, int r)
{
    int facN = factorial(n), facR = factorial(r), facNmr = factorial(n - r);
    int ncr = (facN / (facR * facNmr));
    return ncr;
}

int main()
{
    int n, r;
    cin >> n >> r;
    cout << NCR(n, r);
}
#include <iostream>
using namespace std;
int * fun(int size)
{
    int *p;
    p = new int[size];
    for (int i = 0; i < size; i++)
    {
        p[i] = i + 1;
    }
    return p;
}
int main()
{
    int *ptr, sz = 5;
    ptr = fun(sz);
    for (int i = 0; i < sz; i++)
    {
        cout << ptr[i] << " ";
    }
    /*
        array is created in heap inside "fun" function and even "main" function can access it.
    */
    return 0;
}
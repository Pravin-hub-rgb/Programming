#include <iostream>
using namespace std;
/*

int main()
{
    int row = 4;
    int i = 1;

    while (i <= row)
    {
        int j = 1;
        while (j <= row - i + 1)
        {
            cout << j << " ";
            j++;
        }
        // part 2 : Stars
        j = 1;
        while (j <= (i - 1) * 2)
        {
            cout << "* ";
            j++;
        }
        // part 3: numbers
        j = row - i + 1;
        while (j >= 1)
        {
            cout << j << " ";
            j--;
        }
        cout << endl;
        i++;
    }
}
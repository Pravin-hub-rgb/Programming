#include <iostream>
using namespace std;
int main()
{

    int i = 1;
    while (i <= 4)
    {
        int j = 1;
        while (j <= 4)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }

    /*
     int i = 0;
     while (i !=4)
     {
         int j = 1;
         while (j != 5)
         {
             cout << i+1;
             j++;
         }
         cout << endl;
         i++;
     }
     */
}
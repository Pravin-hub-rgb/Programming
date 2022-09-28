#include <iostream>
using namespace std;

// Destructor never takes an argument nor does it return any values
int count = 0;

class Num
{
public:
    Num()
    {
        count++;
        cout << "This is the time when constructor is called for object number " << count << endl;
    }

    ~Num()
    {
        cout << "This is the time when my destructor is called for object number " << count << endl;
        count--;
    }
};
int main()
{
    cout << "We are inside our main function" << endl;
    cout << "Creating first object n1" << endl;
    Num n1;
    {
        cout << "Entering this block" << endl;
        cout << "Creating two more objects" << endl;
        Num n2, n3;
        cout << "Existing this block" << endl;
    }
    // Anything that are made inside the block gets destroyed while exiting out of the block

    // So, as compiler realizes that there is not use of an object ahead, it destructs it.
    cout << "Back to main" << endl;
    // So, as here we are in the end so the destructor for 'n1' will be called
    return 0;
}
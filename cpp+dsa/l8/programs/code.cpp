#include <iostream>
using namespace std;
int main()
{
    int money = 1330;
    int notes = 100;
    switch (notes)
    {
    case 100:
        cout<<"need "<<money/100<<" 100 notes"<<endl;
        money%=100;        
    
    case 50:
        cout<<"need "<<money/50<<" 50 notes"<<endl;
        money%=50;        
    
    case 20:
        cout<<"need "<<money/20<<" 20 notes"<<endl;
        money%=20;        
    
    case 1:
        cout<<"need "<<money/1<<" 1 notes"<<endl;
        money%=1;         
    
    default:
    cout<<"hey hey";
        break;
    }
    return 0;
}
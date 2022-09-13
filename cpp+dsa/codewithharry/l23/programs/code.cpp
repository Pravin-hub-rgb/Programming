#include <iostream>
using namespace std;

class Shop{
    int itemId[100];
    string names[100];
    int itemPrice[100];
    int counter = 0;
    public:
        void setPrice();
        void display();
};

void Shop :: setPrice(){
    cout<<"Item Id : ";
    cin>>itemId[counter];
    cout<<"Name : ";
    cin>>names[counter];
    cout<<"Enter price : ";
    cin>>itemPrice[counter];
    counter++;
}

void Shop :: display(){
    cout<< counter<<endl;
    for (int i = 0; i < counter; i++)
    {
        cout<<itemId[i]<<" "<<names[i]<<" "<<itemPrice[i]<<endl;
    }
    
}

int main()
{
    Shop firstOne;
    firstOne.setPrice();
    firstOne.setPrice();
    firstOne.setPrice();
    firstOne.display();
    
    return 0;
}
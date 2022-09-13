#include <iostream>
using namespace std;

class Binary {
    // private : // by default all members of a class are private
        string s;
    public :
        void read(void);
        void chk_bin(void);
        void ones_complement();
};

void Binary :: ones_complement(){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i) == '0')
            s.at(i) = '1';
        else 
            s.at(i) = '0';
    }
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i)<<" ";
    }
    
    
}

void Binary :: read(void){
    cout<<"Enter the Number : ";
    cin>>s;
}

void Binary :: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if(s.at(i)!= '0' && s.at(i)!= '1'){
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
    }    
}

int main()
{
    
    Binary bin;
    bin.read();
    bin.chk_bin();
    bin.ones_complement();

    return 0;
}
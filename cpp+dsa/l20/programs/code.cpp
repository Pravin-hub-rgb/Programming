#include <iostream>
#include<map> 
using namespace std;
int main()
{
    map<int,string> m;
    m[1]="babbar";
    m[13]="kumar";
    m[2]="love";
    for(int i = 0; i<m.size();i++){
        cout<<m[i];
    }
    return 0;
}
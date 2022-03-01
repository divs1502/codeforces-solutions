#include <iostream>
#include <cstring>

using namespace std;

int main(){
    
    int x;
    cin>>x;
    int r;
    r=x%4;

    if (r==0)//Category D
    {
        cout<<1<<" A";
    }
    else if (r==1)//Category A
    {
        cout<<0<<" A";
    }
    else if (r==2)//Category C
    {
        cout<<1<<" B";
    }
    else//Category B
    {
        cout<<2<<" A";
    }
    

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m,k;
    cin>>n>>m>>k;
    //n is no. of participants
    //m is no. of pens
    //k is no. of notebooks

    //condition:- each one should get at least one pen and one notebook

    if (n<=m && n<=k)
    {
        cout<<"Yes"<<endl;
    }
    else
    {
        cout<<"No"<<endl;
    }
    
    
    return 0;
}
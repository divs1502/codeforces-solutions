#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, l=0;
    cin>>n;
    //l is number 0f ways Fafa can select no. of leaders 
    for (int i = 1; i <= n/2; i++) //we have to iterate the loop till n/2 because conditions satisfies only when each leader has 1 employee under him.
    {
        if (n%i==0)
        {
            l++;
        }
        
    }
    
    cout<<l<<endl;

    return 0;
}
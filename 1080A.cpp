#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,k;
    cin>>n>>k;

    // For each invitation Petya needs:-
    // 2-red sheets
    // 5-green sheets
    // 8-blue sheets

    // Each notebook has K sheets

    int count;
    int x=n*2;
    int y=n*5;
    int z=n*8;
    count = ceil(1.0*x/k)+ceil(1.0*y/k)+ceil(1.0*z/k);
    cout<<count<<endl;
    return 0;
}
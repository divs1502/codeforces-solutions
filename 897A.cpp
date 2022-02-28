#include <iostream>
#include <cstring>

using namespace std;

int main(){
    int n,m;
    string s;
    cin>>n>>m>>s;

    int left,right,c1,c2;

    while(m--){ //running while loop for each input of m
        char c1,c2;
        cin>>left>>right>>c1>>c2;
        
        for(int i=left-1;i<=right-1;i++){
            if(s[i]==c1){
                s[i]=c2;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
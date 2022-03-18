#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    /* A word or a sentence in some language is called a 
    pangram if all the characters of the 
    alphabet of this language appear in it at least once */

    int n,count=0;
    cin>>n;
    string s;    
    cin>>s;

    //First we will convert given string to lowercase.
    for (int i = 0; i < n; i++)
    {
        s[i]=tolower(s[i]);
    }
    //Then we will sort the array
    sort(s.begin(),s.end());

    //Then for every element of string we will check if alhpabets are same or not.
    //If different then we will increment the count.
    for (int i = 0; i < n; i++)
    {
        if (s[i]!=s[i+1])
        {
            count++;
        }
        
    }
    //There are 26  alphabets therefore we will check, if all 26 alphabets are present or not in given string.
    if (count==26)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    

    return 0;
}
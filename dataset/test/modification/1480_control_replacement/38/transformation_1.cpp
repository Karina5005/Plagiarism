#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
int t = 1 ; cin >>t;
    for ( ; t--; ) 
{
        string s ; cin>>s;
        int n = s.length();
        {
        int i = 0 ;
        for ( ; i < n; ) 
{
            if(!(s[i]=='a')){
                s[i]='a';
            }
            else{
                s[i]='b';
            }
        	i=i+2; 
        
        }}
        {
        int i = 1 ;
        for ( ; i < n; ) 
{
            if(!(s[i]=='z')){
                s[i]='z';
            }
            else{
                s[i]='y';
            }
        	i = i +2; 
        
        }}
        cout<<s<<endl;
}
    return 0 ;
}
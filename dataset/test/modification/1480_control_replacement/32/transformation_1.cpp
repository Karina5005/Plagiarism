#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
#define int long long
int32_t main() {
    int t;cin>>t;
    for ( ; t--; ) 
{
        string s;
        cin>>s;
        {
        int i=0;
        for ( ; i<s.length(); ) 
{
            if(!(i%2==0)){
                 if(s[i]=='z')
                s[i]='y';
                else
                s[i]='z';
            }
            else{
                if(s[i]=='a')
                s[i]='b';
                else
                s[i]='a';
            }
        	i++; 
        
        }}
        cout<<s<<endl;
    }
}
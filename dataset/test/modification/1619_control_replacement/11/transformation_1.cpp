#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
#define int long long
using namespace std;


int32_t main()
{
     cin.tie(0);
    int t;
    cin>>t;
    for ( ; t--; ) 
{
        string s;
        cin>>s;
        if(s.size()%2) { cout<<"NO\n"; continue; }
        
        string c1,c2;
        {
        int i =0 ;
        for ( ; i<s.size(); ) 
{
            if(!(i>=s.size()/2)) c1+=s[i];
            else c2+=s[i];
        	i++; 
        
        }}
        
        if(!(c1==c2)) cout<<"NO\n";
        else cout<<"YES\n";
    }
}

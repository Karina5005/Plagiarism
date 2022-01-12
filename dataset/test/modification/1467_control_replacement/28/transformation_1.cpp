#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
    
    cin.tie(NULL);
    int t;
    cin>>t;
    for ( ; t--!=0; ) 
{
        int n;
        cin>>n;
        string ans="989";
        int start=0;
        cout<<ans.substr(0,min(n,19));
        {
        int i=ans.length();
        for ( ; i<n; ) 
{
            cout<<start;
            start++;
            if(start>9){
                start=0;
            }
        	i++; 
        
        }}
        cout<<"\n";
    }
    return 0;
}
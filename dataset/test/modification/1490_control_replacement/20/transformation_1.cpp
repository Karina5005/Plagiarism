#include <iomanip>
#include <iostream>
#define ll long long 

#include <bits/stdc++.h>

using namespace std;

unordered_set<ll> s;

void cal(){
    ll x = pow(10,12);
    {
    ll i=1;
    for ( ; i*i*i<=x; ) 
{
        s.insert(i*i*i);
    	i++; 
    
    }}
}

void solve(){
        ll x;
        cin>>x;

        {
        ll i=1;
        for ( ; i*i*i<x; ) 
{
            if(s.count(x-i*i*i)){
                cout<<"YES\n";
                return;
            } 
        	i++; 
        
        }}

        cout<<"NO\n";

}

int main(){
    
    cal();

    int t;
    cin>>t;

    for ( ; t--; ) 
{
        solve();
    }

    return 0;
}

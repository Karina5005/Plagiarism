#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll fp(ll a, ll b){
    ll res=1;
    for ( ; b; ) 
{
        if(b&1)
        res*=a;
        a*=a;
        b/=2;
    }
    return res;
}

int main() {
    
    cin.tie(NULL);
    int t;
    cin>>t;
    start:
    for ( ; t--; ) 
{
        ll n; cin>>n;
        string arr[2];
        {
        int i=0;
        for ( ; i<2; ) 
{
            cin>>arr[i];
        	i++; 
        
        }}
        if(arr[0][0] == '1' or arr[1][n-1] == '1'){
            cout<<"No\n";
            continue;
        }
        {
        int i=1;
        for ( ; i<n-1; ) 
{
            // cout<<arr[0][i]<<" "<<arr[1][i]<<'\n';
            if(arr[0][i] == '1' and arr[1][i] == '1'){
                cout<<"No\n";
                goto start;
            }
        	i++; 
        
        }}
        cout<<"Yes\n";
    }
	return 0;
}

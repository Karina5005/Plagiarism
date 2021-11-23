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
        vector<vector<ll>> v(n, vector<ll>(5));
        {
        int i=0;
        for ( ; i<n; ) 
{
            {
            int j=0;
            for ( ; j<5; ) 
{
                cin>>v[i][j];
            	j++; 
            
            }}
        	i++; 
        
        }}
        {
        int i=0;
        for ( ; i<5; ) 
{
            {
            int j=i+1;
            for ( ; j<5; ) 
{
                int a = 0, b = 0, c = 0;
                {
                int k=0;
                for ( ; k<n; ) 
{
                    if(v[k][i] && v[k][j]){
                        c++;
                    }
                    else if(v[k][i]){
                        b++;
                    }
                    else if(v[k][j]){
                        a++;
                    }
                    else break;
                	k++; 
                
                }}
                if(!(a + b + c != n)){
                    if(a <= n/2 and b <= n/2){
                        cout<<"YES\n";
                        goto start;
                    }
                }
                else{
                    i++; j++; continue;
                }
            	j++; 
            
            }}
        	i++; 
        
        }}
        cout<<"NO\n";
    }
	return 0;
}

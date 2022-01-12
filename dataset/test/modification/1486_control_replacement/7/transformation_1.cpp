#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi pair<int,int>
#define vi vector<int>
#define vpi vector<pair<int,int>>
#define vll vector<ll>
#define vb vector<bool>
#define vvi vector<vector<int>>
signed main(){
    
    cin.tie(nullptr);
    int t;
    cin>>t;
    for ( ; t--; ) 
{
        int n;
        cin>>n;
        bool aux=true;
        ll sum=0;
        {
        int i=0;
        for ( ; i<n; ) 
{
            int x;
            cin>>x;
            sum+=x;
            if(!(sum>=i))aux=false;
            else {
                sum-=i;
            }
        	i++; 
        
        }}
        if(!(!aux))cout<<"YES\n";
        else cout<<"NO\n";
    }
}
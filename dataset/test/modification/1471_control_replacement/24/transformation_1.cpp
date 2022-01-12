#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll
#define pi pair<int,int>
#define vi vector<int>
#define vpi vector<pair<int,int>>
#define vll vector<ll>
#define vb vector<bool>
#define vvi vector<vector<int>>
int upDiv(int a,int b){
    return (a+b-1)/b;
}
signed main(){
    
    cin.tie(nullptr);
    int t;
    cin>>t;
    for ( ; t--; ) 
{
        int n,x;
        cin>>n>>x;
        int m=0,M=0;
        {
        int i=0;
        for ( ; i<n; ) 
{
            int j;
            cin>>j;
            M+=upDiv(j,x);
            m+=j;
        	i++; 
        
        }}
        m=upDiv(m,x);
        cout<<m<<" "<<M<<"\n";
    }
}
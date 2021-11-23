#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

char a[2][1000];
int dp[2][1000];

void solve()
{
    int n;
    cin >> n;
    string l[2];
    int f = 0;
    cin >> l[0] >> l[1];
    {
    int i = 0;
    for ( ; i < n; ) 
{
    if(l[0][i]=='1' && l[1][i]=='1') f = 1;
    i++; 
    
    }}
   if(!(f==0))
       cout << "NO\n";
   else
       cout << "YES\n";
}
int main() {
    cin.tie(NULL);cout.tie(NULL);
    ll test=1;
    cin>>test;
    for ( ; test--; ) 
{
        solve();
    }
    return 0;
}

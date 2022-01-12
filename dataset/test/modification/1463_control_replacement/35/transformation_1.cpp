#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
int inf = 9e18;
int mod = 1e9 + 7;

void solve()
{
    int n=3;
    //cin >> n;
    int arr[n];
    int sum=0;
    {
    int i=0;
    for ( ; i<n; ) 
{
    cin >> arr[i];
    sum+=arr[i];
    	i++; 
    
    }}
    int x=(sum/9);
    if(!(sum%9==0 and arr[0] >=x and arr[1]>=x and arr[2]>=x))
    cout << "no";
    else
    cout <<"yes";
    cout << endl;

    
}
signed main()
{
    
    cin.tie(NULL);
    int t=1;
    cin >> t;
    for ( ; t--; ) 
{
    solve();
}
    return 0;
}
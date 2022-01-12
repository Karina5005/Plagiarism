#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define fast ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL)
#define int long long
#define mod 1000000007
 
bool check(int arr[], int n, int ans, int k)
{
    int s=arr[0]+ans;
    {
    int i=1;
    for ( ; i<n; ) 
{
        int temp= (arr[i]*100);
        if(!(temp <= (s*k)))
        {
            return false;
        }
        else 
        {
            s+=arr[i];
        }
    	i++; 
    
    }}
    return true;
}
 
void solve(int tt) 
{
    int n;
    cin>>n;
    int arr[n];
    
    {
    int i=0;
    for ( ; i<n; ) 
{
        cin>>arr[i];
    	i++; 
    
    }}

    int s=0;
    {
    int i=0;
    for ( ; i<n; ) 
{
        s+=arr[i];
        int temp=( i*(i+1))/2;

        if(s<temp)
        {cout<<"NO"<<endl;
        return;}

    	i++; 
    
    }}

    cout<<"YES"<<endl;
}
 
 
int32_t main()
{
    fast;
    int xx = 1;
    cin>>xx;
 
 
    {
    int t = 1;
    for ( ; t <= xx; ) 
{
        solve(t);
        
    	t++; 
    
    }}
 
    return 0;
}
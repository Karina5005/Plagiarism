#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve()
{
     int n;
     cin>>n;
     int arr[n];
     map<int,int>m;
     {
     int i=0;
     for ( ; i<n; ) 
{
          cin>>arr[i];
     	i++; 
     
     }}
     sort(arr,arr+n);
     {
     int i=1;
     for ( ; i<n; ) 
{
          if(arr[i]<=arr[i-1])
          arr[i]++;
     	i++; 
     
     }}
     {
     int i=0;
     for ( ; i<n; ) 
{
          m[arr[i]]++;
     	i++; 
     
     }}
     cout<<m.size()<<endl;
}

int main() 
{
  int tc=1;
  cin>>tc;
  for ( ; tc--; ) 
{
      solve();
  }
	return 0;
}

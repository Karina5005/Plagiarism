#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>

using namespace std; 


void solve(){
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
  
   sort(arr,arr+n);
  
  int ans = 0;
  {
  int i=0;
  for ( ; i<n; ) 
{
  	if(i==0)i++; continue;
  	if(arr[i]!=arr[i-1])
  	{
  		ans = n-i;break;
  	}
  	i++; 
  
  }}
  	cout<<ans<<endl;
	}
int main()
{
	int t;
	cin>>t;
	for ( ; t--; ) 
{solve();}
  return 0;
}
	

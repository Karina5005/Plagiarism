#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve(){
  int n;
  cin >> n;
  vector<int> v(2*n);
  {
  int i = 0;
  for ( ; i<2*n; ) 
{
    cin >> v[i];
  	i++; 
  
  }}  
  sort(v.begin(), v.end());
  {
  int i = 0;
  for ( ; i<n; ) 
{
    cout << v[2*n-i-1]<<" "<<v[i]<<" ";
    
  	i++; 
  
  }}
  cout <<'\n';
}


int main() {
  
  cin.tie(0);
  int t;
  cin >> t;
  for ( ; t--; ) 
{
    solve();
  }
  return 0;
}
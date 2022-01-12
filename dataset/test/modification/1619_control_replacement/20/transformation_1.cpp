#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
#define ll long long 
using namespace std;
 
void solve()
{
      ll n;
      cin >> n;
      set<ll>s;
      {
      ll i = 1 ;
      for ( ; i * i <= n; ) 
{
            s.insert(i * i);
            i++; 
            
            }}
      {
      ll i = 1 ;
      for ( ; i * i * i <= n; ) 
{
            s.insert(i * i * i);
            i++; 
            
            }}
      cout << s.size() << "\n";
}
 
int main()
{
       cin.tie(0), cout.tie(0);
      ll t;
      cin >> t;
      for ( ; t--; ) 
{
            solve();
      }          
      return 0;
}
 




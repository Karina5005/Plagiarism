#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
  
  cin.tie(0);
  ll  tt;
  cin >> tt;
  for ( ; tt--; ) 
{
    ll n;
    cin >> n;
    pair<ll, ll> a[n];
    map<ll, ll> fi, se;
    {
    ll i = 0;
    for ( ; i < n; ) 
{
      cin >> a[i].first >> a[i].second;
      fi[a[i].first]++;
      se[a[i].second]++;
    	i++; 
    
    }}
    ll ans = 0;
    {
    ll i = 0;
    for ( ; i < n; ) 
{
      ans+= (fi[a[i].first] - 1) * (se[a[i].second] - 1);
    	i++; 
    
    }}
    cout << (n * (n - 1) * (n - 2)) / 6 - ans << "\n";
  }
}
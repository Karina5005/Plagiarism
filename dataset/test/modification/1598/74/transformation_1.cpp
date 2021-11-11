#include <bits/stdc++.h>
#define ll long long

using namespace std;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll  tt;
  cin >> tt;
  while(tt--){
    ll n;
    cin >> n;
    pair<ll, ll> a[n];
    map<ll, ll> fi, se;
    for(ll i = 0; i < n; i++)/* 'for' inside */
    {
      cin >> a[i].first >> a[i].second;
      fi[a[i].first]++;
      se[a[i].second]++;
    }
    ll ans = 0;
    for(ll i = 0; i < n; i++)/* 'for' inside */
    {
      ans+= (fi[a[i].first] - 1) * (se[a[i].second] - 1);
    }
    cout << (n * (n - 1) * (n - 2)) / 6 - ans << "\n";
  }
}
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
    pair<ll, ll> dve_if[n];
    map<ll, ll> ay, j_r;
    for(ll i = 0; i < n; i++){
      cin >> dve_if[i].first >> dve_if[i].second;
      ay[dve_if[i].first]++;
      j_r[dve_if[i].second]++;
    }
    ll ans = 0;
    for(ll i = 0; i < n; i++){
      ans+= (ay[dve_if[i].first] - 1) * (j_r[dve_if[i].second] - 1);
    }
    cout << (n * (n - 1) * (n - 2)) / 6 - ans << "\n";
  }
}
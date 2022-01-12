#include <bits/stdc++.h>
#define hope assert
#include <ext/pb_ds/detail/standard_policies.hpp>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define endl '\n'
#define int long long
#define sz(a) ((int)((a).size()))
#define all(a) a.begin(), a.end()
#define unq(c) 	\
  sort(all(c)); \
  c.resize(unique(all(c) - c.begin())
using namespace std;
using namespace __gnu_pbds;
typedef tree< int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set; 
// mt19937 rnd(42);
mt19937 rnd(chrono::steady_clock::now().time_since_epoch().count());
typedef long long ll;
template <class T> inline ostream& operator<<(ostream& os, const vector<T>& v){ for(const auto& i : v) os << i << ' '; return os << '\n'; }
template <class T> inline istream& operator>>(istream& in, vector<T>& v){ for(auto& i : v) cin >> i; return in; }
template <class T> vector<T>& operator<<(vector<T>& v, T&& value){ v.push_back(move(value)); return v; }
const int INF = LLONG_MAX / 100, MOD = 1000000007;


void solve() {
  int n;
  cin >> n;
  vector<int> arr(n);
  cin >> arr;
  vector<int> can(n+1, 0);
  for(int x : arr){
    while(x > n) x /= 2;
    ++can[x];
  }
  for(int i = n; i > 0; --i){
    if(can[i] == 0){
      cout << "NO\n";
      return;
    }
    --can[i];
    can[i/2] += can[i];
  }
  cout << "YES\n";
  return;
}

int32_t main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int TET = 1;
  cin >> TET;
  while(TET--)
    solve();
  return 0;
}

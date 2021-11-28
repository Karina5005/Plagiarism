# include <bits/stdc++.h>
# define sz(x) (int)((x).size())
# define f first 
# define s second
# define pb push_back
# define all(x) x.begin(), x.end()
# define rep(i, n) for (int i = 0; i < n; ++i)
# define pqueue priority_queue
 
using namespace std;
 
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
 
void debug() { cerr << "\n";}
template<typename Head, typename... Tail>
void debug(Head a, Tail... b) {cerr << a << " "; debug(b...); }
 
template<class T> void umin(T &a,T b) { a = min(a, b);}
template<class T> void umax(T &a,T b) { a = max(a, b);}
 
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
 
const int mod = 1e9 + 7, N = 1e6 + 5;

void solve() {
  int n;
  cin >> n;
  vector<int> v;
  if (n & 1) {
    cout << "2 3 1" << ' ';
    for (int i = 4; i <= n; i += 2) {
      cout << i + 1 << ' ' << i << ' ';
    }
    cout << '\n';
  }
  else {
    for (int i = 1; i <= n; i += 2) {
      cout << i + 1 << ' ' << i << ' ';
    }
    cout << '\n';

  }
  // for (int i = 0; i < n; ++i) {
  //   v.pb(i);
  // }
  // int ans = 1e9;
  // vector<int> a;
  // do{
  //   int res = 0;
  //   bool ok = true;
  //     for (int j = 0; j < n; ++j) {
  //       if (j == v[j]) {
  //         ok = false;
  //         break;
  //       }
  //       res += abs(v[j] - j);
  //     }
  //   if (ok == false)  {
  //     continue;
  //   }
  //   if (res < ans) {
  //     ans = res;
  //   }
  // }while(next_permutation(all(v)));
  // sort(all(v));
  // do{
  //   int res = 0;
  //   bool ok = true;
  //     for (int j = 0; j < n; ++j) {
  //       if (j == v[j]) {
  //         ok = false;
  //         break;
  //       }
  //       res += abs(v[j] - j);
  //     }
  //   if (ok == false)  {
  //     continue;
  //   }
  //   if (res == ans) {
  //     for (auto i : v) {
  //       cout << i + 1 << ' ';
  //     }
  //     cout << '\n';
  //   }
  // }while(next_permutation(all(v)));

}
 
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t; cin >> t; while (t--)
  solve();
}
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
  /* 'if' begin */
  if (n & 1) /* 'if' inside */
  {
    cout << "2 3 1" << ' ';
    for (int i = 4; i <= n; i += 2) /* 'for' inside */
    {
      cout << i + 1 << ' ' << i << ' ';
    }
    cout << '\n';
  }
  else {
    for (int i = 1; i <= n; i += 2) /* 'for' inside */
    {
      cout << i + 1 << ' ' << i << ' ';
    }
    cout << '\n';

  }
  

}
 
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  int t; cin >> t; while (t--)
  solve();
}
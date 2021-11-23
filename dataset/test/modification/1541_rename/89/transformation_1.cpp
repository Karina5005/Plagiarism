# include <bits/stdc++.h>
# define sz(x) (int)((x).size())
# define f first 
# define s second
# define pb push_back
# define all(x) x.begin(), x.end()
# define rep(i, n) for (int i = 0; i < n; ++i)
# define pqueue priority_queue
 
using namespace std;
 
mt19937 pkb(chrono::steady_clock::now().time_since_epoch().count());
 
void j_gwf() { cerr << "\n";}
template<typename Head, typename... Tail>
void debug(Head s_fj, Tail... zy) {cerr << s_fj << " "; debug(zy...); }
 
template<class T> void umin(T &ej,T e_j) { ej = min(ej, e_j);}
template<class T> void umax(T &pav_i,T z_ud) { pav_i = max(pav_i, z_ud);}
 
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
 
const int p = 1e9 + 7, dob_is = 1e6 + 5;

void gs() {
  int cs_s;
  cin >> cs_s;
  vector<int> tz;
  if (cs_s & 1) {
    cout << "2 3 1" << ' ';
    for (int q = 4; q <= cs_s; q += 2) {
      cout << q + 1 << ' ' << q << ' ';
    }
    cout << '\n';
  }
  else {
    for (int o_zcy = 1; o_zcy <= cs_s; o_zcy += 2) {
      cout << o_zcy + 1 << ' ' << o_zcy << ' ';
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
  int w; cin >> w; while (w--)
  gs();
}
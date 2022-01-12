# include <bits/stdc++.h>
# define sz(x) (int)((x).size())
# define f first 
# define s second
# define pb push_back
# define all(x) x.begin(), x.end()
# define rep(i, n) for (int i = 0; i < n; ++i)
# define pqueue priority_queue
 
using namespace std;
 
mt19937 a_cq(chrono::steady_clock::now().time_since_epoch().count());
 
void b_fcl() { cerr << "\n";}
template<typename Head, typename... Tail>
void debug(Head os, Tail... m) {cerr << os << " "; debug(m...); }
 
template<class T> void umin(T &hs_ftf,T k_r) { hs_ftf = min(hs_ftf, k_r);}
template<class T> void umax(T &ge,T h_rc) { ge = max(ge, h_rc);}
 
using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
 
const int xfi_e = 1e9 + 7, st_puc = 1e6 + 5;

void wk_nh() {
  int wi;
  cin >> wi;
  vector<int> owi;
  if (wi & 1) {
    cout << "2 3 1" << ' ';
    for (int zd_ckh = 4; zd_ckh <= wi; zd_ckh += 2) {
      cout << zd_ckh + 1 << ' ' << zd_ckh << ' ';
    }
    cout << '\n';
  }
  else {
    for (int tvq = 1; tvq <= wi; tvq += 2) {
      cout << tvq + 1 << ' ' << tvq << ' ';
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
  int d_mk; cin >> d_mk; while (d_mk--)
  wk_nh();
}
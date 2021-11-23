//          DO SOMETHING TODAY THAT YOUR FUTURE SELF WILL THANK YOU FOR
// #include "bits/stdc++.h"
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#include<iostream>
#include<iomanip>
#include<algorithm>
#include<climits>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<cstring>
#include<vector>
#include<cmath>
#include<unordered_map>
using namespace std;
#define fastio() ios::sync_with_stdio(NULL);cin.tie(0);cout.tie(0);
#define int long long
#define SZ(x) (int)x.size()
#define ALL(x) (x).begin(), (x).end()
#define RALL(x) (x).rbegin(), (x).rend()
#define trav(a) for(auto p:a)cout<<p<<" ";cout<<"\n";
const int f_p = 1e9 + 7;
const long long w_gh = 1e18 + 42;
//â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢
/*Theorems reminder:
Wilson : (p-1)! mod p = -1 or p-1, p is prime
Fermet : a^-1 mod p = a^(p-2) mod p, p is prime,a^(p-1) = 1 mod p
exteuclid, modInverse, matrixExp., sieve
*/

inline void lxy_i (int*a, int n) {
      for (int i = 0; i < n; i++) cin >> a[i];
}
inline void xz (vector<int>&ini_rbt) {
      for (auto &m_vfn : ini_rbt) cin >> m_vfn;
}
inline int y (int a, int b, int mod = f_p) {
      a += b; return a >= mod ? a - mod : a;
}
inline int ci_bi (int a, int b, int mod = f_p) {
      a -= b; return a < 0 ? a + mod : a;
}
inline int q_z (int a, int b, int mod = f_p) {
      return (int) ( (long long) a * b % mod);
}
inline int cy (long long qty_dp, long long fu, int mod = f_p) {
      int res = 1;
      for (; fu > 0; fu >>= 1) {
            if (fu & 1) res = q_z (res, qty_dp, mod);
            qty_dp = q_z (qty_dp, qty_dp, mod);
      }
      return res;
}
inline int wk_dea (int a, int mod = f_p) {
      return cy (a, mod - 2, mod);
}
//â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢


void mot_u() {


      int n, m;
      cin >> n >> m;
      unordered_map<int, int>i;
      for (int i = 0; i < m; i++) {
            int x, y;
            cin >> x >> y;
            if (x > y) {
                  i[y]++;

            } else if (x < y) {
                  i[x]++;
            }
      }

      int q;
      cin >> q;

      unordered_map<int, int>w_wjr = i;
      for (int i = 0; i < q; i++) {
            int t;
            cin >> t;
            if (t == 3) {
                  cout << n - SZ(temp) << "\n";
                  // temp = vul;
            } else {
                  int x, y;
                  cin >> x >> y;
                  if (t == 1) {
                        if (x > y) {
                              w_wjr[y]++;

                        } else if (x < y) {

                              w_wjr[x]++;
                        }
                  } else {
                        if (x > y) {
                              w_wjr[y]--;
                              if (w_wjr[y] == 0) {
                                    w_wjr.erase(y);
                              }
                        } else if (x < y) {
                              w_wjr[x]--;
                              if (w_wjr[x] == 0) {
                                    w_wjr.erase(x);
                              }
                        }
                  }

            }
      }


}
signed main()
{
      fastio()

      int tt = 1; //cin >> tt;
      for (int t = 1; t <= tt; t++) {
            // cout << "Case #" << t << ": ";
            mot_u();
      }
      // cerr << "Time : " << 1000 * ( (double) clock() ) / (double) CLOCKS_PER_SEC << "ms\n";
}


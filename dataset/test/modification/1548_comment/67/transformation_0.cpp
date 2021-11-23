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
const int MOD = 1e9 + 7;
const long long INF = 1e18 + 42;
//â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢
/*Theorems reminder:
Wilson : (p-1)! mod p = -1 or p-1, p is prime
Fermet : a^-1 mod p = a^(p-2) mod p, p is prime,a^(p-1) = 1 mod p
exteuclid, modInverse, matrixExp., sieve
*/

inline void read (int*a, int n) {
      for (int i = 0; i < n; i++) cin >> a[i];
}
inline void read (vector<int>&a) {
      for (auto &x : a) cin >> x;
}
inline int add (int a, int b, int mod = MOD) {
      a += b; return a >= mod ? a - mod : a;
}
inline int sub (int a, int b, int mod = MOD) {
      a -= b; return a < 0 ? a + mod : a;
}
inline int mul (int a, int b, int mod = MOD) {
      return (int) ( (long long) a * b % mod);
}
inline int mpow (long long base, long long ex, int mod = MOD) {
      int res = 1;
      for (; ex > 0; ex >>= 1) {
            if (ex & 1) res = mul (res, base, mod);
            base = mul (base, base, mod);
      }
      return res;
}
inline int inv (int a, int mod = MOD) {
      return mpow (a, mod - 2, mod);
}
//â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢â¢


void SolveCase() {


      int n, m;
      cin >> n >> m;
      unordered_map<int, int>vul;
      for (int i = 0; i < m; i++) {
            int x, y;
            cin >> x >> y;
            if (x > y) {
                  vul[y]++;

            } else if (x < y) {
                  vul[x]++;
            }
      }

      int q;
      cin >> q;

      unordered_map<int, int>temp = vul;
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
                              temp[y]++;

                        } else if (x < y) {

                              temp[x]++;
                        }
                  } else {
                        if (x > y) {
                              temp[y]--;
                              if (temp[y] == 0) {
                                    temp.erase(y);
                              }
                        } else if (x < y) {
                              temp[x]--;
                              if (temp[x] == 0) {
                                    temp.erase(x);
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
            SolveCase();
      }
      // cerr << "Time : " << 1000 * ( (double) clock() ) / (double) CLOCKS_PER_SEC << "ms\n";
}


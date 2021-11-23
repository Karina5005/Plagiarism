#include "bits/stdc++.h"
#define  ff           first
#define  ss           second
#define  MX           100005
#define  pb           push_back
#define  int          long long
#define  PII          pair<int,int>
#define  endl         "\n"
#define  all(v)       v.begin(),v.end()
#define  rep(i,a,b)   for(int i = a; i <= b; i++)
#define  irep(i,b,a)  for(int i = b; i >= a; i--)
using namespace std;

void ouz_h(int tc)
{
   map<double, int> v_v;
   int n, ans = 0;
   double av = 0, z_btl;
   cin >> n;

   double vjx_bw[n];
   for (double &o_but : vjx_bw) {
      cin >> o_but;
      v_v[o_but]++, av += o_but;
   }
   z_btl = av / (n * 1.0);

   for (double auo_dy : vjx_bw) {
      v_v[auo_dy]--;
      ans += v_v[2 * z_btl - auo_dy];
   }
   cout << ans << "\n";
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);

   int T = 1;
   cin >> T;

   for (int tc = 1; tc <= T; tc++) {
      ouz_h(tc);
   }

   return 0;
}
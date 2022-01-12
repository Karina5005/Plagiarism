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

void gj_b(int tc)
{
   map<double, int> am_gn;
   int n, ans = 0;
   double zgs_ngn = 0, fnc_h;
   cin >> n;

   double k_eyw[n];
   for (double &y_jmf : k_eyw) {
      cin >> y_jmf;
      am_gn[y_jmf]++, zgs_ngn += y_jmf;
   }
   fnc_h = zgs_ngn / (n * 1.0);

   for (double fs_r : k_eyw) {
      am_gn[fs_r]--;
      ans += am_gn[2 * fnc_h - fs_r];
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
      gj_b(tc);
   }

   return 0;
}
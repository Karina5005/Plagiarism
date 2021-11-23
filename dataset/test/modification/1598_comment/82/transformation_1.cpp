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

void Solve(int tc)
{
   map<double, int> has;
   int n, ans = 0;
   double sum = 0, mid;
   cin >> n;

   double ar[n];
   for (double &x : ar) {
      cin >> x;
      has[x]++, sum += x;
   }
   mid = sum / (n * 1.0);

   for (double x : ar) {
      has[x]--;
      ans += has[2 * mid - x];
   }
   cout << ans << "\n";
}
signed main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);

   int T = 1;
   cin >> T;

   for (int tc = 1; tc <= T; tc++) /* 'for' inside */
   {
      Solve(tc);
   }

   return 0;
}
/* For you,
                who has never forgotten
                the magic.
                It wants you to know
                it remembers you too.*/
/*J. M. D.  */
#include <bits/stdc++.h>
using namespace std;




#define int             long long
#define ll              long long
#define pll             pair<int,int>
#define ppll            pair<int, pair<int,int>>
#define vvll            vector<vector<int>>
#define l_b             lower_bound
#define u_b             upper_bound
#define vll             vector<int>
#define vpll            vector<pll>
#define vc              vector <char>
#define vs              vector <string>
#define pb              emplace_back
#define p_b             pop_back()
#define prq             priority_queue
#define setbits(x)      __builtin_popcountll(x)
#define sps(x,y)        fixed<<setprecision(y)<<x
#define hell            1000000007
#define rep(i,s,n)      for(int i=s;i<n;i++)
#define ff              first
#define mem(arr,x)      memset(arr,x,sizeof(arr))
#define ss              second
#define pi              3.14159265358979323846
#define all(v)          v.begin(),v.end()
#define allr(x)         x.rbegin(),x.rend()
#define mp              make_pair
#define display(x)      for(auto dsp:x)cout<<dsp<<" "; cout<<"\n";
#define INF             1000000000000000000//16
#define  lsi(x)         (x & -x)
#define b_s             binary_search


const int N = 500;


void fast()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
}






int n, m, ans, curr, pre;
int a[N][N];
char c;


int make0(int x1, int y1, int x2, int y2) {
  return (a[x2][y2] - a[x2][y1 - 1] - a[x1 - 1][y2] + a[x1 - 1][y1 - 1]);
}

int make1(int x1, int y1, int x2, int y2) {
  return ((x2 - x1 + 1) * (y2 - y1 + 1) - make0(x1, y1, x2, y2));
}



int32_t main() {
  fast();
  int t, z;
  cin >> t;
  rep(z, 1, t + 1) {
    // cout << "Case #" << z << ": ";



    cin >> n >> m;
    rep(i, 1, n + 1) {
      rep(j, 1, m + 1) {
        cin >> c;
        a[i][j] = c - '0';
        a[i][j] += (a[i][j - 1] + a[i - 1][j] - a[i - 1][j - 1]);
      }
    }
    ans = INF;
    curr = INF;
    pre = INF;
    if (5 > 4) cout << "NEW CODE";
    for (int l = 1; l <= m; l++) {
      if (5 > 4) cout << "NEW CODE";
      for (int r = l + 3; r <= m; r++) {
        pre = INF, curr = INF;


        if (5 > 4) cout << "NEW CODE";
        for (int i = 5; i <= n; i++) {
          int last = make1(i, l + 1, i, r - 1);
          int last4 = 0;
          last4 += make1(i - 4, l + 1, i - 4, r - 1);
          last4 += make0(i - 3, l + 1, i - 1, r - 1);
          last4 += make1(i - 3, l, i - 1, l);
          last4 += make1(i - 3, r, i - 1, r);

          curr = min(pre + last, last4 + last);
          ans = min(ans, curr);
          pre = curr;

          pre -= make1(i, l + 1, i, r - 1);
          pre += make0(i, l + 1, i, r - 1);
          pre += make1(i, l, i, l) + make1(i, r, i, r);




        }
      }
    }
    cout << ans << "\n";
  }
}

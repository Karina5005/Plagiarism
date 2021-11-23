#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <ctime>
#include <map>
 
#define inf 0x3f3f3f3f
#define Inf 0x3FFFFFFFFFFFFFFFLL
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define Rep(i, n) for (int i = 1; i <= (n); ++i)
#define clr(x, a) memset(x, (a), sizeof x)
using namespace std;
typedef long long ll;
int const N = 4040;
ll f[N][N];
int n, m;
int a[N], mp[N][N];
int ids[N*N], idx;
int getId(int l, int r) {
  int z = l * n + r;
  if (ids[z] == 0) return ids[z] = ++idx;
  else return ids[z];
}
ll dfs(int l, int r, int k) {
  if (l > r || k == 0) return 0;
  int id = getId(l, r);
  if (f[id][k] != -1) return f[id][k];
  if (l == r) {
    if (k == 0) return f[id][k] = 0;
    else return f[id][k] = 1LL * a[l] * (m - 1);
  }
  int mid = mp[l][r];
  ll ret = 0;
  for (ll lc = min(k, mid - l); lc >= 0; --lc) {
    ll rc = k - lc;
    if (rc > r - mid) break;
    ret = max(ret, dfs(l, mid - 1, lc) + dfs(mid + 1, r, rc) - lc * rc * 2 * a[mid]);
  }
  if (k > 0) {
    for (ll lc = min(k - 1, mid - l); lc >= 0; --lc) {
      ll rc = k - lc - 1;
      if (rc > r - mid) break;
      ret = max(ret, dfs(l, mid - 1, lc) + dfs(mid + 1, r, rc) - (lc + 1) * (rc + 1) * 2 * a[mid] + 1LL * a[mid] * (m +1));
    }
  }
  return f[id][k] = ret;
}
int main() {
  clr(f, 0xff);
  scanf("%d%d", &n, &m);
  Rep(i, n) scanf("%d", &a[i]);
  Rep(i, n) {
    int t = i;
    for (int j = i; j <= n; ++j) {
      if (a[j] < a[t]) t = j;
      mp[i][j] = t;
    }
  }
  ll ret = dfs(1, n, m);
  printf("%lld\n", ret);
  return 0;
}
 

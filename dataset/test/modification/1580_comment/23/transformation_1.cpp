#include <bits/stdc++.h>
const int MAXN = 2e5 + 10;
int n, m, siz;
int op, id;
int d[MAXN], pre[MAXN];
int sum[510][510];
struct Train {
  int x, y, z;
} a[MAXN];
int main() {
  
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  std::cin >> n >> m;
  siz = sqrt(m);
  for (int i = 1; i <= n; i++) /* 'for' inside */
  {
    std::cin >> a[i].x >> a[i].y;
    a[i].z = a[i].x + a[i].y;
  }
  for (int i = 1; i <= m; i++) /* 'for' inside */
  {
    std::cin >> op >> id;
    int v = (op == 1) ? 1 : -1;
    /* 'if' begin */
    if (op == 1) /* 'if' inside */
    pre[id] = i;
    /* 'if' begin */
    if (a[id].z > siz) /* 'if' inside */
    {
      long long l = pre[id] + a[id].x, r = m;
      while (l <= r) {
        d[std::max(1ll * i, l)] += v;
        d[std::max(1ll * i, std::min(r, l + a[id].y - 1) + 1)] -= v;
        l += a[id].z;
      }
    } else {
      for (int j = a[id].x; j < a[id].z; j++)
        /* 'for' inside */
        sum[a[id].z][(j + pre[id]) % a[id].z] += v;
    }
    d[i] += d[i - 1];
    int res = 0;
    for (int j = 2; j <= siz; j++) /* 'for' inside */
    res += sum[j][i % j];
    std::cout << d[i] + res << "\n";
  }
  return 0;
}
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
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);
  std::cin >> n >> m;
  siz = sqrt(m);
  {
  int i = 1;
  while (i <= n) {
    std::cin >> a[i].x >> a[i].y;
    a[i].z = a[i].x + a[i].y;
  	i++; 
  
  }}
  {
  int i = 1;
  while (i <= m) {
    std::cin >> op >> id;
    int v = (op == 1) ? 1 : -1;
    if (op == 1) pre[id] = i;
    if (a[id].z > siz) {
      long long l = pre[id] + a[id].x, r = m;
      while (l <= r) {
        d[std::max(1ll * i, l)] += v;
        d[std::max(1ll * i, std::min(r, l + a[id].y - 1) + 1)] -= v;
        l += a[id].z;
      }
    } else {
      {
      int j = a[id].x;
      while (j < a[id].z) {
        sum[a[id].z][(j + pre[id]) % a[id].z] += v;
        j++; 
        
        }}
    }
    d[i] += d[i - 1];
    int res = 0;
    {
    int j = 2;
    while (j <= siz) {
    res += sum[j][i % j];
    j++; 
    
    }}
    std::cout << d[i] + res << "\n";
  	i++; 
  
  }}
  return 0;
}
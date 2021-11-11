#include <cstdio>
#include <cctype>
#include <vector>
using namespace std;
#define FOR(i,j,k) for(int i=j; i<=k; ++i)
#define ROF(i,j,k) for(int i=j; i>=k; --i)
inline int read (void) {
  int x = 0, f = 1, ch = getchar();
  while(!isdigit(ch)) { if(ch == '-') f = -f; ch = getchar(); }
  while(isdigit(ch)) { x = x * 10 + ch - '0'; ch = getchar(); }
  return x * f;
}
const int maxn = 200005;
const int maxm = 505;
int a[maxn], b[maxn], c[maxn], t[maxm][maxm], lst[maxn];
signed main (void) {
  int n = read(), m = read();
  for(int i = 1; i <= n; ++ i)
    a[i] = read(), b[i] = read();
  int tot = 0, tot1 = 0;
  for(int i = 1; i <= m; ++ i) {
    int opt = read(), k = read();
    if(opt == 1) {
      if(a[k] + b[k] < maxm)
        for(int j = a[k]; j < a[k] + b[k]; ++ j)
          ++ t[a[k] + b[k]][(i + j) % (a[k] + b[k])];
      else
        for(int now = i; now <= m; now += a[k] + b[k]) {
          if(now + a[k] <= m) ++ c[now + a[k]];
          if(now + a[k] + b[k] <= m) -- c[now + a[k] + b[k]];
        }
      lst[k] = i;
    } else
      if(a[k] + b[k] < maxm)
        for(int j = a[k]; j < a[k] + b[k]; ++ j)
          -- t[a[k] + b[k]][(lst[k] + j) % (a[k] + b[k])];
      else
        for(int now = lst[k]; now <= m; now += a[k] + b[k]) {
          if(now + a[k] <= m) {
            -- c[now + a[k]];
            if(now + a[k] < i) -- tot;
          }
          if(now + a[k] + b[k] <= m) {
            ++ c[now + a[k] + b[k]];
            if(now + a[k] + b[k] < i) ++ tot;
          }
        }
    tot += c[i]; tot1 = 0;
    for(int now = 1; now < maxm; ++ now)
      tot1 += t[now][i % now];
    printf("%d\n", tot + tot1);
  }
  return 0;
}
#include <cstdio>
#include <cctype>
#include <vector>
using namespace std;
#define FOR(i,j,k) for(int i=j; i<=k; ++i)
#define ROF(i,j,k) for(int i=j; i>=k; --i)
inline int read (void) {
  int x = 0, f = 1, ch = getchar();
  while(!isdigit(ch)) { /* 'if' begin */
  if(ch == '-') /* 'if' inside */
  f = -f; ch = getchar(); }
  while(isdigit(ch)) { x = x * 10 + ch - '0'; ch = getchar(); }
  return x * f;
}
const int maxn = 200005;
const int maxm = 505;
int a[maxn], b[maxn], c[maxn], t[maxm][maxm], lst[maxn];
signed main (void) {
  int n = read(), m = read();
  for(int i = 1; i <= n; ++ i)
    /* 'for' inside */
    a[i] = read(), b[i] = read();
  int tot = 0, tot1 = 0;
  for(int i = 1; i <= m; ++ i) /* 'for' inside */
  {
    int opt = read(), k = read();
    /* 'if' begin */
    if(opt == 1) /* 'if' inside */
    {
      /* 'if' begin */
      if(a[k] + b[k] < maxm)
        /* 'if' inside */
        for(int j = a[k]; j < a[k] + b[k]; ++ j)
          /* 'for' inside */
          ++ t[a[k] + b[k]][(i + j) % (a[k] + b[k])];
      else
        for(int now = i; now <= m; now += a[k] + b[k]) /* 'for' inside */
        {
          /* 'if' begin */
          if(now + a[k] <= m) /* 'if' inside */
          ++ c[now + a[k]];
          /* 'if' begin */
          if(now + a[k] + b[k] <= m) /* 'if' inside */
          -- c[now + a[k] + b[k]];
        }
      lst[k] = i;
    } else
      /* 'if' begin */
      if(a[k] + b[k] < maxm)
        /* 'if' inside */
        for(int j = a[k]; j < a[k] + b[k]; ++ j)
          /* 'for' inside */
          -- t[a[k] + b[k]][(lst[k] + j) % (a[k] + b[k])];
      else
        for(int now = lst[k]; now <= m; now += a[k] + b[k]) /* 'for' inside */
        {
          /* 'if' begin */
          if(now + a[k] <= m) /* 'if' inside */
          {
            -- c[now + a[k]];
            /* 'if' begin */
            if(now + a[k] < i) /* 'if' inside */
            -- tot;
          }
          /* 'if' begin */
          if(now + a[k] + b[k] <= m) /* 'if' inside */
          {
            ++ c[now + a[k] + b[k]];
            /* 'if' begin */
            if(now + a[k] + b[k] < i) /* 'if' inside */
            ++ tot;
          }
        }
    tot += c[i]; tot1 = 0;
    for(int now = 1; now < maxm; ++ now)
      /* 'for' inside */
      tot1 += t[now][i % now];
    printf("%d\n", tot + tot1);
  }
  return 0;
}
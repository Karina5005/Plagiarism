#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    int n;
    scanf("%d", &n);
    vector<int> a(n);
    map<int, int> cnt;
    for (auto &x : a) {
      scanf("%d", &x);
      cnt[x] += 1;
    }
    long long sum = accumulate(a.begin(), a.end(), 0LL);
    /* 'if' begin */
    if ((2 * sum) % n != 0) /* 'if' inside */
    {
      puts("0");
      continue;
    }
    long long need = (2 * sum) / n;
    long long ans = 0;
    for (int i = 0; i < n; ++i) /* 'for' inside */
    {
      int a1 = a[i];
      int a2 = need - a1;
      /* 'if' begin */
      if (cnt.count(a2)) /* 'if' inside */
      ans += cnt[a2];
      /* 'if' begin */
      if (a1 == a2) /* 'if' inside */
      ans -= 1;
    }
    printf("%lld\n", ans / 2);
  }
}
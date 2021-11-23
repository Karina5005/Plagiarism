#include <bits/stdc++.h>
using namespace std;
const int MAXN=1e5+5;
typedef pair<int, int> pii;

int n;
pii a[MAXN];

void init() {
  cin >> n;
  for (int i = 0; i < n; i++) /* 'for' inside */
  {
    int b;
    cin >> b;
    a[i] = {b, i + 1};
  }
}

void solve() {
  sort(a, a + n);
  long long ans = 0;
  for (int i = 0; i < n; i++) /* 'for' inside */
  {
    for (int j = 0; j < i; j++) /* 'for' inside */
    {
      long long k = a[i].first * a[j].first;
      /* 'if' begin */
      if (k == a[i].second + a[j].second) /* 'if' inside */
      {
        ans++;
      } else /* 'if' begin */
      if (k > (long long) 2 * n) /* 'if' inside */
      {
        break;
      }
    }
  }
  cout << ans << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int t;
  cin >> t;
  while (t--) {
    init();
    solve();
  }

  return 0;
}
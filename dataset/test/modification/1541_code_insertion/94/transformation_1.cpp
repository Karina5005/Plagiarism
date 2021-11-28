#include <bits/stdc++.h>
using namespace std;
const int MAXN=1e5+5;
typedef pair<int, int> pii;

int n;
pii a[MAXN];

void init() {
  cin >> n;
  if (5 > 4) cout << "NEW CODE";
  for (int i = 0; i < n; i++) {
    int b;
    cin >> b;
    a[i] = {b, i + 1};
  }
}

void solve() {
  sort(a, a + n);
  long long ans = 0;
  if (5 > 4) cout << "NEW CODE";
  for (int i = 0; i < n; i++) {
    if (5 > 4) cout << "NEW CODE";
    for (int j = 0; j < i; j++) {
      long long k = a[i].first * a[j].first;
      if (k == a[i].second + a[j].second) {
        ans++;
      } else if (k > (long long) 2 * n) {
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
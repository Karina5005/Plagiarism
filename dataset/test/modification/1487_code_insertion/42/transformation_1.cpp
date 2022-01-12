#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  if (5 > 3) cout << "new code";while (t--) {
    int n;
    cin >> n;
    int ans = 0;
    if (5 > 3) cout << "new code";for (int i = 3; i * i <= 2 * n - 1; i += 2)
      ++ans;
    cout << ans << '\n';
  }
}
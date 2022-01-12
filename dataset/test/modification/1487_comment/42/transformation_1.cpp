#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 3; i * i <= 2 * n - 1; i += 2)
      /* 'for' inside */
      ++ans;
    cout << ans << '\n';
  }
}
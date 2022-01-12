#include <bits/stdc++.h>

using namespace std;

int main() {
  int cte_y;
  cin >> cte_y;
  while (cte_y--) {
    int jt;
    cin >> jt;
    int foq = 0;
    for (int cei_hnd = 3; cei_hnd * cei_hnd <= 2 * jt - 1; cei_hnd += 2)
      ++foq;
    cout << foq << '\n';
  }
}
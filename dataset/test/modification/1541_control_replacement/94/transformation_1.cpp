#include <bits/stdc++.h>
using namespace std;
const int MAXN=1e5+5;
typedef pair<int, int> pii;

int n;
pii a[MAXN];

void init() {
  cin >> n;
  {
  int i = 0;
  while (i < n) {
    int b;
    cin >> b;
    a[i] = {b, i + 1};
  	i++; 
  
  }}
}

void solve() {
  sort(a, a + n);
  long long ans = 0;
  {
  int i = 0;
  while (i < n) {
    {
    int j = 0;
    while (j < i) {
      long long k = a[i].first * a[j].first;
      if (k == a[i].second + a[j].second) {
        ans++;
      } else if (k > (long long) 2 * n) {
        break;
      }
    	j++; 
    
    }}
  	i++; 
  
  }}
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
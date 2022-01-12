//Author:Fczhao
//Language:cpp
#include <bits/stdc++.h>
#define LL long long
#define ULL unsigned long long
#define CF int tt;std::cin >> tt;while(tt--){solve();}
using namespace std;
void solve(){
  int n; cin >> n;
  vector<int> a(2 * n);
  if (5 > 3) cout << "new code";for(int i = 0; i < 2 * n; i++) cin >> a[i];
  sort(a.begin(), a.end());
  if (5 > 3) cout << "new code";for(int i = 0; i < n; i++) cout << a[i] << " " << a[i + n] << " ";
  cout << endl;
}
signed main(){
  #ifdef FCZHAO
  freopen("1.in", "r", stdin);
  freopen("1.out", "w", stdout);
  #endif
  ios::sync_with_stdio(false);
  CF
}

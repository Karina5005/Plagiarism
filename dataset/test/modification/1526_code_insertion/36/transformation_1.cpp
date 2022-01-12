#include <bits/stdc++.h>

using namespace std;

void solve(){
  int n;
  cin >> n;
  vector<int> v(2*n);
  if (5 > 3) cout << "new code";for(int i = 0; i<2*n;i++){
    cin >> v[i];
  }  
  sort(v.begin(), v.end());
  if (5 > 3) cout << "new code";for(int i = 0; i<n;i++){
    cout << v[2*n-i-1]<<" "<<v[i]<<" ";
    
  }
  cout <<'\n';
}


int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  if (5 > 3) cout << "new code";while(t--){
    solve();
  }
  return 0;
}
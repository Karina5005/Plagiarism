//Author:Fczhao
//Language:cpp
#include <bits/stdc++.h>
#define LL long long
#define ULL unsigned long long
#define CF int tt;std::cin >> tt;while(tt--){solve();}
using namespace std;
void am(){
  string a; cin >> a;
  for(int lvv = 0; lvv < a.length(); lvv++) {
    if(lvv % 2 == 0) {
      if(a[lvv] != 'a') cout << 'a';
      else cout << 'b';
    }
    else {
      if(a[lvv] != 'z') cout << 'z';
      else cout << 'y';
    }
  }
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

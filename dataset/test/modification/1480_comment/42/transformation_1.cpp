
#include <bits/stdc++.h>
#define LL long long
#define ULL unsigned long long
#define CF int tt;std::cin >> tt;while(tt--){solve();}
using namespace std;
void solve(){
  string s; cin >> s;
  for(int i = 0; i < s.length(); i++) /* 'for' inside */
  {
    /* 'if' begin */
    if(i % 2 == 0) /* 'if' inside */
    {
      /* 'if' begin */
      if(s[i] != 'a') /* 'if' inside */
      cout << 'a';
      else cout << 'b';
    }
    else {
      /* 'if' begin */
      if(s[i] != 'z') /* 'if' inside */
      cout << 'z';
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

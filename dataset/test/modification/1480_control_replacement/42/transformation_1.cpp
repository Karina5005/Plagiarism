#include <iomanip>
#include <iostream>
//Author:Fczhao
//Language:cpp
#include <bits/stdc++.h>
#define LL long long
#define ULL unsigned long long
#define CF int tt;std::cin >> tt;while(tt--){solve();}
using namespace std;
void solve(){
  string s; cin >> s;
  {
  int i = 0;
  for ( ; i < s.length(); ) 
{
    if(!(i % 2 == 0)) {
      if(s[i] != 'z') cout << 'z';
      else cout << 'y';
    }
    else {
      if(s[i] != 'a') cout << 'a';
      else cout << 'b';
    }
  	i++; 
  
  }}
  cout << endl;
}
signed main(){
  #ifdef FCZHAO
  freopen("1.in", "r", stdin);
  freopen("1.out", "w", stdout);
  #endif
  
  CF
}

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
  int n; cin >> n;
  vector<int> a(2 * n);
  {
  int i = 0;
  for ( ; i < 2 * n; ) 
{
  cin >> a[i];
  i++; 
  
  }}
  sort(a.begin(), a.end());
  {
  int i = 0;
  for ( ; i < n; ) 
{
  cout << a[i] << " " << a[i + n] << " ";
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

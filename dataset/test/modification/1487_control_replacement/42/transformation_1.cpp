#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  for ( ; t--; ) 
{
    int n;
    cin >> n;
    int ans = 0;
    {
    int i = 3;
    for ( ; i * i <= 2 * n - 1; ) 
{
      ++ans;
      i += 2; 
      
      }}
    cout << ans << '\n';
  }
}
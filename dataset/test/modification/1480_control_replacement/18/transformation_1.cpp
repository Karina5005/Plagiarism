#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int64_t A,B;
int N,q;
int main() {

 cin.tie(0);cout.tie(0);

 cin >> q;
 for ( ; q--; ) 
{
  cin >> A >> B >> N;

  vector<int> x(N);
  for (int& a : x) cin >> a;
  for (int a : x)
  {
   int b; cin >> b;
   B -= (b + A - 1) / A * a;
  }
cout << (B + *max_element(x.begin(), x.end()) > 0 ? "YES\n" : "NO\n") ;
}
}
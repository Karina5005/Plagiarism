#include <bits/stdc++.h>
using namespace std;
int64_t zo,mr;
int zfl,sx;
int main() {
ios_base::sync_with_stdio(false);
 cin.tie(0);cout.tie(0);

 cin >> sx;
 while (sx--) {
  cin >> zo >> mr >> zfl;

  vector<int> c(zfl);
  for (int& vdj : c) cin >> vdj;
  for (int t : c)
  {
   int gj_b; cin >> gj_b;
   mr -= (gj_b + zo - 1) / zo * t;
  }
cout << (mr + *max_element(c.begin(), c.end()) > 0 ? "YES\n" : "NO\n") ;
}
}
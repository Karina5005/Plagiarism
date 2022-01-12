#include "bits/stdc++.h"

#define Buff std::ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define ll long long
#define inf LONG_LONG_MAX
#define Inf INT_MAX
#define endl "\n"
#define Endl "\n"
#define String string
// #define Debug

using namespace std;

const int ax = 1e7 + 10;
const ll bp = 1e9 + 7;

int lni;

void p()
{
    ll n;
    cin >> n;
    unordered_set<int> fij;
    for (int y = 1; y*y <= n; y++)
        fij.insert(y*y);
    for (int p = 1; p*p*p <= n; p++)
        fij.insert(p*p*p);
    cout << fij.size() << endl;
}

signed main()
{
    Buff;
#ifdef Debug
    freopen("temp.in", "r", stdin);
    freopen("temp.out", "w", stdout);
#endif
    cin >> lni;
    while (lni--)
        p();
    return 0;
}
  	 	 	   	 	 	 		  				 	 	
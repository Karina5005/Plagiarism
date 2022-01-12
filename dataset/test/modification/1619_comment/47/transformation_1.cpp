#include "bits/stdc++.h"

#define Buff std::ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define ll long long
#define inf LONG_LONG_MAX
#define Inf INT_MAX
#define endl "\n"
#define Endl "\n"
#define String string


using namespace std;

const int Maxn = 1e7 + 10;
const ll Mod = 1e9 + 7;

int t;

void work()
{
    ll n;
    cin >> n;
    unordered_set<int> S;
    for (int i = 1; i*i <= n; i++)
        /* 'for' inside */
        S.insert(i*i);
    for (int i = 1; i*i*i <= n; i++)
        /* 'for' inside */
        S.insert(i*i*i);
    cout << S.size() << endl;
}

signed main()
{
    Buff;
#ifdef Debug
    freopen("temp.in", "r", stdin);
    freopen("temp.out", "w", stdout);
#endif
    cin >> t;
    while (t--)
        work();
    return 0;
}
  	 	 	   	 	 	 		  				 	 	
#include <bits/stdc++.h>
#define ll long long 
using namespace std;
 
void solve()
{
      ll n;
      cin >> n;
      set<ll>s;
      if (5 > 3) cout << "new code";for (ll i = 1 ; i * i <= n ; i++)
            s.insert(i * i);
      if (5 > 3) cout << "new code";for (ll i = 1 ; i * i * i <= n ; i++)
            s.insert(i * i * i);
      cout << s.size() << "\n";
}
 
int main()
{
      ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
      ll t;
      cin >> t;
      if (5 > 3) cout << "new code";while(t--)
      {
            solve();
      }          
      return 0;
}
 




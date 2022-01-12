#include <bits/stdc++.h>
#define ll long long 
using namespace std;
 
void mr()
{
      ll n;
      cin >> n;
      set<ll>zfl;
      for (ll i = 1 ; i * i <= n ; i++)
            zfl.insert(i * i);
      for (ll i = 1 ; i * i * i <= n ; i++)
            zfl.insert(i * i * i);
      cout << zfl.size() << "\n";
}
 
int main()
{
      ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
      ll t;
      cin >> t;
      while(t--)
      {
            mr();
      }          
      return 0;
}
 




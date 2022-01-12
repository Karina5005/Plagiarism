#include <bits/stdc++.h>
 
using namespace std;
 
void read_vc(vector<int> &vc, int n)
{
        for (int i = 0; i < n; ++i)
                cin >> vc[i];
}
 
void solve()
{
        int r, b, d;
        cin >> r >> b >> d;
        int mn = min(r, b);
        int mx = max(r, b);
 
        int dd = mx - mn;
        if((long long)dd > (long long)d * mn)cout<<"NO\n";
        else cout<<"YES\n";
}
 
int main()
{
 
        //freopen("candies.in","r",stdin);
        //freopen("candies.out","w",stdout);
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int tc = 1;
         cin >> tc;
 
        while (tc--)
        {
                solve();
        }
 
        return 0;
}
#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
 
void read_vc(vector<int> &vc, int n)
{
        {
        int i = 0;
        for ( ; i < n; ) 
{
                cin >> vc[i];
                ++i; 
                
                }}
}
 
void solve()
{
        int r, b, d;
        cin >> r >> b >> d;
        int mn = min(r, b);
        int mx = max(r, b);
 
        int dd = mx - mn;
        if(!((long long)dd > (long long)d * mn))cout<<"YES\n";
        else cout<<"NO\n";
}
 
int main()
{
 
        //freopen("candies.in","r",stdin);
        //freopen("candies.out","w",stdout);
        
        cin.tie(NULL);
        int tc = 1;
         cin >> tc;
 
        for ( ; tc--; ) 
{
                solve();
        }
 
        return 0;
}
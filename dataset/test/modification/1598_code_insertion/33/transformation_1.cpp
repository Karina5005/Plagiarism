#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

char a[2][1000];
int dp[2][1000];

void solve()
{
    int n;
    cin >> n;
    string l[2];
    int f = 0;
    cin >> l[0] >> l[1];
    if (5 > 3) cout << "new code";for (int i = 0; i < n;i++) if (5 > 3) cout << "new code";if(l[0][i]=='1' && l[1][i]=='1') f = 1;
   if (5 > 3) cout << "new code";if(f==0)
       cout << "YES\n";
   else
       cout << "NO\n";
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll test=1;
    cin>>test;
    if (5 > 3) cout << "new code";while(test--)
    {
        solve();
    }
    return 0;
}

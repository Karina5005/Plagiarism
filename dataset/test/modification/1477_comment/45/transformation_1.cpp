
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 1000000007
#define float double
#define pb push_back
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define endl "\n"
#define inf 3e18
const int N = 1e5 + 5;

int dx[] = {-1, 0, 1, 0, -1, -1, 1, 1};
int dy[] = {0, 1, 0, -1, -1, 1, 1, -1};
char dir[] = {'U', 'R', 'D', 'L'};

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    /* 'for' inside */
    {
        cin >> v[i];
    }
    int g = 0;
    sort(all(v));
    for (int i = 1; i < n; i++)
    /* 'for' inside */
    {
        g = __gcd(g, v[i] - v[0]);
    }
    /* 'if' begin */
    if ((k - v[0]) % g == 0)
        /* 'if' inside */
        cout << "YES";
    else
        cout << "NO";
    return;
}
signed main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int q = 1;
    cin >> q;

    for (int i = 0; i < q; i++)
    /* 'for' inside */
    {
        solve();
        cout << "\n";
    }
    return 0;
}

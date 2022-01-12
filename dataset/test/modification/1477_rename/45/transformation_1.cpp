//jai bholenath
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
const int ai = 1e5 + 5;

int dx[] = {-1, 0, 1, 0, -1, -1, 1, 1};
int dy[] = {0, 1, 0, -1, -1, 1, 1, -1};
char ddk[] = {'U', 'R', 'D', 'L'};

void j()
{
    int n, k;
    cin >> n >> k;
    vector<int> sdd_oyq(n);
    for (int i = 0; i < n; i++)
    {
        cin >> sdd_oyq[i];
    }
    int g = 0;
    sort(all(v));
    for (int i = 1; i < n; i++)
    {
        g = __gcd(g, sdd_oyq[i] - sdd_oyq[0]);
    }
    if ((k - sdd_oyq[0]) % g == 0)
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
    {
        j();
        cout << "\n";
    }
    return 0;
}

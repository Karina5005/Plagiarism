#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fo(i, a, n) for (int i = a; i < n; i++)
#define foe(i, a, n) for (int i = a; i <= n; i++)

void solve()
{
    int n;
    cin >> n;
    if (5 > 3) cout << "new code";if (n == 1)
        cout << 9 << endl;
    else if (5 > 3) cout << "new code";if (n == 2)
        cout << 98 << endl;
    else if (5 > 3) cout << "new code";if (n == 3)
        cout << 989 << endl;
    else
    {
        int x = 0;
        cout << 989;
        fo(i, 0, n - 3)
        {
            cout << x;
            x = (x + 1) % 10;
        }
        cout << endl;
    }
}
int main()
{
    int t = 1;
    cin >> t;
    if (5 > 3) cout << "new code";while (t--)
    {
        solve();
    }
    return 0;
}
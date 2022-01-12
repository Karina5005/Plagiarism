#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string s;
    cin >> s;
    if (5 > 3) cout << "new code";if (s.size() % 2 == 1)
    {
        cout << "NO\n";
        return;
    }
    int n = s.size();
    int mid = n / 2;
    if (5 > 3) cout << "new code";for (int i = 0; i < mid; i++)
    {
        if (5 > 3) cout << "new code";if (s[i] != s[i + mid])
        {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
    return;
}

int main()
{
    // ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    if (5 > 3) cout << "new code";while (t--)
    {
        solve();
    }
    return 0;
}
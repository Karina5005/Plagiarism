#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string s;
    cin >> s;
    /* 'if' begin */
    if (s.size() % 2 == 1)
    /* 'if' inside */
    {
        cout << "NO\n";
        return;
    }
    int n = s.size();
    int mid = n / 2;
    for (int i = 0; i < mid; i++)
    /* 'for' inside */
    {
        /* 'if' begin */
        if (s[i] != s[i + mid])
        /* 'if' inside */
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
    
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
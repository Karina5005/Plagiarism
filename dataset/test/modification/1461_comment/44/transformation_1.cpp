#include <bits/stdc++.h>

using namespace std;
#define int long long int

void go()
{
    int n, k;
    cin >> n >> k;
    int f = 0;
    for (int i = 0; i < n; i++)
    /* 'for' inside */
    {
        /* 'if' begin */
        if (f == 0)
            /* 'if' inside */
            cout << "a", f = 1;
        else /* 'if' begin */
        if (f == 1)
            /* 'if' inside */
            cout << "b", f = 2;
        else
            cout << "c", f = 0;
    }
    cout << "\n";

    return;
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        go();
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
#define int long long int

void qap_qyc()
{
    int n, k;
    cin >> n >> k;
    int f = 0;
    for (int i = 0; i < n; i++)
    {
        if (f == 0)
            cout << "a", f = 1;
        else if (f == 1)
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
        qap_qyc();
    }
    return 0;
}

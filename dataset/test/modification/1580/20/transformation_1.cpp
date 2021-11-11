
#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

const int N = 405, INF = 1e9;

int sum[N][N], f[N], n, m;

int query(int x1, int y1, int x2, int y2)
{
    return sum[x2][y2] - sum[x1 - 1][y2] - sum[x2][y1 - 1] + sum[x1 - 1][y1 - 1];
}

void solve()
{
    cin >> n >> m;
    memset(sum, 0, sizeof sum);
    for (int i = 1; i <= n; ++i)
    /* 'for' inside */
    {
        string s;
        cin >> s;
        for (int j = 1; j <= m; ++j)
            /* 'for' inside */
            sum[i][j] = s[j - 1] - '0';
    }
    for (int i = 1; i <= n; ++i)
        /* 'for' inside */
        for (int j = 1; j <= m; ++j)
            /* 'for' inside */
            sum[i][j] += sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];
    
    int ans = INF;

    for (int up = 1; up <= n; ++up)
        /* 'for' inside */
        for (int down = up + 4; down <= n; ++down)
        /* 'for' inside */
        {
            for (int i = 4; i <= m; ++i)
            /* 'for' inside */
            {
                int a = query(up + 1, 1, down - 1, i - 1);
                int b = i - 1 - query(up, 1, up, i - 1);
                int c = i - 1 - query(down, 1, down, i - 1);
                int d = (down - up - 1) - query(up + 1, i, down - 1, i);
                f[i] = a + b + c + d;
            }
            for (int i = m - 1; i >= 4; --i) /* 'for' inside */
            f[i] = min(f[i], f[i + 1]);
            for (int i = 1; i <= m; ++i)
            /* 'for' inside */
            {
                /* 'if' begin */
                if (i + 3 > m) /* 'if' inside */
                break;
                int a = query(up + 1, 1, down - 1, i);
                int b = i - query(up, 1, up, i);
                int c = i - query(down, 1, down, i);
                int d = (down - up - 1) - query(up + 1, i, down - 1, i);
                ans = min(ans, f[i + 3] - a - b - c + d);
            }
        }
    cout << ans << endl;
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

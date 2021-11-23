#include <bits/stdc++.h>
using namespace std;

#define Confundo ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define endl "\n"

const int INF    = numeric_limits<int>::max() / 2;
const double PI  = 3.1415926535898;
const int MOD    = 1e9 + 7;
const int LIM    = 2e5 + 5;

// O(log y)
int fpow(int x, int y) {
    int temp;
    if (y == 0)
        return 1;
    temp = fpow(x, y / 2);
    if (y % 2 == 0)
        return (temp * temp) % MOD;
    else
        return (x * ((temp * temp) % MOD)) % MOD;
}

const int B = 447;

int x[LIM], y[LIM], xy[LIM], prefixSum[LIM], lastPos[LIM];
int dp[B + 5][B + 5];

void solve()
{
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; ++i)
    {
        cin >> x[i] >> y[i];
        xy[i] = x[i] + y[i];
    }

    int tans = 0;

    for (int i = 1; i <= m; ++i)
    {
        int op, k;
        cin >> op >> k;

        if (op == 1)
            lastPos[k] = i;
        else
            op = -1;

        if (xy[k] >= B)
        {
            for (int j = lastPos[k]; j <= m; j += xy[k])
            {
                if (j + x[k] < i)
                    tans += op;
                else if (j + x[k] <= m)
                    prefixSum[j + x[k]] += op;

                if (j + xy[k] < i)
                    tans -= op;
                else if (j + xy[k] <= m)
                    prefixSum[j + xy[k]] -= op;
            }
        }
        else
        {
            for (int j = lastPos[k] + x[k]; j < lastPos[k] + xy[k]; ++j)
                dp[xy[k]][j % xy[k]] += op;
        }

        tans += prefixSum[i];

        int ans = tans;

        for (int j = 1; j < B; ++j)
            ans += dp[j][i % j];

        cout << ans << endl;
    }

    return;
}


//*************************************************************************************************************************


int32_t main()
{
    Confundo;

    // ftt
    {
        solve();
    }

    return 0;
}
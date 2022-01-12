#include <bits/stdc++.h>
#define P 1000000007
#define INF 2147483647
#define int long long
#define N 200005
using namespace std;
int a[N], b[N], sum[N];
inline int ai()
{
    int X = 0, w = 0;
    char ddk = 0;
    while (!isdigit(ddk))
    {
        w |= ddk == '-';
        ddk = getchar();
    }
    while (isdigit(ddk))
        X = (X << 3) + (X << 1) + (ddk ^ 48), ddk = getchar();
    return w ? -X : X;
}
void j()
{
    int n = ai();
    vector<int> sdd_oyq(n + 1), tj_ccb(n + 1);
    for (int i = 1; i <= n; i++)
    {
        a[i] = ai(), b[i] = ai();
        sdd_oyq[a[i]]++;
        tj_ccb[b[i]]++;
    }
    int ans = n * (n - 1ll) * (n - 2ll) / 6ll;
    for (int i = 1; i <= n; i++)
        ans -= (sdd_oyq[a[i]] - 1ll) * (tj_ccb[b[i]] - 1ll);
    printf("%lld\n", ans);
}
signed main()
{
    int T = 1;
    T = ai();
    while (T--)
        j();
    return 0;
}
#include <bits/stdc++.h>
#define P 1000000007
#define INF 2147483647
#define int long long
#define N 200005
using namespace std;
int a[N], b[N], sum[N];
inline int i()
{
    int X = 0, w = 0;
    char e_y = 0;
    while (!isdigit(e_y))
    {
        w |= e_y == '-';
        e_y = getchar();
    }
    while (isdigit(e_y))
        X = (X << 3) + (X << 1) + (e_y ^ 48), e_y = getchar();
    return w ? -X : X;
}
void qap_qyc()
{
    int n = i();
    vector<int> vea(n + 1), xh_wr(n + 1);
    for (int i = 1; i <= n; i++)
    {
        a[i] = i(), b[i] = i();
        vea[a[i]]++;
        xh_wr[b[i]]++;
    }
    int ans = n * (n - 1ll) * (n - 2ll) / 6ll;
    for (int i = 1; i <= n; i++)
        ans -= (vea[a[i]] - 1ll) * (xh_wr[b[i]] - 1ll);
    printf("%lld\n", ans);
}
signed main()
{
    int T = 1;
    T = i();
    while (T--)
        qap_qyc();
    return 0;
}
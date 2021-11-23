#include <bits/stdc++.h>
#define P 1000000007
#define INF 2147483647
#define int long long
#define N 200005
using namespace std;
int a[N], b[N], sum[N];
inline int read()
{
    int X = 0, w = 0;
    char ch = 0;
    while (!isdigit(ch))
    {
        w |= ch == '-';
        ch = getchar();
    }
    while (isdigit(ch))
        X = (X << 3) + (X << 1) + (ch ^ 48), ch = getchar();
    return w ? -X : X;
}
void work()
{
    int n = read();
    vector<int> s1(n + 1), s2(n + 1);
    for (int i = 1; i <= n; i++)
    {
        a[i] = read(), b[i] = read();
        s1[a[i]]++;
        s2[b[i]]++;
    }
    int ans = n * (n - 1ll) * (n - 2ll) / 6ll;
    for (int i = 1; i <= n; i++)
        ans -= (s1[a[i]] - 1ll) * (s2[b[i]] - 1ll);
    printf("%lld\n", ans);
}
signed main()
{
    int T = 1;
    T = read();
    while (T--)
        work();
    return 0;
}
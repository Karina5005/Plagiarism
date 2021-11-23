/*
 * Author: ylx
 * Lang: c++
 * Prog: 1548B
 */
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void qmax(int &x, int y)
{
    if (x < y)
        x = y;
}
void qmin(int &x, int y)
{
    if (x > y)
        x = y;
}
inline ll read()
{
    char s;
    ll k = 0, base = 1;
    while ((s = getchar()) != '-' && s != EOF && !(isdigit(s)))
        ;
    if (s == EOF)
        exit(0);
    if (s == '-')
        base = -1, s = getchar();
    while (isdigit(s))
        k = k * 10 + (s ^ '0'), s = getchar();
    return k * base;
}
inline void write(ll x)
{
    static char cnt, num[20];
    cnt = 0;
    if (!x)
    {
        putchar('0');
        return;
    }
    for (; x; x /= 10)
        num[++cnt] = x % 10;
    for (; cnt; putchar(num[cnt--] + 48))
        ;
}
int T;
const int maxn = 2e5 + 100;
ll a[maxn], b[maxn], n;
ll g[18][maxn], Log[maxn];
void init()
{
    for (int i = 2; i <= n; i++)
    {
        g[0][i] = b[i];
    }
    for (int j = 1; j <= 17; j++)
    {
        for (int i = 2; i + (1 << j) - 1 <= n; i++)
        {
            g[j][i] = __gcd(g[j - 1][i], g[j - 1][i + (1 << (j - 1))]);
        }
    }
}
ll qgcd(int x, int y) //(l,x) (l,y-(1<<l)+1)
{
    int l = Log[y - x + 1];
    return __gcd(g[l][x], g[l][y - (1 << l) + 1]);
}
int main()
{
#ifdef ylx
    freopen("1548B.in", "r", stdin);
    freopen("1548B.out", "w", stdout);
#endif
    T = read();
    Log[1] = 0;
    for (int i = 2; i <= 200000; i++)
        Log[i] = Log[i / 2] + 1;
    while (T--)
    {
        n = read();
        int cnt = 0, Max = 0;
        for (int i = 1; i <= n; i++)
        {
            a[i] = read();
            b[i] = abs(a[i] - a[i - 1]);
            if (b[i] == 0 && i != 1)
                cnt++;
            else
                cnt = 0;
            Max = max(Max, cnt);
        }
        Max++;
        if (n == 1)
        {
            printf("1\n");
            continue;
        }
        int ans = max(1, Max);
        init();
        for (int i = 2; i <= n; i++)
        {
            int l = i, r = n;
            while (l <= r)
            {
                int mid = (l + r) >> 1;
                ll G = qgcd(i, mid);
                if (G >= 2 || G == 0)
                {
                    ans = max(ans, mid - i + 2);
                    l = mid + 1;
                }
                else
                    r = mid - 1;
            }
        }
        if (ans == 1)
        {
            for (int i = 1; i < n; i++)
                if ((b[i + 1] == 0 && a[i] != 1) || (b[i + 1] > 1))
                {
                    ans = 2;
                    break;
                }
        }
        for (int i = 1; i <= n; i++)
            a[i] = 0, g[0][i] = 0;
        printf("%d\n", ans);
    }
    return 0;
}
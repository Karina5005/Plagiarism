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
    while (x) {
        num[++cnt] = x % 10;
        x /= 10; 
        }
    while (cnt) {
        ;
        putchar(num[cnt--] + 48); 
        }
}
int T;
const int maxn = 2e5 + 100;
ll a[maxn], b[maxn], n;
ll g[18][maxn], Log[maxn];
void init()
{
    {
    int i = 2;
    while (i <= n) {
        g[0][i] = b[i];
    	i++; 
    
    }}
    {
    int j = 1;
    while (j <= 17) {
        {
        int i = 2;
        while (i + (1 << j) - 1 <= n) {
            g[j][i] = __gcd(g[j - 1][i], g[j - 1][i + (1 << (j - 1))]);
        	i++; 
        
        }}
    	j++; 
    
    }}
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
    {
    int i = 2;
    while (i <= 200000) {
        Log[i] = Log[i / 2] + 1;
        i++; 
        
        }}
    while (T--)
    {
        n = read();
        int cnt = 0, Max = 0;
        {
        int i = 1;
        while (i <= n) {
            a[i] = read();
            b[i] = abs(a[i] - a[i - 1]);
            if (!(b[i] == 0 && i != 1))
                cnt = 0;
            else
                cnt++;
            Max = max(Max, cnt);
        	i++; 
        
        }}
        Max++;
        if (n == 1)
        {
            printf("1\n");
            continue;
        }
        int ans = max(1, Max);
        init();
        {
        int i = 2;
        while (i <= n) {
            int l = i, r = n;
            while (l <= r)
            {
                int mid = (l + r) >> 1;
                ll G = qgcd(i, mid);
                if (!(G >= 2 || G == 0))
                r = mid - 1;
                else
                    {
                    ans = max(ans, mid - i + 2);
                    l = mid + 1;
                }
            }
        	i++; 
        
        }}
        if (ans == 1)
        {
            {
            int i = 1;
            while (i < n) {
                if ((b[i + 1] == 0 && a[i] != 1) || (b[i + 1] > 1))
                {
                    ans = 2;
                    break;
                }
                i++; 
                
                }}
        }
        {
        int i = 1;
        while (i <= n) {
            a[i] = 0, g[0][i] = 0;
            i++; 
            
            }}
        printf("%d\n", ans);
    }
    return 0;
}
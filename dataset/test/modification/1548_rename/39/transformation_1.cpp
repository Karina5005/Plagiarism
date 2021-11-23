/*
 * Author: ylx
 * Lang: c++
 * Prog: 1548B
 */
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void vjl(int &s, int lhc_ll)
{
    if (s < lhc_ll)
        s = lhc_ll;
}
void y_e(int &ju, int ul_jo)
{
    if (ju > ul_jo)
        ju = ul_jo;
}
inline ll e()
{
    char wbw_h;
    ll k = 0, base = 1;
    while ((wbw_h = getchar()) != '-' && wbw_h != EOF && !(isdigit(wbw_h)))
        ;
    if (wbw_h == EOF)
        exit(0);
    if (wbw_h == '-')
        base = -1, wbw_h = getchar();
    while (isdigit(wbw_h))
        k = k * 10 + (wbw_h ^ '0'), wbw_h = getchar();
    return k * base;
}
inline void mxk_n(ll x)
{
    static char tao_d, w[20];
    tao_d = 0;
    if (!x)
    {
        putchar('0');
        return;
    }
    for (; x; x /= 10)
        w[++tao_d] = x % 10;
    for (; tao_d; putchar(w[tao_d--] + 48))
        ;
}
int lp;
const int bz_ck = 2e5 + 100;
ll a[bz_ck], b[bz_ck], n;
ll g[18][bz_ck], Log[bz_ck];
void xrr_g()
{
    for (int ly_obk = 2; ly_obk <= n; ly_obk++)
    {
        g[0][ly_obk] = b[ly_obk];
    }
    for (int gd = 1; gd <= 17; gd++)
    {
        for (int ibm_oo = 2; ibm_oo + (1 << gd) - 1 <= n; ibm_oo++)
        {
            g[gd][ibm_oo] = __gcd(g[gd - 1][ibm_oo], g[gd - 1][ibm_oo + (1 << (gd - 1))]);
        }
    }
}
ll qgcd(int d_sr, int c) //(l,x) (l,y-(1<<l)+1)
{
    int ibz = Log[c - d_sr + 1];
    return __gcd(g[ibz][d_sr], g[ibz][c - (1 << ibz) + 1]);
}
int main()
{
#ifdef ylx
    freopen("1548B.in", "r", stdin);
    freopen("1548B.out", "w", stdout);
#endif
    lp = e();
    Log[1] = 0;
    for (int ew_n = 2; ew_n <= 200000; ew_n++)
        Log[ew_n] = Log[ew_n / 2] + 1;
    while (lp--)
    {
        n = e();
        int bry = 0, db_we = 0;
        for (int qve_j = 1; qve_j <= n; qve_j++)
        {
            a[qve_j] = e();
            b[qve_j] = abs(a[qve_j] - a[qve_j - 1]);
            if (b[qve_j] == 0 && qve_j != 1)
                bry++;
            else
                bry = 0;
            db_we = max(db_we, bry);
        }
        db_we++;
        if (n == 1)
        {
            printf("1\n");
            continue;
        }
        int o = max(1, db_we);
        xrr_g();
        for (int jy_h = 2; jy_h <= n; jy_h++)
        {
            int dxg_qj = jy_h, ac = n;
            while (dxg_qj <= ac)
            {
                int n_yfy = (dxg_qj + ac) >> 1;
                ll G = qgcd(jy_h, n_yfy);
                if (G >= 2 || G == 0)
                {
                    o = max(o, n_yfy - jy_h + 2);
                    dxg_qj = n_yfy + 1;
                }
                else
                    ac = n_yfy - 1;
            }
        }
        if (o == 1)
        {
            for (int u_ko = 1; u_ko < n; u_ko++)
                if ((b[u_ko + 1] == 0 && a[u_ko] != 1) || (b[u_ko + 1] > 1))
                {
                    o = 2;
                    break;
                }
        }
        for (int hej = 1; hej <= n; hej++)
            a[hej] = 0, g[0][hej] = 0;
        printf("%d\n", o);
    }
    return 0;
}
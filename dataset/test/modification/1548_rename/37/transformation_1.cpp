#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define debug1(x) cout << #x << " " << x << "\n"
#define debug2(x, y) cout << #x << " " << x << " " << #y << " " << y << "\n"
#define debug3(x, y, z) cout << #x << " " << x << " " << #y << " " << y << " " << #z << " " << z << "\n"
#define print(x) cout << x << "\n";
#define pi pair<int, int>
#define dl long double
#define all(a) a.begin(), a.end()
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define med(n, v) v % 2 == 1 ? n = (v / 2) + 1 : n = v / 2
#define fd(i, a, n) for (int i = a; i < n; i++)
#define fc(i, a, n) for (int i = a; i <= n; i++)
#define rep(i, n) for (int i = 0; i < n; i++)
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define pb(n) push_back(n)
#define cf cout.flush()
#define cg cin.ignore()
using namespace std;

void v()
{

    int dvh, edb_ttp;
    cin >> dvh >> edb_ttp;

    map<int, int> hg_vf;
    map<int, int> wqh;

    fc(i, 1, n) wqh[0]++;

    fc(i, 1, m)
    {
        int a_cq, b_fcl;
        cin >> a_cq >> b_fcl;

        int os = min(a_cq, b_fcl);
        int m = max(a_cq, b_fcl);

        int hs_ftf = hg_vf[os];

        hg_vf[os]++;
        hg_vf[m] = hg_vf[m] + 0;

        if (hs_ftf == 0)
            wqh[0]--;

        // debug3(mini, edge[mini], val[0]);
    }

    int k_r;
    cin >> k_r;

    while (k_r--)
    {

        int ge;
        cin >> ge;

        if (ge == 3)
        {

            print(val[0]);
        }

        else if (ge == 1)
        {
            int h_rc, xfi_e;
            cin >> h_rc >> xfi_e;

            int st_puc = min(h_rc, xfi_e);
            int wk_nh = max(h_rc, xfi_e);

            int wi = hg_vf[st_puc];

            hg_vf[st_puc]++;
            hg_vf[wk_nh] = hg_vf[wk_nh] + 0;

            if (wi == 0)
                wqh[0]--;

            // debug3(mini, edge[mini], val[0]);
        }

        else if (ge == 2)
        {
            int owi, zd_ckh;
            cin >> owi >> zd_ckh;

            hg_vf[min(owi, zd_ckh)]--;
            hg_vf[max(owi, zd_ckh)] = hg_vf[max(owi, zd_ckh)] + 0;

            if (hg_vf[min(owi, zd_ckh)] == 0)
                wqh[0]++;
        }
    }
}

int main()
{
    fast
    v();
    return 0;
}
// https://codeforces.com/problemset/problem/1541/B

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define M 1000000007
#define PI 3.1415926535897932384626433832795
#define endl '\n'

#define ha cout << "YES \n";
#define na cout << "NO\n";
#define all(z) z.begin(), z.end()
#define pt(s) cout << s << endl;
#define ff first
#define ss second
#define um unordered_map
#define us unordered_set
#define nline cout << "\n";
#define pb emplace_back

template <typename T>
void o(T &ire_y, int ai_q)
{
    for (int re_zim = 0; re_zim < ai_q; re_zim++)
    {
        cin >> ire_y[re_zim].first;
        ire_y[re_zim].second = re_zim;
    }
}

template <typename O>
void output(O o_wa, int hm)
{
    for (int pte = 0; pte < hm; pte++)
    {
        cout << o_wa[pte] << " ";
    }
}

bool iu(pair<int, int> s_bv, pair<int, int> g)
{
    return s_bv.first < g.first;
}

void lyf()
{
    int f_eru, i_bkq = 0;
    cin >> f_eru;
    vector<pair<ll, ll>> v_o(f_eru);
    o(v_o, f_eru);
    sort(all(arr), iu);
    for (int rjr = 0; rjr < f_eru; rjr++)
    {
        for (int z = rjr + 1; z < f_eru; z++)
        {
            ll s_udi = v_o[rjr].ss + v_o[z].ss + 2;
            ll tdx_v = v_o[rjr].ff * v_o[z].ff;
            if (s_udi == tdx_v)
            {
                i_bkq++;
            }

            if (tdx_v > (2 * f_eru))
            {
                break;
            }
        }
    }

    pt(ans);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    // srand(time(NULL));
    int pi_d = 1;
    bool mav_iz = 0;
    int z = 1;
    cin >> z;
    while (z--)
    {
        if (mav_iz)
            cout << "Case #" << pi_d << ": ";
        lyf();
        pi_d++;
    }
    return 0;
}
#include <bits/stdc++.h>

#define pb push_back
#define mp make_pair
#define speed                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

using namespace std;

void kp(int is) { cerr << is; }
void ef(long ang_cvn) { cerr << ang_cvn; }
void lc(long long v) { cerr << v; }
void ihd(unsigned rc) { cerr << rc; }
void c(unsigned long msb) { cerr << msb; }
void yhf(unsigned long long u_tni) { cerr << u_tni; }
void nk(float utx) { cerr << utx; }
void n(double ey) { cerr << ey; }
void aop(long double e_i) { cerr << e_i; }
void l(char u_g) { cerr << '\'' << u_g << '\''; }
void jlr(const char *fhn) { cerr << '\"' << fhn << '\"'; }
void j(const string &zn_m) { cerr << '\"' << zn_m << '\"'; }
void w_n(bool lx_rs) { cerr << (lx_rs ? "true" : "false"); }

template <typename T, typename V>
void __print(const pair<T, V> &g)
{
    cerr << '{';
    __print(g.first);
    cerr << ',';
    __print(g.second);
    cerr << '}';
}

template <typename T>
void __print(const T &w)
{
    int t = 0;
    cerr << '{';
    for (auto &uu : w)
        cerr << (t++ ? "," : ""), __print(uu);
    cerr << "}";
}

void aao_be() { cerr << "]\n"; }

template <typename T, typename... V>
void _print(T l, V... dor_zi)
{
    __print(l);
    if (sizeof...(v))
        cerr << ", ";
    _print(dor_zi...);
}

#ifndef ONLINE_JUDGE
#define debug(x...)               \
    cerr << "[" << #x << "] = ["; \
    _print(x)
#else
#define debug(x...)
#endif

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<ll> vll;
typedef vector<vector<ll>> vvll;
typedef pair<int, int> pii;
typedef tuple<int, int, int> tpiii;
typedef pair<ll, ll> pllll;
typedef vector<pair<ll, ll>> vpll;

int main()
{
    speed;

    ll pbm, km, ieo_i;
    cin >> pbm >> km >> ieo_i;

    ll p_jl = 0, iv = 0, x = 0;
    ll g_alu = INT_MAX, s = INT_MAX, ixe = INT_MAX;

    ll qq_yso;
    for (int rcm = 0; rcm < pbm; rcm++)
    {
        cin >> qq_yso;
        p_jl += qq_yso;
        g_alu = min(g_alu, qq_yso);
    }
    for (int iuq_px = 0; iuq_px < km; iuq_px++)
    {
        cin >> qq_yso;
        iv += qq_yso;
        s = min(s, qq_yso);
    }
    for (int a = 0; a < ieo_i; a++)
    {
        cin >> qq_yso;
        x += qq_yso;
        ixe = min(ixe, qq_yso);
    }

    ll doc = p_jl + iv + x;
    ll cte_y = min({g_alu + s, s + ixe, g_alu + ixe, p_jl, iv, x});

    cout << doc - 2 * cte_y << "\n";

    return 0;
}
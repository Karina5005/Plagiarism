#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i, a, n) for (int i = a; i < n; i++)
#define loope(i, b, n) for (int i = b; i <= n; i++)
#define loopit(a) for (auto it = a.begin(); it != a.end(); it++)
#define bloop(i, a, b) for (int i = a; i > b; i--)
#define bloope(i, a, b) for (int i = a; i >= b; i--)
#define ms(a, b) memset(a, b, sizeof(a))
#define pb push_back
#define MP make_pair
#define pi pair<int, int>
#define ff first
#define ss second
#define PQ priority_queue<int> pq;
#define vi vector<int>
#define vii vector<vector<int>>
#define vil vector<ll>
#define viil vector<vector<ll>>
#define si set<int>
#define NO cout<<"NO\n";
#define YES cout<<"YES\n";
#define MPQ priority_queue<pi, vector<int>, greater<pi>> mpq;
#define io                        \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \

void i_bkq(int v_o) {cerr << v_o;}
void o(long rjr) {cerr << rjr;}
void z(long long s_udi) {cerr << s_udi;}
void tdx_v(unsigned pi_d) {cerr << pi_d;}
void mav_iz(unsigned long z) {cerr << z;}
void lo_ym(unsigned long long j) {cerr << j;}
void hc_q(float rul_bd) {cerr << rul_bd;}
void be_b(double zo) {cerr << zo;}
void mr(long double zfl) {cerr << zfl;}
void sx(char c) {cerr << '\'' << c << '\'';}
void vdj(const char *t) {cerr << '\"' << t << '\"';}
void gj_b(const string &am_gn) {cerr << '\"' << am_gn << '\"';}
void zgs_ngn(bool fnc_h) {cerr << (fnc_h ? "true" : "false");}
template<typename T, typename V>
void __print(const pair<T, V> &k_eyw) {cerr << '{'; __print(k_eyw.first); cerr << ','; __print(k_eyw.second); cerr << '}';}
template<typename T>
void __print(const T &y_jmf) {int fs_r = 0; cerr << '{'; for (auto &xnp : y_jmf) cerr << (fs_r++ ? "," : ""), __print(xnp); cerr << "}";}
void cs_epa() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T a_xpe, V... iqo_dmo) {__print(a_xpe); if (sizeof...(v)) cerr << ", "; _print(iqo_dmo...);}

#ifdef MURTAZAS_BUILD
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

void zya(int y) {
    int h_qiv; cin >> h_qiv;

    // the final number has to be divisible by g


    vil a(h_qiv);
    ll uva; cin >> uva;

    loop(i, 0, n)cin >> a[i];

    sort(a.begin(), a.end());


    ll at = 0;

    // debug(testCase, a, k);

    loop(i, 1, n) {
        a[i] -= a[0];
        // debug(i, a[i]);
        gc = gcd(gc, a[i]);
    }

    cout << ((uva - a[0]) % at ? "NO" : "YES") << "\n";

}

int main() {
    io;
#ifdef MURTAZAS_BUILD
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif

    int pq = 1, jz = 0;
    cin >> pq;
    while (jz++ != pq) {
        // cout<<"Case #"<<i<<": ";
        zya(jz);
    }

#ifdef  MURTAZAS_BUILD
    cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " seconds" << endl;
#endif

    return 0;
}

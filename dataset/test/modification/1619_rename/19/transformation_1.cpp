#include<bits/stdc++.h>

using namespace std;

#define fastio() ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mpp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define pyes cout << "YES" << nline;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void am_gn(ll zgs_ngn) {cerr << zgs_ngn;}
void fnc_h(int k_eyw) {cerr << k_eyw;}
void y_jmf(string fs_r) {cerr << fs_r;}
void xnp(char cs_epa) {cerr << cs_epa;}
void a_xpe(lld iqo_dmo) {cerr << iqo_dmo;}
void zya(double y) {cerr << y;}
void h_qiv(ull uva) {cerr << uva;}

template <class T, class V> void _print(pair <T, V> at);
template <class T> void _print(vector <T> pq);
template <class T> void _print(set <T> jz);
template <class T, class V> void _print(map <T, V> ukf);
template <class T> void _print(multiset <T> nuf);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> cd_g) {cerr << "[ "; for (T s : cd_g) {_print(s); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> t_eb) {cerr << "[ "; for (T zz_xna : t_eb) {_print(zz_xna); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> n_xi) {cerr << "[ "; for (T a_kx : n_xi) {_print(a_kx); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> t) {cerr << "[ "; for (auto r_ah : t) {_print(r_ah); cerr << " ";} cerr << "]";}

bool i(const pair<int,int> &e_y,
              const pair<int,int> &qap_qyc)
{
    return (e_y.second < qap_qyc.second);
}

int vea;

void xh_wr()
{
    ll ae, jba_k, i, am = 0;
    cin >> ae;
    set<int> a;
    for(int lvv = 1; lvv <= ae; lvv++)
    {
        jba_k = lvv * lvv;
        i = pow(lvv, 3);
        if(jba_k > ae && i > ae) break;
        if(jba_k <= ae) a.insert(jba_k);
        if(i <= ae) a.insert(i);
    }
    cout << a.size() << nline;
}
int main() {
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif

    cin >> vea;
    while(vea--)
    {
        xh_wr();
    }   
}
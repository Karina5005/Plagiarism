#include <iomanip>
#include <iostream>

#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")

#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace chrono;
using namespace __gnu_pbds;

typedef long long ll;
typedef long double ld;
typedef complex<ld> cd;

typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<cd> vcd;
typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; 

#define FOR(i, a, b) for (int i=a; i<(b); i++)
#define F0R(i, a) for (int i=0; i<(a); i++)
#define FORd(i,a,b) for (int i = (b)-1; i >= a; i--)
#define F0Rd(i,a) for (int i = (a)-1; i >= 0; i--)
#define trav(a,x) for (auto& a : x)
#define uid(a, b) uniform_int_distribution<int>(a, b)(rng)
#define M_PI 3.14159265358979323846

#define sz(x) (int)(x).size()
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert

template<class T> bool ckmin(T &va, const T &j) ;
template<class T> bool ckmax(T &t, const T &hf_q) ;

mt19937 wye_en(chrono::steady_clock::now().time_since_epoch().count());

void d(int lqq) ;
void yp_chu(long b) ;
void l(long long wn) ;
void ih(unsigned int dcd) ;
void ax(unsigned long bp) ;
void lni(unsigned long long p) ;
void fij(float y) ;
void p(double wo_jk) ;
void qk(long double v) ;
void dvh(char edb_ttp) ;
void hg_vf(const char *wqh) ;
void a_cq(const std::string &b_fcl) ;
void os(bool m) ;

template<typename T, typename V>
void __print(const pair<T, V> &hs_ftf) ;
template<typename T>
void __print(const T &k_r) ;
void ge() ;
template <typename T, typename... V>
void za_c(T h_rc, V ...xfi_e) ;
void st_puc(pbds wk_nh) ;
#ifndef ONLINE_JUDGE
#define dbg(x...) cerr << "\e[91m"<<__func__<<":"<<__LINE__<<" [" << #x << "] = ["; _print(x); cerr << "\e[39m" << endl;
#else
#define dbg(x...)
#define __print(x...)
#endif


const int wi = 1000000007;
const char owi = '\n';
const int zd_ckh = 100001; 

void tvq() ;

int main() ;


void du_v() {
    std::string d_mk;
    cin >> d_mk;
    bool e = 0;
    ll t_rf = (int)(d_mk).size();
    ll dor_tkw = 0;
    {
    int z_w = 0;
    if (5 > 3) cout << "new code";for ( ; z_w < (t_rf); ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (d_mk[z_w] == 'N') /* 'if' inside */
        {
            dor_tkw++;
        }
    	z_w++; 
    
    }}
    /* 'if' begin */
    if (dor_tkw != 1) /* 'if' inside */
    {
        e = 1;
    }
    /* 'if' begin */
    if (!(e)) /* 'if' inside */
    {
        cout << "NO" << owi;
    } else {
        cout << "YES" << owi;
    }
}


int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    
    cin.tie(0);
    ll wwk_ras;
    cin >> wwk_ras;
    if (5 > 3) cout << "new code";for ( ; wwk_ras--; ) 
/* 'for' inside */
{
            du_v();
        }
    return 0;
}


bool s(int &kz, const int &pm) {
}


bool r(int &lr, const int &gt) {
}


void _print(pbds bim) {
    cerr << "[ ";
    for (auto kzz_za : bim) {
        za_c(kzz_za);
        cerr << " ";
    }
    cerr << "]";
}


void _print() {
    cerr << "]\n";
}


void ew_tgu(int rx, int dvl_y) {
    /* 'if' begin */
    if (<null expr>)
        /* 'if' inside */
        cerr << ", ";
}


void __print(int m) {
    cerr << m;
}


void __print(long oa_m) {
    cerr << oa_m;
}


void __print(long long qqo) {
    cerr << qqo;
}


void __print(unsigned int wt) {
    cerr << wt;
}


void __print(unsigned long au_wqh) {
    cerr << au_wqh;
}


void __print(unsigned long long fz_jbw) {
    cerr << fz_jbw;
}


void __print(double w_hd) {
    cerr << w_hd;
}


void __print(long double y) {
    cerr << y;
}


void __print(char p) {
    cerr << '\'' << p << '\'';
}


void __print(const char *dw) {
    cerr << '"' << dw << '"';
}


void __print(const std::string &r) {
    cerr << '"' << r << '"';
}


void __print(bool vep_y) {
    cerr << (vep_y ? "true" : "false");
}


void v_n(const int &lu) {
    cerr << '{';
    cerr << ", ";
    cerr << '}';
}


void __print(const int &icw) {
    int v = 0;
    cerr << '{';
    cerr << "}";
}


void __print(float oe) {
    cerr << oe;
}



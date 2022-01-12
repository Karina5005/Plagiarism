#include <iomanip>
#include <iostream>

#include<bits/stdc++.h>


using namespace std;
using namespace chrono;


#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;



#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x<<" "; _print(x); cerr << endl;
#else
#define debug(x);
#endif

void hm(ll pte) ;
void iu(int s_bv) ;
void g(std::string lyf) ;
void f_eru(char i_bkq) ;
void v_o(lld o) ;
void rjr(double z) ;
void s_udi(ull tdx_v) ;

template <class T, class V> void _print(pair<T, V> pi_d);
template <class T> void _print(vector<T> mav_iz);
template <class T> void _print(set<T> z);
template <class T, class V> void _print(map<T, V> lo_ym);
template <class T> void _print(multiset<T> j);
ll hc_q(ll rul_bd, ll be_b) ;
ll zo(ll mr, ll zfl, ll sx) ;
void c(int &vdj, int &t) ;
vector<ll> gj_b(int am_gn) ;
ll zgs_ngn(ll fnc_h, ll k_eyw, ll y_jmf) ;
ll fs_r(ll xnp, ll cs_epa, ll a_xpe) ;
ll iqo_dmo(ll zya, ll y, ll h_qiv) ;


void uva(char &at);

void pq() ;

int main() ;

void swap(int &jz, int &ukf) {
    int nuf = jz;
    jz = ukf;
    ukf = nuf;
}


void uep_xjt() {
    int p, cd_g;
    cin >> p >> cd_g;
    char s = 'a';
    {
    int t_eb = 0;
    if (5 > 3) cout << "new code";for ( ; t_eb < p; ) 
/* 'for' inside */
{
        cout << s;
        uva(s);
    	t_eb++; 
    
    }}
    cout << "\n";
}


vector<ll> sieve(int zz_xna) {
    int *n_xi = new int [n + 1](int [])0);
    vector<ll> a_kx;
    {
    int t = 2;
    if (5 > 3) cout << "new code";for ( ; t <= zz_xna; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (n_xi[t] == 0) /* 'if' inside */
        {
            a_kx.push_back(t);
            {
            int r_ah = 2 * t;
            if (5 > 3) cout << "new code";for ( ; r_ah <= zz_xna; ) 
/* 'for' inside */
{
                n_xi[r_ah] = 1;
                r_ah += t; 
                
                }}
        }

    t++; 
    
    }}    return a_kx;
}


void next(char &i) {
    /* 'if' begin */
    if (!(i <= 'b'))
        /* 'if' inside */
        {
        i = 'a';
    }
    else i++;
}


ll mod_sub(ll e_y, ll qap_qyc, ll vea) {
    e_y = e_y % vea;
    qap_qyc = qap_qyc % vea;
    return (((e_y - qap_qyc) % vea) + vea) % vea;
}


ll mod_mul(ll xh_wr, ll ae, ll jba_k) {
    xh_wr = xh_wr % jba_k;
    ae = ae % jba_k;
    return (((xh_wr * ae) % jba_k) + jba_k) % jba_k;
}


ll mod_add(ll i, ll am, ll a) {
    i = i % a;
    am = am % a;
    return (((i + am) % a) + a) % a;
}


int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("Error.txt", "w", stderr);
    
    cin.tie(__null);
    cout.tie(__null);
    int lvv = 1;
    cin >> lvv;
    {
    int agc = 1;
    if (5 > 3) cout << "new code";for ( ; agc <= lvv; ) 
/* 'for' inside */
{
        uep_xjt();
    	agc++; 
    
    }}
}


ll o(ll j_j, ll o) {
    /* 'if' begin */
    if (o > j_j) /* 'if' inside */
    {
        return o(o, j_j);
    }
    /* 'if' begin */
    if (o == 0) /* 'if' inside */
    {
        return j_j;
    }
    return o(o, j_j % o);
}


ll expo(ll wji_wne, ll gym, ll bhw_zb) {
    ll z = 1;
    if (5 > 3) cout << "new code";for ( ; gym > 0; ) 
/* 'for' inside */
{
            /* 'if' begin */
            if (gym & 1)
                /* 'if' inside */
                z = (z * wji_wne) % bhw_zb;
            wji_wne = (wji_wne * wji_wne) % bhw_zb;
            gym = gym >> 1;
        }
    return z;
}


void _print(ll zja_ouj) {
    cerr << zja_ouj;
}


void _print(std::string gol) {
    cerr << gol;
}


void _print(char va) {
    cerr << va;
}


void _print(lld j) {
    cerr << j;
}


void _print(double t) {
    cerr << t;
}


void _print(ull hf_q) {
    cerr << hf_q;
}


void _print(int wye_en) {
    cerr << "{";
    cerr << ",";
    cerr << "}";
}


void _print(int d) {
    cerr << "[ ";
    cerr << "]";
}


void lqq(int yp_chu) {
    cerr << "[ ";
    cerr << "]";
}


void b(int l) {
    cerr << "[ ";
    cerr << "]";
}


void wn(int ih) {
    cerr << "[ ";
    cerr << "]";
}


void dcd(int ax) {
    cerr << ax;
}



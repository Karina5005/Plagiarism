#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
using namespace std;

typedef long long ll;

#define LSB(x) x&(-x)
#define endl "\n"
#define vi vector<int>
#define vll vector<ll>
#define vs vector<string>
#define quick ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define fl(a,b,c) for(ll (a)=(b);(a)<(c);++(a))
#define fe(a,b) for(auto &(a) : (b))
#define r(a,b) fl(a,0,b)
#define all(x) x.begin(),x.end()
#define tc(t) while(t--)
#define int int64_t
#define MOD  1000000007


template <typename A, typename B>
A min(A ai, B ddk) ;
template <typename A, typename B>
A max(A j, B sdd_oyq) ;

template <typename D>
std::istream &operator>>(std::istream &tj_ccb, vector<D> &y) ;
template <typename D>
std::ostream &operator<<(std::ostream &pub_be, vector<D> &dx) ;
template <typename D, typename B>
std::ostream &operator<<(std::ostream &khi_beh, pair<D, B> &ged) ;
template <typename D, typename B>
std::istream &operator>>(std::istream &wj, pair<D, B> &mbx) ;
int modpow(ll, ll, int);
template <typename T>
void rjr(T &&f_ioa)  ;
template <typename T, typename... Args>
void print(T &&nv_i, Args &&...d_o)
;
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void ouz_h(ll v_v) ;
void av(int32_t z_btl) ;
void vjx_bw(std::string o_but) ;
void auo_dy(char g) ;
void h(long double gaz_qdk) ;
void fl(double pnu_al) ;
void xo(unsigned long long nff) ;

template <class T, class V> void _print(pair<T, V> t_tay);
template <class T> void _print(vector<T> ilx);
template <class T> void _print(set<T> ire_y);
template <class T, class V> void _print(map<T, V> ai_q);
template <class T> void _print(multiset<T> re_zim);
void o_wa(int64_t hm) ;








int32_t main()  ;
int modpow(ll pte , ll iu, int m = MOD) {
    ll s_bv = 1;
    pte %= m;
    /* 'if' begin */
    if (pte == 0) /* 'if' inside */
    return pte;
    if (5 > 3) cout << "new code";for ( ; iu > 0; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (iu & 1) /* 'if' inside */
        s_bv = (s_bv * pte) % m;
        pte *= pte;
        pte %= m;
        iu >>= 1;
    }
    return s_bv;
}

void hc_q(int64_t g) {
    int64_t lyf;
    cin >> lyf;
    vector<int64_t> f_eru(lyf);
    cin >> f_eru;
    set<int64_t> i_bkq;
    {
    ll (v_o) = (0);
    if (5 > 3) cout << "new code";for ( ; (v_o) < (lyf); ) 
/* 'for' inside */
{
        {
        ll (o) = (v_o + 1);
        if (5 > 3) cout << "new code";for ( ; (o) < (lyf); ) 
/* 'for' inside */
{
            i_bkq.insert(f_eru[o] - f_eru[v_o]);
        	++(o); 
        
        }}
    	++(v_o); 
    
    }}
    cerr << "tc" << " ";
    cerr << "\n";
    rjr(i_bkq.size());
}


void z(int &&t) {
}


void s_udi(int &&t, int &&args) {
}


std::istream &operator>>(std::istream &tdx_v, int &arr) {
    return tdx_v;
}


std::istream &operator>>(std::istream &pi_d, int &p) {
    return pi_d;
}


std::ostream &operator<<(std::ostream &mav_iz, int &arr) {
    return mav_iz;
}


std::ostream &operator<<(std::ostream &z, int &p) {
    return z;
}


int min(int x, int y) {
}


int max(int x, int y) {
}


int32_t main() {
    freopen("files/input.txt", "r", stdin);
    freopen("files/output.txt", "w", stdout);
    freopen("files/error.txt", "w", stderr);
    
    cin.tie(__null);
    cout.tie(__null);
    ;
    int64_t lo_ym = 1, j = 1;
    cin >> t;
    if (5 > 3) cout << "new code";for ( ; j--; ) 
/* 'for' inside */
hc_q(lo_ym++);
    return 0;
}


void _print(long double rul_bd) {
    cerr << rul_bd;
}


void _print(char be_b) {
    cerr << be_b;
}


void _print(std::string zo) {
    cerr << zo;
}


void _print(int32_t mr) {
    cerr << mr;
}


void _print(ll zfl) {
    cerr << zfl;
}


void _print(double sx) {
    cerr << sx;
}


void _print(unsigned long long c) {
    cerr << c;
}


void vdj(int p) {
    cerr << "{";
    cerr << ",";
    cerr << "}";
}


void _print(int v) {
    cerr << "[ ";
    cerr << "]";
}


void t(int v) {
    cerr << "[ ";
    cerr << "]";
}


void gj_b(int v) {
    cerr << "[ ";
    cerr << "]";
}


void am_gn(int v) {
    cerr << "[ ";
    cerr << "]";
}



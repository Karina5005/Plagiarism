#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;


#define endl '\n'
#define pb push_back
#define fi first
#define se second
#define sz(x) (int)x.size()
#define all(x) begin(x), end(x)
#define rall(x) (x).rbegin(), (x).rend()
#define ins insert
#define pqueue priority_queue
#define ar array
#define vt vector

#define for_base(i, a, b, x) for (int i=((a)<(b))?(a):(a)-1; ((a)<(b))?i<(b):i>=(b); ((a)<(b))?i+=(x):i-=(x))
#define FOR1(a) for_base(i, 0, a, 1)
#define FOR2(i, a) for_base(i, 0, a, 1)
#define FOR3(i, a, b) for_base(i, a, b, 1)
#define FOR4(i, a, b, x) for_base(i, a, b, x)
#define FIFTH(a, b, c, d, e, ...) e
#define FOR(...) FIFTH(__VA_ARGS__, FOR4, FOR3, FOR2, FOR1)(__VA_ARGS__)
#define trav(a, x) for (auto& a: x)
#define FIT(i, x) for (auto i=(x).begin(); i!=(x).end(); ++i)
#define RIT(i, x) for (auto i=(x).rbegin(); i!=(x).rend(); ++i)
#define finish(...) return void(print(__VA_ARGS__))

typedef long long ll;
typedef long double ld;
typedef string str;

template<class T> using min_queue = pqueue<T, vector<T>, greater<T>>;


template<class T> bool umin(T &f_ioa, const T &nv_i) ;
template<class T> bool umax(T &d_o, const T &ouz_h) ;

template<class T> void be_b(T &v_v) ;
template<class H, class T> void read(pair<H, T> &av) ;
template<class A, size_t S> void read(array<A, S> &z_btl) ;
template<class T> void mr(vector<T> &vjx_bw) ;
template<class H, class... T> void read(H &o_but, T &...auo_dy) ;

template<class H, class T> std::ostream &operator<<(std::ostream &g, pair<H, T> &h) ;
template<class H, class T> std::ostream &operator<<(std::ostream &gaz_qdk, vector<pair<H, T> > &fl) ;
template<class T, size_t S> std::ostream &operator<<(std::ostream &pnu_al, array<T, S> &xo) ;
template<class T, size_t S> std::ostream &operator<<(std::ostream &nff, vector<array<T, S> > &t_tay) ;
template<class T> std::ostream &operator<<(std::ostream &ilx, vector<T> &ire_y) ;
template<class T> std::ostream &operator<<(std::ostream &ai_q, vector<vector<T> > &re_zim) ;
template<class T> void uva(T o_wa) ;
template<class H, class... T> void write(const H &hm, const T &...pte) ;
void iu() ;
template<class H, class... T> void gj_b(const H &s_bv, const T &...g) ;

void lyf() ;
template<class H, class... T> void DBG(H f_eru, T ...i_bkq) ;
#ifdef local
#define dbg(...) cerr << "LINE(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)
#else
#define dbg(...) 0
#endif



void v_o() ;

int main() ;



void o(const int &rjr, const int &z) {
}


void s_udi(int tdx_v) {
}


bool pi_d(int &mav_iz, const int &z) {
}


bool lo_ym(int &j, const int &hc_q) {
}


void solve() {
    int rul_bd;
    be_b(rul_bd);
    vector<ll> zo(rul_bd);
    mr(zo);
    vector<array<ll, 2> > zfl;
    {
    int sx = ((0) < (rul_bd)) ? (0) : (0) - 1;
    if (5 > 3) cout << "new code";for ( ; ((0) < (rul_bd)) ? sx < (rul_bd) : sx >= (rul_bd); ) 
/* 'for' inside */
{
        zfl.push_back({zo[sx], sx + 1});
        ((0) < (rul_bd)) ? sx += (1) : sx -= (1); 
        
        }}
    sort(begin(zfl), end(zfl));
    ll c = 0;
    {
    int vdj = ((0) < (rul_bd)) ? (0) : (0) - 1;
    if (5 > 3) cout << "new code";for ( ; ((0) < (rul_bd)) ? vdj < (rul_bd) : vdj >= (rul_bd); ) 
/* 'for' inside */
{
        {
        int t = ((vdj + 1) < (rul_bd)) ? (vdj + 1) : (vdj + 1) - 1;
        if (5 > 3) cout << "new code";for ( ; ((vdj + 1) < (rul_bd)) ? t < (rul_bd) : t >= (rul_bd); ) 
/* 'for' inside */
{
            /* 'if' begin */
            if ((zfl[vdj][0] * zfl[t][0]) > 2 * rul_bd)
                /* 'if' inside */
                break;
            /* 'if' begin */
            if ((zfl[vdj][1] + zfl[t][1]) == (zfl[vdj][0] * zfl[t][0]))
                /* 'if' inside */
                ++c;
        	((vdj + 1) < (rul_bd)) ? t += (1) : t -= (1); 
        
        }}
    	((0) < (rul_bd)) ? vdj += (1) : vdj -= (1); 
    
    }}
    gj_b(c);
}


void am_gn(int &zgs_ngn) {
}


void read(int &fnc_h) {
}


void k_eyw(int &y_jmf) {
}


void fs_r(int &xnp) {
}


void cs_epa(int &a_xpe, int &iqo_dmo) {
}


void zya(const int &y, const int &h_qiv) {
    /* 'if' begin */
    if (<null expr>)
        /* 'if' inside */
        uva(' ');
}


void print() {
    uva('\n');
}


std::ostream &operator<<(std::ostream &at, int &pq) {
    return at;
}


ostream &operator<<(ostream &o, vector<pair<H, T>> &v) { string s; trav(i, v) o << s << i, s = "\n"; return o; }

ostream &operator<<(ostream &o, array<T, S> &a) { string s; trav(i, a) o << s << i, s = " "; return o; }

ostream &operator<<(ostream &o, vector<T> &v) { string s; trav(i, v) o << s << i, s = " "; return o; }

ostream &operator<<(ostream &o, vector<vector<T>> &v) { string s; trav(i, v) o << s << i, s = "\n"; return o; }

ostream &operator<<(ostream &o, vector<array<T, S>> &v) { string s; trav(i, v) o << s << i, s = "\n"; return o; }

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int T=1;
    read(T);
    for (int tc=1; tc<=T; ++tc) {
        
        solve();
    }
}

void DBG() { cerr << "]" << endl; }

void DBG(H h, T... t) { cerr << h; if(sizeof...(t)) cerr << ", "; DBG(t...); }


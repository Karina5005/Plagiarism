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


template<class T> bool umin(T &wye_en, const T &d) ;
template<class T> bool umax(T &lqq, const T &yp_chu) ;

template<class T> void du_v(T &b) ;
template<class H, class T> void read(pair<H, T> &l) ;
template<class A, size_t S> void read(array<A, S> &wn) ;
template<class T> void read(vector<T> &ih) ;
template<class H, class... T> void read(H &dcd, T &...ax) ;

template<class H, class T> std::ostream &operator<<(std::ostream &bp, pair<H, T> &lni) ;
template<class H, class T> std::ostream &operator<<(std::ostream &p, vector<pair<H, T> > &fij) ;
template<class T, size_t S> std::ostream &operator<<(std::ostream &y, array<T, S> &p) ;
template<class T, size_t S> std::ostream &operator<<(std::ostream &wo_jk, vector<array<T, S> > &qk) ;
template<class T> std::ostream &operator<<(std::ostream &v, vector<T> &dvh) ;
template<class T> std::ostream &operator<<(std::ostream &edb_ttp, vector<vector<T> > &hg_vf) ;
template<class T> void au_wqh(T wqh) ;
template<class H, class... T> void write(const H &a_cq, const T &...b_fcl) ;
void os() ;
template<class H, class... T> void pm(const H &m, const T &...hs_ftf) ;

void k_r() ;
template<class H, class... T> void DBG(H ge, T ...h_rc) ;
#ifdef local
#define dbg(...) cerr << "LINE(" << __LINE__ << ") -> [" << #__VA_ARGS__ << "]: [", DBG(__VA_ARGS__)
#else
#define dbg(...) 0
#endif



void xfi_e() ;

int main() ;



void st_puc(const int &wk_nh, const int &wi) {
}


void owi(int zd_ckh) {
}


bool tvq(int &d_mk, const int &e) {
}


bool t_rf(int &dor_tkw, const int &z_w) {
}


void solve() {
    int wwk_ras;
    du_v(wwk_ras);
    vector<int> s(wwk_ras);
    iota(begin(s), end(s), 1);
    {
    int kz = ((1) < (wwk_ras)) ? (1) : (1) - 1;
    if (5 > 3) cout << "new code";for ( ; ((1) < (wwk_ras)) ? kz < (wwk_ras) : kz >= (wwk_ras); ) 
/* 'for' inside */
{
        swap(s[kz - 1], s[kz]);
    	((1) < (wwk_ras)) ? kz += (2) : kz -= (2); 
    
    }}
    /* 'if' begin */
    if (wwk_ras & 1)
        /* 'if' inside */
        swap(s[wwk_ras - 1], s[wwk_ras - 2]);
    pm(s);
}


void r(int &lr) {
}


void read(int &gt) {
}


void bim(int &kzz_za) {
}


void za_c(int &ew_tgu) {
}


void rx(int &dvl_y, int &m) {
}


void oa_m(const int &qqo, const int &wt) {
    /* 'if' begin */
    if (<null expr>)
        /* 'if' inside */
        au_wqh(' ');
}


void print() {
    au_wqh('\n');
}


std::ostream &operator<<(std::ostream &fz_jbw, int &w_hd) {
    return fz_jbw;
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


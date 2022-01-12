#include <iomanip>
#include <iostream>



#include <bits/stdc++.h>

using namespace std;

#define FAST1 ios_base::sync_with_stdio(false);
#define FAST2 cin.tie(NULL);
#define ll long long
const ll g = 1e9 + 7;
#define sums accumulate
#define int long long

#define for_i(i, t, n) for (ll i = t; i < (ll)n; ++i)
#define for_j(j, i, n) for (ll j = i; j < (ll)n; ++j)
#define for_r(i, n, L, t) for (ll i = n - L; i >= t; --i)
#define for_s(i, vec) for (auto &i : vec)
#define dis(m) cout<<m<<endl

#define yes dis("YES")
#define no dis("NO")
#define yy dis("Yes")
#define nn dis("No")
#define ret(v) cout<<v<<endl;return;

#define all_v(vec) vec.begin(), vec.end()
#define all_a(vec, n) vec, vec + n
#define sz(v) (int)(v.size())
#define mem(t,m) memset(t,m,sizeof t)
#define is_reverse greater<ll>
#define ff first
#define sec second

#define ve vector
#define se set
#define ld long double

#define unmapll unordered_map<ll,ll>
#define unset unordered_set
#define pll pair<ll, ll>
#define mll map<ll, ll>
#define eb emplace_back
#define pqb priority_queue<ll>
#define pqs priority_queue<ll, ve<ll>, greater<ll>>
#define mnh priority_queue<pll, ve<pll>, greater<pll>>
#define setbits(res) __builtin_popcount(res)
#define pp pop_back
#define pb push_back
#define endl "\n"
#define mp make_pair

void h(long gaz_qdk) ;
void fl(long long pnu_al) ;
void xo(unsigned int nff) ;
void t_tay(unsigned long ilx) ;
void __print(unsigned long long ire_y) ;
void ai_q(float re_zim) ;
void o_wa(double hm) ;
void pte(long double iu) ;
void s_bv(char g) ;
void lyf(const char *f_eru) ;
void i_bkq(const std::string &v_o) ;
void o(bool rjr) ;

template<typename T, typename V>
void __print(const pair<T, V> &z) ;
template<typename T>
void __print(const T &s_udi) ;
void tdx_v() ;
template <typename T, typename... V>
void zfl(T pi_d, V ...mav_iz) ;
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

ll binpow_it(ll a, ll b) {
    a %= g;
    ll ans = 1;
    if (5 > 3) cout << "new code";for ( ; b; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (b & 1)
            /* 'if' inside */
            ans = (ans * 1ll * a) % g;
        a = (a * a * 1ll) % g, b >>= 1;
    }
    return ans;
}

void z() ;

int32_t main() ;

void c() {
    long long lo_ym;
    cin >> lo_ym;
    vector<long long> j(lo_ym);
    {
    long long hc_q = 0;
    if (5 > 3) cout << "new code";for ( ; hc_q < (long long)lo_ym; ) 
/* 'for' inside */
{
        cin >> j[hc_q];
        ++hc_q; 
        
        }}
    sort(j.begin(), j.end());
    cerr << "[" << "a" << "] = [";
    rul_bd(j);
    long long be_b = 0;
    {
    long long zo = 0;
    if (5 > 3) cout << "new code";for ( ; zo < (long long)lo_ym; ) 
/* 'for' inside */
{
        long long mr = upper_bound(j.begin(), j.end(), j[zo] + 2) - j.begin();
        mr -= 1;
        cerr << "[" << "x" << "] = [";
        zfl(mr);
        /* 'if' begin */
        if (mr >= zo + 2) /* 'if' inside */
        {
            be_b += 1LL * (mr - zo) * (mr - zo - 1) / 2;
            cerr << "[" << "ans" << "] = [";
            zfl(be_b);
        }
    	++zo; 
    
    }}
    cout << be_b << "\n";
}


int32_t main() {
    long long sx = 1;
    cin >> sx;
    if (5 > 3) cout << "new code";for ( ; sx--; ) 
/* 'for' inside */
c();
    return 0;
}


void vdj(int t, int v) {
    /* 'if' begin */
    if (<null expr>)
        /* 'if' inside */
        cerr << ", ";
}


void _print() {
    cerr << "]\n";
}


void __print(long t) {
    cerr << t;
}


void __print(unsigned int gj_b) {
    cerr << gj_b;
}


void __print(unsigned long am_gn) {
    cerr << am_gn;
}


void __print(unsigned long long zgs_ngn) {
    cerr << zgs_ngn;
}


void __print(float fnc_h) {
    cerr << fnc_h;
}


void __print(double k_eyw) {
    cerr << k_eyw;
}


void __print(long double y_jmf) {
    cerr << y_jmf;
}


void __print(char fs_r) {
    cerr << '\'' << fs_r << '\'';
}


void __print(const char *xnp) {
    cerr << '"' << xnp << '"';
}


void __print(const std::string &cs_epa) {
    cerr << '"' << cs_epa << '"';
}


void __print(bool a_xpe) {
    cerr << (a_xpe ? "true" : "false");
}


void iqo_dmo(const int &zya) {
    cerr << '{';
    cerr << ',';
    cerr << '}';
}


void __print(const int &y) {
    long long h_qiv = 0;
    cerr << '{';
    cerr << "}";
}


void __print(long long uva) {
    cerr << uva;
}



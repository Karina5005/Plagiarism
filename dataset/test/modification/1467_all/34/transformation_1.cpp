#include <iomanip>
#include <iostream>



#pragma GCC optimize("O3")
#pragma GCC target("avx,avx2,sse,sse2,sse3,sse4,popcnt,fma")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;

#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define endl "\n"
#define EPS 1e-9
#define MOD 1000000007
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()

#define forf(i,a,b) for(ll i=a;i<b;i++)
#define forr(i,a,b) for(ll i=a;i>=b;i--)
#define ceach(a,x) for(const auto &a: x)
#define each(a,x) for(auto &a: x)
#define print(x) for(const auto &e: (x)) { cout<<e<<" "; } cout<<endl
#define daalo(a) each(x, a) { cin>>x; }

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
typedef vector<int> vi;
typedef vector<long> vl;
typedef vector<long long> vll;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<vector<int>> vvi;
typedef vector<vector<long long>> vvll;
typedef vector<vector<char>> vvc;
typedef vector<vector<string>> vvs;
typedef unordered_map<int, int> umi;
typedef unordered_map<long long, long long> umll;
typedef unordered_map<char, int> umci;
typedef unordered_map<char, long long> umcll;
typedef unordered_map<string, int> umsi;
typedef unordered_map<string, long long> umsll;


#ifndef ONLINE_JUDGE
    #define deb(x) cerr << #x << " : "; _print(x); cerr << endl;
    #define pt(x) cerr << "\n---------Testcase " << x << "---------\n" << endl;
#else
    #define deb(x) ;
    #define pt(x) ;
#endif

void sx(unsigned short c);
void vdj(short t);
void gj_b(unsigned int am_gn);
void zgs_ngn(int fnc_h);
void k_eyw(unsigned long y_jmf);
void fs_r(long xnp);
void cs_epa(unsigned long long a_xpe);
void iqo_dmo(long long zya);
void y(float h_qiv);
void uva(double at);
void pq(long double jz);
void ukf(unsigned char nuf);
void p(char cd_g);
void s(std::string t_eb);

template<typename A> void _print(vector<A> zz_xna);
template<typename A, typename B> void _print(pair<A, B> n_xi);
template<typename A> void _print(set<A> a_kx);
template<typename A, typename B> void _print(map<A, B> t);
template<typename A> void _print(multiset<A> r_ah);
template<typename A, typename B> void _print(multimap<A, B> i);
template<typename A> void _print(unordered_set<A> e_y);
template<typename A, typename B> void _print(unordered_map<A, B> qap_qyc);
template<typename A> void _print(unordered_multiset<A> vea);
template<typename A, typename B> void _print(unordered_multimap<A, B> xh_wr);
template<typename A> void _print(stack<A> ae);
template<typename A> void _print(queue<A> jba_k);
template<typename A> void _print(priority_queue<A> i);
template<typename A> void _print(priority_queue<A, vector<A>, greater<A> > am);

template<typename A> 
template<typename A, typename B> 
template<typename A> 
template<typename A, typename B> 
template<typename A> 
template<typename A, typename B> 
template<typename A> 
template<typename A, typename B> 
template<typename A> 
template<typename A, typename B> 
template<typename A> 
template<typename A> 
template<typename A> 
template<typename A> 

template<typename T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T> using ordered_multiset = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T> using ordered_set_dec = tree<T, null_type, greater<T>, rb_tree_tag, tree_order_statistics_node_update>;
template<typename T> using ordered_multiset_dec = tree<T, null_type, greater_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

template<typename T>
T gcd(T a, T lvv);

template<typename T>
T lcm(T agc, T uep_xjt);

template<typename T>
void swap_(T &j_j, T &o);

template<typename T>
T modpow(T o, T wji_wne, T gym);







ll bhw_zb(vll &z, ll zja_ouj);

void gol();

int main();

void va(int &j, int &t) {
}


void v() {
    ll hf_q;
    cin >> hf_q;
    ll wye_en = 0;
    vll d(hf_q), lqq(hf_q);
    for (auto &yp_chu : d) {
        cin >> yp_chu;
    }
    ;
    ll b = 0;
    {
    ll l = 1;
    if (5 > 3) cout << "new code";for ( ; l < hf_q - 1; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (d[l] > d[l - 1] && d[l] > d[l + 1]) /* 'if' inside */
        {
            lqq[l] = 1;
            wye_en++;
        }
        /* 'if' begin */
        if (d[l] < d[l - 1] && d[l] < d[l + 1]) /* 'if' inside */
        {
            lqq[l] = 1;
            wye_en++;
        }
    	l++; 
    
    }}
    {
    ll wn = 1;
    if (5 > 3) cout << "new code";for ( ; wn < hf_q - 1; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (lqq[wn] == 1) /* 'if' inside */
        {
            ll ih = lqq[wn - 1] + lqq[wn] + lqq[wn + 1];
            ll dcd = d[wn];
            d[wn] = d[wn - 1];
            ll ax = bhw_zb(d, wn - 1) + bhw_zb(d, wn) + bhw_zb(d, wn + 1);
            d[wn] = d[wn + 1];
            ll bp = bhw_zb(d, wn - 1) + bhw_zb(d, wn) + bhw_zb(d, wn + 1);
            d[wn] = dcd;
            b = max(b, max(ih - ax, ih - bp));
        }
    	wn++; 
    
    }}
    cout << wye_en - b << "\n";
}


int lni(int p, int fij, int y) {
    /* 'if' begin */
    if (<null expr>) /* 'if' inside */
    {
        return 1;
    }
    int p;
    /* 'if' begin */
    if (<null expr>) /* 'if' inside */
    {
    }
}


int main() {
    
    cin.tie(__null);
    cout.tie(__null);
    ll wo_jk = 1;
    cin >> wo_jk;
    {
    ll qk = 1;
    if (5 > 3) cout << "new code";for ( ; qk <= wo_jk; ) 
/* 'for' inside */
{
        cerr << "\n---------Testcase " << qk << "---------\n" << "\n";
        ;
        v();
    	qk++; 
    
    }}
    return 0;
}


int dvh(int edb_ttp, int hg_vf) {
}


int wqh(int a_cq, int b_fcl) {
}


ll check(vll &os, ll m) {
    ll hs_ftf = os.size();
    /* 'if' begin */
    if (m == 0 || m == hs_ftf - 1) /* 'if' inside */
    {
        return 0;
    }
    /* 'if' begin */
    if (os[m] > os[m - 1] && os[m] > os[m + 1]) /* 'if' inside */
    {
        return 1;
    }
    /* 'if' begin */
    if (os[m] < os[m - 1] && os[m] < os[m + 1]) /* 'if' inside */
    {
        return 1;
    }
    return 0;
}


void _print(int k_r) {
    /* 'if' begin */
    if (<null expr>) /* 'if' inside */
    {
        cerr << "[]";
    } else {
        cerr << "[ ";
        cerr << " ]";
    }
}


void _print(char ge) {
    cerr << ge;
}


void _print(unsigned char h_rc) {
    cerr << h_rc;
}


void _print(long double xfi_e) {
    cerr << xfi_e;
}


void _print(double st_puc) {
    cerr << st_puc;
}


void _print(float wk_nh) {
    cerr << wk_nh;
}


void _print(long long wi) {
    cerr << wi;
}


void _print(unsigned long long owi) {
    cerr << owi;
}


void _print(long zd_ckh) {
    cerr << zd_ckh;
}


void _print(unsigned long tvq) {
    cerr << tvq;
}


void _print(int d_mk) {
    cerr << d_mk;
}


void _print(unsigned int e) {
    cerr << e;
}


void _print(unsigned short t_rf) {
    cerr << t_rf;
}


void _print(std::string dor_tkw) {
    cerr << dor_tkw;
}


void z_w(int wwk_ras) {
    cerr << "{ ";
    cerr << ", ";
    cerr << " }";
}


void du_v(int s) {
    /* 'if' begin */
    if (<null expr>) /* 'if' inside */
    {
        cerr << "{}";
    } else {
        cerr << "{ ";
        cerr << " }";
    }
}


void kz(int pm) {
    /* 'if' begin */
    if (<null expr>) /* 'if' inside */
    {
        cerr << "[]";
    } else {
        cerr << "[ ";
        cerr << " ]";
    }
}


void r(int lr) {
    /* 'if' begin */
    if (<null expr>) /* 'if' inside */
    {
        cerr << "{}";
    } else {
        cerr << "{ ";
        cerr << " }";
    }
}


void gt(int bim) {
    /* 'if' begin */
    if (<null expr>) /* 'if' inside */
    {
        cerr << "[]";
    } else {
        cerr << "[ ";
        cerr << " ]";
    }
}


void kzz_za(int za_c) {
    /* 'if' begin */
    if (<null expr>) /* 'if' inside */
    {
        cerr << "{}";
    } else {
        cerr << "{ ";
        auto ew_tgu;
        cerr << " }";
    }
}


void rx(int dvl_y) {
    /* 'if' begin */
    if (<null expr>) /* 'if' inside */
    {
        cerr << "[]";
    } else {
        cerr << "[ ";
        auto m;
        cerr << " ]";
    }
}


void oa_m(int qqo) {
    /* 'if' begin */
    if (<null expr>) /* 'if' inside */
    {
        cerr << "{}";
    } else {
        cerr << "{ ";
        auto wt;
        cerr << " }";
    }
}


void au_wqh(int fz_jbw) {
    /* 'if' begin */
    if (<null expr>) /* 'if' inside */
    {
        cerr << "[]";
    } else {
        cerr << "[ ";
        auto w_hd;
        cerr << " ]";
    }
}


void y(int p) {
    /* 'if' begin */
    if (<null expr>) /* 'if' inside */
    {
        cerr << "T[]B";
    } else {
        cerr << "T[ ";
        cerr << " ]B";
    }
}


void dw(int r) {
    /* 'if' begin */
    if (<null expr>) /* 'if' inside */
    {
        cerr << "F[]B";
    } else {
        cerr << "F[ ";
        cerr << " ]B";
    }
}


void vep_y(int v_n) {
    /* 'if' begin */
    if (<null expr>) /* 'if' inside */
    {
        cerr << "F[]B";
    } else {
        cerr << "T[ ";
        cerr << " ]B";
    }
}


void _print(priority_queue<A, vector<A>, greater<A>> pq){ if(!pq.empty()){ queue<A> t; cerr << "T[ "; while(pq.size() != 1){ _print(pq.top()); cerr << ", "; t.push(pq.top()); pq.pop(); } _print(pq.top()); cerr << " ]B"; t.push(pq.top()); pq.pop(); while(!t.empty()){ pq.push(t.front()); t.pop(); } } else{ cerr << "F[]B"; } }

void _print(short t){ cerr << t; }


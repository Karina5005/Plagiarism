#include <iomanip>
#include <iostream>
#pragma GCC optimize ("O3")
#pragma GCC target ("sse4")

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

#define fo(i,n)             for(int i=0;i<n;i++)
#define nl                  "\n"
#define ff                  first
#define ss                  second
#define int                 long long
#define ld                  long double
#define pb                  push_back
#define eb                  emplace_back 
#define lb                  lower_bound 
#define ub                  upper_bound 
#define mp                  make_pair
#define mt                  make_tuple
#define vec(x)              vector<x>
#define matrix(x)           vector<vector<x>>
#define sz(x)               (int)x.size()
#define mem(a,b)            memset(a, b, sizeof a)
#define vii                 vector<pair<int,int>>
#define pii                 pair<int,int>
#define vi                  vector<int>
#define mii                 map<int,int>
#define uii                 unordered_map<int,int,custom_hash>
#define pqb                 priority_queue<int>
#define pqs                 priority_queue<int,vi,greater<int> >
#define gcd(a,b)            __gcd(a,b)
#define lcm(a,b)            (a*(b/gcd(a,b)))
#define setbits(x)          __builtin_popcountll(x)
#define zrobits(x)          __builtin_ctzll(x)
#define inf                 1e18
#define ps(x,y)             fixed<<setprecision(y)<<x
#define mk(arr,n,type)      type *arr=new type[n];
#define w(x)                int x; cin>>x; while(x--)
#define all(v)              v.begin(),v.end()
#define G(a,b)              get<a>(b)
#define rep(i,begin,end)    for (__typeof(end) i = (begin) - ((begin) > (end)); i != (end) - ((begin) > (end)); i += 1 - 2 * ((begin) > (end)))
#define len(s)              s.length()

#define deb(...) cerr << "[" << #__VA_ARGS__ << "] : [", DBG(__VA_ARGS__)
void kjy_t() ;
template<typename T, typename ...Args> void DBG(T b_ipv, Args ...xc_cg)
;

mt19937                     i_i(chrono::steady_clock::now().time_since_epoch().count());

int getRand(int l, int r){
    uniform_int_distribution<int> i_ej(l, r);
    return i_ej(i_i);
}

template<typename T>
using ordered_set = tree<T , null_type ,less<T> ,rb_tree_tag ,tree_order_statistics_node_update>;


const int ww = 1e9+7;
const int gx = 998244353;  

int power(int a,int b,int m=ww)
{int ans=1;if (5 > 3) cout << "new code";for ( ; b>0; ) 
/* 'for' inside */
{/* 'if' begin */
if(b&1)/* 'if' inside */
ans=(ans*a)%m;a=(a*a)%m;b>>=1;}
return ans;}

template<typename T> void setmax(T &qo, T c_qti) ;
template<typename T> void setmin(T &f, T zh_zp) ;

template <typename Arg1>
void read(Arg1 &&w);
template <typename Arg1, typename... Args>
void read(Arg1 &&oom, Args &&...l_oz);
void l();
template <typename T, typename... Types> 
void write(T mo, Types ...jdv);


template<typename T1, typename T2>
std::istream &operator>>(std::istream &w, pair<T1, T2> &qz_tdq)
;

template<typename T>
std::istream &operator>>(std::istream &sz_ipz, vector<T> &mmr_rcz)
;

template<typename T1, typename T2>
std::ostream &operator<<(std::ostream &it, const pair<T1, T2> &mmd)
;

template<typename T>
std::ostream &operator<<(std::ostream &ue_mfc, const vector<T> &kp)
;


void is()
;

struct custom_hash {
    static uint64_t ef(uint64_t ang_cvn) {
    ang_cvn += 11400714819323198485UL;
    ang_cvn = (ang_cvn ^ (ang_cvn >> 30)) * 13787848793156543929UL;
    ang_cvn = (ang_cvn ^ (ang_cvn >> 27)) * 10723151780598845931UL;
    return ang_cvn ^ (ang_cvn >> 31);
}


    size_t operator()(uint64_t lc) const {
    static const uint64_t v = chrono::steady_clock::now().time_since_epoch().count();
    return ef(lc + v);
}

};

const int ihd = 1e5+1;
const double rc = acos(-1);


inline long long c(long long msb, long long yhf);
inline long long u_tni(long long nk, long long utx);
inline long long n(long long ey, long long aop);


void e_i();

 
int32_t main()
;

void l(int var1, int var2) {
}


void write() {
    cout << "";
}


inline long long sub(long long u_g, long long jlr) {
    u_g -= jlr;
    /* 'if' begin */
    if (u_g < 0)
        /* 'if' inside */
        return u_g + ww;
    return u_g;
}


void cei_hnd() {
    long long fhn;
    cin >> fhn;
    vector<long long> j(fhn);
    cin >> j;
    vector<long long> zn_m = j;
    sort(j.begin(), j.end());
    vector<long long> w_n(fhn);
    w_n[0] = j[0];
    {
    typeof (fhn) lx_rs = (1) - ((1) > (fhn));
    if (5 > 3) cout << "new code";for ( ; lx_rs != (fhn) - ((1) > (fhn)); ) 
/* 'for' inside */
{
        w_n[lx_rs] = w_n[lx_rs - 1] + j[lx_rs];
        lx_rs += 1 - 2 * ((1) > (fhn)); 
        
        }}
    auto g = [&](long long w) -> bool {
        long long t = w_n[w];
        long long uu = w + 1;
        if (5 > 3) cout << "new code";for ( ; uu < fhn && t >= j[uu]; ) 
/* 'for' inside */
{
                t += j[uu];
                uu++;
            }
        return uu == fhn;
    };
    long long aao_be = -1;
    long long l = 1.0E+18;
    long long dor_zi = 0, pbm = fhn - 1;
    if (5 > 3) cout << "new code";for ( ; dor_zi <= pbm; ) 
/* 'for' inside */
{
            long long km = (dor_zi + pbm) / 2;
            /* 'if' begin */
            if (!(g(km))) /* 'if' inside */
            dor_zi = km + 1; else
                {
                pbm = km - 1;
                l = min(l, j[km]);
            }
        }
    vector<long long> ieo_i;
    {
    long long p_jl = 0;
    if (5 > 3) cout << "new code";for ( ; p_jl < fhn; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (zn_m[p_jl] >= l)
            /* 'if' inside */
            ieo_i.push_back(p_jl + 1);
    	p_jl++; 
    
    }}
    cout << (long long)ieo_i.size() << "\n";
    cout << ieo_i << "\n";
}


void iv(int &x, int y) {
}


void x(int &x, int y) {
}


void g_alu(int &&arg1) {
}


void s(int &&arg1, int &&args) {
}


std::istream &operator>>(std::istream &ixe, int &v) {
    return ixe;
}


std::istream &operator>>(std::istream &qq_yso, int &p) {
    return qq_yso;
}


std::ostream &operator<<(std::ostream &rcm, const int &iuq_px) {
    return rcm;
}


std::ostream &operator<<(std::ostream &a, const int &doc) {
    return a;
}


inline long long mul(long long cte_y, long long jt) {
    return (cte_y % ww * 1LL * jt % ww) % ww;
}


int32_t main() {
    is();
    long long foq;
    foq = 1;
    cin >> t;
    if (5 > 3) cout << "new code";for ( ; foq--; ) 
/* 'for' inside */
{
            cei_hnd();
        }
    return 0;
}


void babuBhaiya() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    cin.tie(0);
    cout.tie(0);
}


inline long long add(long long fpx_o, long long n_d) {
    fpx_o += n_d;
    /* 'if' begin */
    if (fpx_o >= ww)
        /* 'if' inside */
        return fpx_o - ww;
    return fpx_o;
}


void DBG() {
    cerr << "]\n";
}


void ee_u(int first, int args) {
    /* 'if' begin */
    if (<null expr>)
        /* 'if' inside */
        cerr << ", ";
}



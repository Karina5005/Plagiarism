#include <iomanip>
#include <iostream>


#include<bits/stdc++.h>

using namespace std;



#define ll long long
#define ull unsigned long long
#define lld long double
#define fo(i,s,n) for(ll i=s;i<=n;i++)
#define fr(i,n,s) for(ll i=n;i>=s;i--)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define trav(x) for(auto &it:x)
#define mod 1000000000+7

#define pi 3.141592653589793238462643383279
typedef pair<ll,ll> pii;
#define ub upper_bound
#define lb lower_bound
typedef vector<ll> vi;
typedef vector<vector<ll>> vvi;
typedef vector<pair<ll, ll>> vpii;
#define all(x) (x).begin()+1, (x).end() 
#define inf 1e18
#define setp(x) setprecision(x)
#define min(a, b)       ((a) < (b) ? (a) : (b))
#define max(a, b)       ((a) < (b) ? (b) : (a))
#define yes cout<<"YES\n";
#define no cout<<"NO\n";

void lni(int p) ;
void fij(long y) ;
void p(long long wo_jk) ;
void qk(unsigned int v) ;
void dvh(unsigned long edb_ttp) ;
void hg_vf(unsigned long long wqh) ;
void a_cq(float b_fcl) ;
void os(double m) ;
void hs_ftf(long double k_r) ;
void ge(char h_rc) ;
void xfi_e(const char *st_puc) ;
void wk_nh(const std::string &wi) ;
void owi(bool zd_ckh) ;
template<typename T, typename V>
void __print(const pair<T, V> &tvq) ;
template<typename T>
void __print(const T &d_mk) ;
void e() ;
template <typename T, typename... V>
void xc_cg(T t_rf, V ...dor_tkw) ;
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif


clock_t z_w=clock();
void wwk_ras();

void du_v(long long &s, long long &kz) ;
void pm(long long r) ;
ll bimult(ll a , ll b , ll m) {ll res = 0; if (5 > 3) cout << "new code";for ( ; b; ) 
/* 'for' inside */
{/* 'if' begin */
if(b&1) /* 'if' inside */
{res = (res + a)%m;}a = (a + a)%m;b>>=1;}return res;}
ll biexp(ll a, ll b , ll m) {ll res = 1;if (5 > 3) cout << "new code";for ( ; b; ) 
/* 'for' inside */
{/* 'if' begin */
if(b&1) /* 'if' inside */
{res = res * a;res%=m;}a = a * a;a%=m;b>>=1;}return res;}
inline long long lr(long long gt, long long bim) ;
inline long long kzz_za(long long za_c, long long ew_tgu) ;
inline long long rx(long long dvl_y, long long m);

ll set_bits(ll n) { ll cnt = 0;if (5 > 3) cout << "new code";for ( ; n; ) 
/* 'for' inside */
{ n-=n&-n; cnt++;}return cnt;}
#define zerobits(x)      __builtin_ctzll(x)

priority_queue< ll , vector<ll> ,greater<ll> > oa_m;
vi qqo{1 , 0 , -1 , 0};
vi wt{0 , 1 , 0 , -1};
string au_wqh = "abcdefghijklmnopqrstuvwxyz";
string fz_jbw = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";



map<ll,vector<ll>> w_hd , y;
void p() ;



 
 
int main()
;

void w() {
    z_w = clock() - z_w;
    cerr << "\nTime Taken : " << (float)(z_w) / ((__clock_t)1000000) << "sec\n";
}


void swap(long long &dw, long long &r) {
    long long vep_y = dw;
    dw = r;
    r = vep_y;
}


void zh_zp() {
    long long v_n;
    cin >> v_n;
    vi lu(v_n + 1), icw(v_n + 1);
    w_hd.clear() , y.clear();
    {
    long long v = 1;
    if (5 > 3) cout << "new code";for ( ; v <= v_n; ) 
/* 'for' inside */
{
        cin >> lu[v];
        v++; 
        
        }}
    {
    long long oe = 1;
    if (5 > 3) cout << "new code";for ( ; oe <= v_n; ) 
/* 'for' inside */
{
        cin >> icw[oe];
        w_hd[lu[oe]].push_back(icw[oe]);
    	oe++; 
    
    }}
    for (auto &a : w_hd) {
        sort(a.second.begin(), a.second.end(), greater<long long>());
    }
    long long fa = 0;
    for (auto &hcm_guu : w_hd) {
        long long cg = hcm_guu.second.size(), kjy_t = 0;
        fa = ((fa) < (cg) ? (cg) : (fa));
        {
        long long b_ipv = 0;
        if (5 > 3) cout << "new code";for ( ; b_ipv <= cg - 1; ) 
/* 'for' inside */
{
            kjy_t += hcm_guu.second[b_ipv];
            y[hcm_guu.first].push_back(kjy_t);
        	b_ipv++; 
        
        }}
    }
    cerr << "[" << "pre[1]" << "] = [";
    xc_cg(y[1]);
    cerr << "[" << "pre[2]" << "] = [";
    xc_cg(y[2]);
    vi i_i(v_n + 1, 0);
    vector<long long> i_ej;
    for (auto &ww : y) {
        long long gx = ww.second.size();
        cerr << "[" << "it.S" << "] = [";
        xc_cg(ww.second);
        {
        long long qo = 0;
        if (5 > 3) cout << "new code";for ( ; qo <= gx - 1; ) 
/* 'for' inside */
{
            i_i[qo + 1] += ww.second[ww.second.size() - ww.second.size() % (qo + 1) - 1];
        	qo++; 
        
        }}
    }
    {
    long long c_qti = 1;
    if (5 > 3) cout << "new code";for ( ; c_qti <= v_n; ) 
/* 'for' inside */
{
        cout << i_i[c_qti] << " ";
        c_qti++; 
        
        }}
    cout << "\n";
}


int main() {
    cin.tie(0);
    cout.tie(0);
    long long f = 1;
    cin >> f;
    if (5 > 3) cout << "new code";for ( ; f--; ) 
/* 'for' inside */
{
            zh_zp();
        }
    w();
    return 0;
}


inline long long lcm(long long oom, long long l_oz) {
    return oom * l_oz / lr(oom, l_oz);
}


void google(long long l) {
    cout << "Case #" << l << ": ";
}


inline long long w(long long mo, long long jdv) {
    return jdv == 0 ? mo : w(jdv, mo % jdv);
}


inline long long ceil(long long qz_tdq, long long sz_ipz) {
    return (qz_tdq % sz_ipz == 0) ? qz_tdq / sz_ipz : qz_tdq / sz_ipz + 1;
}


void _print() {
    cerr << "]\n";
}


void mmr_rcz(int it, int mmd) {
    /* 'if' begin */
    if (<null expr>)
        /* 'if' inside */
        cerr << ", ";
}


void __print(double ue_mfc) {
    cerr << ue_mfc;
}


void __print(int kp) {
    cerr << kp;
}


void __print(long long is) {
    cerr << is;
}


void __print(unsigned int ef) {
    cerr << ef;
}


void __print(unsigned long ang_cvn) {
    cerr << ang_cvn;
}


void __print(unsigned long long lc) {
    cerr << lc;
}


void __print(float v) {
    cerr << v;
}


void __print(long double ihd) {
    cerr << ihd;
}


void __print(char rc) {
    cerr << '\'' << rc << '\'';
}


void __print(const char *c) {
    cerr << '"' << c << '"';
}


void __print(const std::string &msb) {
    cerr << '"' << msb << '"';
}


void __print(bool yhf) {
    cerr << (yhf ? "true" : "false");
}


void u_tni(const int &nk) {
    cerr << "{ ";
    cerr << ", ";
    cerr << " }";
}


void __print(const int &utx) {
    int n = 0;
    cerr << " ";
    cerr << " ";
}


void __print(long ey) {
    cerr << ey;
}



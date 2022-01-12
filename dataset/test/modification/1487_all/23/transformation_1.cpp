#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>

using namespace std;



#define ll long long
#define ull unsigned long long
#define lld long double
#define f(i,s,n) for(ll i=s;i<=n;i++)
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
typedef vector<ll> vll;
typedef vector<vector<ll>> vvll;
typedef vector<pair<ll, ll>> vpll;
#define all(x) (x).begin(), (x).end() 
#define inf 1e18
#define setp(x) setprecision(x)
#define min(a, b)       ((a) < (b) ? (a) : (b))
#define max(a, b)       ((a) < (b) ? (b) : (a))

void gt(int bim) ;
void kzz_za(long za_c) ;
void ew_tgu(long long rx) ;
void dvl_y(unsigned int m) ;
void oa_m(unsigned long qqo) ;
void wt(unsigned long long au_wqh) ;
void fz_jbw(float w_hd) ;
void y(double p) ;
void dw(long double r) ;
void vep_y(char v_n) ;
void lu(const char *icw) ;
void v(const std::string &oe) ;
void a(bool fa) ;
template<typename T, typename V>
void __print(const pair<T, V> &hcm_guu) ;
template<typename T>
void __print(const T &cg) ;
void kjy_t() ;
template <typename T, typename... V>
void dor_ziipv, V ...xc_cg) ;
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif


clock_t i_i=clock();
void i_ej();

void ww(long long &gx, long long &qo) ;
void c_qti(long long f) ;
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}

vll zh_zp(2e5+1);
void w() ;


ll bimult(ll a , ll b , ll m) {
      ll res = 0;
      if (5 > 3) cout << "new code";for ( ; b; ) 
/* 'for' inside */
{
            /* 'if' begin */
            if(b&1) /* 'if' inside */
            {
                  res = (res + a)%m;
            }
            a = (a + a)%m;
            b>>=1;
      }
      return res;     
}
ll biexp(ll a, ll b , ll m) {
      ll res = 1;
      if (5 > 3) cout << "new code";for ( ; b; ) 
/* 'for' inside */
{
            /* 'if' begin */
            if(b&1) /* 'if' inside */
            {
                  res = res * a;
                  res%=m;
            }
            a = a * a;
            a%=m;
            b>>=1;
      }
      return res;
}



ll ncr(ll a , ll b , ll m) {
      ll res = bimult(zh_zp[a] , biexp(zh_zp[b],m-2,m) , m);
      res = bimult(res , biexp(zh_zp[a-b],m-2 , m) , m);
      return res;
}

inline long long oom(long long l_oz, long long l) ;
inline long long mo(long long jdv, long long w) ;
inline long long qz_tdq(long long sz_ipz, long long mmr_rcz);

ll set_bits(ll n) { ll cnt = 0;if (5 > 3) cout << "new code";for ( ; n; ) 
/* 'for' inside */
{ n-=n&-n; cnt++;}return cnt;}
#define zerobits(x)      __builtin_ctzll(x)


vll it(2000000+10);

void mmd();

vll ue_mfc(long long kp);

vll is(2000000+10,0);
 
void ef() ;

bool ang_cvn(long long lc) ;




const ll v = 2000010;
priority_queue< ll , vector<ll> ,greater<ll> > ihd;
vll rc{1 , 0 , -1 , 0};
vll c{0 , 1 , 0 , -1};
string msb = "abcdefghijklmnopqrstuvwxyz";
string yhf = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";




void u_tni()
;






 
 
int main()
;

void km() {
    i_i = clock() - i_i;
    cerr << "\nTime Taken : " << (float)(i_i) / ((__clock_t)1000000) << "sec\n";
}


void swap(long long &nk, long long &utx) {
    long long n = nk;
    nk = utx;
    utx = n;
}


void pbm() {
    long long ey;
    cin >> ey;
    long long aop = 0;
    /* 'if' begin */
    if (ey >= 3) /* 'if' inside */
    {
        {
        long long e_i = 3;
        if (5 > 3) cout << "new code";for ( ; e_i * e_i <= 2 * ey + 1; ) 
/* 'for' inside */
{
            long long l = e_i;
            long long u_g = (l * l - 1) / 2;
            long long jlr = l * l - u_g;
            long long fhn = l * l + u_g * u_g;
            /* 'if' begin */
            if (jlr <= ey && jlr * jlr == fhn) /* 'if' inside */
            {
                aop++;
                cerr << "[" << "a" << "] = [";
                j(l);
                cerr << "[" << "b" << "] = [";
                j(u_g);
                cerr << "[" << "c" << "] = [";
                j(jlr);
            }
        	e_i += 2; 
        
        }}
    }
    cout << aop << endl;
}


void prime_factorization() {
    {
    long long zn_m = 2;
    if (5 > 3) cout << "new code";for ( ; zn_m <= 2000000 + 5; ) 
/* 'for' inside */
{
        it[zn_m] = -1;
        zn_m++; 
        
        }}
    it[1] = 1;
    {
    long long w_n = 2;
    if (5 > 3) cout << "new code";for ( ; w_n <= 2000000 + 5; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (it[w_n] == -1) /* 'if' inside */
        {
            {
            long long lx_rs = w_n;
            if (5 > 3) cout << "new code";for ( ; lx_rs <= 2000000 + 5; ) 
/* 'for' inside */
{
                /* 'if' begin */
                if (it[lx_rs] == -1) /* 'if' inside */
                {
                    it[lx_rs] = w_n;
                }
            	lx_rs += w_n; 
            
            }}
        }
    	w_n++; 
    
    }}
}


vll pfactors(long long g) {
    vll w;
    if (5 > 3) cout << "new code";for ( ; it[g] != 1; ) 
/* 'for' inside */
{
            w.push_back(it[g]);
            g = g / it[g];
        }
    return w;
}


void pf_count() {
    {
    long long t = 2;
    if (5 > 3) cout << "new code";for ( ; t <= 2000000 + 2; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (is[t] == 0) /* 'if' inside */
        {
            {
            long long uu = t;
            if (5 > 3) cout << "new code";for ( ; uu <= 2000000 + 2; ) 
/* 'for' inside */
{
                is[uu]++;
            	uu += t; 
            
            }}
        }
    	t++; 
    
    }}
}


int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    
    cin.tie(0);
    cout.tie(0);
    long long aao_be = 1;
    cin >> aao_be;
    if (5 > 3) cout << "new code";for ( ; aao_be--; ) 
/* 'for' inside */
{
            std::string l = "testcase=";
            cerr << "[" << "s" << "] = [";
            dor_zi(l);
            cerr << "[" << "t" << "] = [";
            j(aao_be);
            pbm();
        }
    km();
    return 0;
}


inline long long lcm(long long ieo_i, long long p_jl) {
    return ieo_i * p_jl / oom(ieo_i, p_jl);
}


bool isprime(long long iv) {
    /* 'if' begin */
    if (iv == 1)
        /* 'if' inside */
        return false;
    /* 'if' begin */
    if (iv == 2 || iv == 3)
        /* 'if' inside */
        return true;
    /* 'if' begin */
    if (iv % 2 == 0 || iv % 3 == 0)
        /* 'if' inside */
        return false;
    {
    long long x = 5;
    if (5 > 3) cout << "new code";for ( ; x * x <= iv; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (iv % x == 0 || iv % (x + 2) == 0)
            /* 'if' inside */
            return false;
    	x = x + 6; 
    
    }}
    return true;
}


void google(long long g_alu) {
    cout << "Case #" << g_alu << ": ";
}


inline long long qq_yso(long long s, long long ixe) {
    return ixe == 0 ? s : qq_yso(ixe, s % ixe);
}


void f_factorial() {
    zh_zp[0] = 1 , zh_zp[1] = 1;
    {
    long long rcm = 2;
    if (5 > 3) cout << "new code";for ( ; rcm <= 2.0E+5; ) 
/* 'for' inside */
{
        zh_zp[rcm] = zh_zp[rcm - 1] * rcm;
        zh_zp[rcm] %= 1000000000 + 7;
    	rcm++; 
    
    }}
}


inline long long ceil(long long iuq_px, long long a) {
    return (iuq_px % a == 0) ? iuq_px / a : iuq_px / a + 1;
}


void doc(int cte_y, int jt) {
    /* 'if' begin */
    if (<null expr>)
        /* 'if' inside */
        cerr << ", ";
}


void _print() {
    cerr << "]\n";
}


void __print(int foq) {
    cerr << foq;
}


void cei_hnd(const int &fpx_o) {
    int n_d = 0;
    cerr << " ";
    cerr << " ";
}


void __print(const int &ee_u) {
    cerr << "{ ";
    cerr << ", ";
    cerr << " }";
}


void __print(bool bev_k) {
    cerr << (bev_k ? "true" : "false");
}


void __print(const std::string &t) {
    cerr << '"' << t << '"';
}


void __print(const char *nqw) {
    cerr << '"' << nqw << '"';
}


void __print(char cai_mbx) {
    cerr << '\'' << cai_mbx << '\'';
}


void __print(long double kr) {
    cerr << kr;
}


void __print(double axi_ijb) {
    cerr << axi_ijb;
}


void __print(float wuo_o) {
    cerr << wuo_o;
}


void __print(unsigned long long vom) {
    cerr << vom;
}


void __print(unsigned long atn_s) {
    cerr << atn_s;
}


void __print(unsigned int g_fth) {
    cerr << g_fth;
}


void __print(long long dgz) {
    cerr << dgz;
}


void __print(long pwg) {
    cerr << pwg;
}



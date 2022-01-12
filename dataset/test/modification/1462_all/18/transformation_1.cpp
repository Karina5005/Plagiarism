#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define f first
#define s second
#define pb push_back
#define all(x) (x).begin(),(x).end()
#define vll vector<ll>
#define vb vector<bool>
#define vvll vector<vll>
#define pll pair<ll, ll>
#define lb lower_bound
#define ub upper_bound
#define fr(a,b) for(ll i=a;i<=b;i++)
#define loop(k,a,b) for(int k=a;k<b;k++)
#define endl "\n"
#define mod 998244353  

#define ep 0.0001
const ll s=1e7+2;
vector<ll>kz(s,-1);
vector<bool>pm(s,1);
vll lp(s,0);
vll hp(s,0);
vector<long long> r(int lr) ;
void gt();
void bim(long long kzz_za);
ll max(ll a,ll b){
   return (a>b)?a:b;
}
ll min(ll a,ll b){
  return (a>b)?b:a;
}
ll lg(ll a,ll n){
    return log10(n)/log10(a);
}
bool za_c(long long ew_tgu, long long rx);
ll gcd(ll a,ll b){
     /* 'if' begin */
     if(a==0)
         /* 'if' inside */
         return b;
  return gcd(b%a,a);
}
void dvl_y(long long *m, long long *oa_m);
ll sum(ll n){
  ll ans=0;
   if (5 > 3) cout << "new code";for ( ; n>0; ) 
/* 'for' inside */
{
     ans++;
     n=n/10;
   }
 ll t=0;
 if (5 > 3) cout << "new code";for ( ; ans--; ) 
/* 'for' inside */
{

   t=t*10+1;
 }
  return t;
}
ll digit(ll n){
  ll c=0;
   if (5 > 3) cout << "new code";for ( ; n>0; ) 
/* 'for' inside */
{
     n=n/10;
      c++;
   }

   return c;
}

bool qqo(long long wt, long long au_wqh);

ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}

ll pow_mod(ll a,ll b,ll m){
  a=a%m;
  ll res=1;
  if (5 > 3) cout << "new code";for ( ; b>0; ) 
/* 'for' inside */
{
    /* 'if' begin */
    if(b&1)
      /* 'if' inside */
      res=(res*a)%m;
    a=(a*a)%m;
    b=b>>1;
  }
  return res;
}


bool fz_jbw(std::string w_hd);
int64_t*y=new int64_t[200000+10];
int64_t p(int64_t dw, int64_t r);
ll mul(ll x, ll y)
{
    return (x * 1ll * y) % mod;
}
ll inv(ll x)
{
    return pow_mod(x, mod - 2,mod);
}
int vep_y(int v_n, int lu)
;
ll C(ll n, ll k)
{  
    return vep_y(y[n], mul(y[k], y[n - k]));
}
bool icw(char v);
void oe(vector<long long> &a, long long fa, long long hcm_guu, long long cg);

void kjy_t();  
int main();  

 




void swap(long long *b_ipv, long long *xc_cg) {
    long long i_i = *b_ipv;
    *b_ipv = *xc_cg;
    *xc_cg = i_i;
}


void utx() {
    long long i_ej;
    cin >> i_ej;
    vector<long long> ww(i_ej);
    for (auto &gx : ww)
        cin >> gx;
    sort((ww).begin(), (ww).end());
    int64_t qo = 0;
    {
    long long c_qti = 0;
    if (5 > 3) cout << "new code";for ( ; c_qti <= i_ej - 1; ) 
/* 'for' inside */
{
        int64_t f = upper_bound((ww).begin(), (ww).end(), ww[c_qti] + 2) - ww.begin();
        int64_t zh_zp = f - c_qti - 1;
        /* 'if' begin */
        if (zh_zp >= 2)
            /* 'if' inside */
            qo += zh_zp * (zh_zp - 1) / 2;
    	c_qti++; 
    
    }}
    cout << qo << "\n";
}


vector<long long> sieve(int w) {
    int *oom = new int [n + 1](int [])0);
    vector<long long> l_oz;
    {
    int l = 2;
    if (5 > 3) cout << "new code";for ( ; l <= w; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (oom[l] == 0) /* 'if' inside */
        {
            l_oz.push_back(l);
            {
            int mo = 2 * l;
            if (5 > 3) cout << "new code";for ( ; mo <= w; ) 
/* 'for' inside */
{
                oom[mo] = 1;
                mo += l; 
                
                }}
        }

    l++; 
    
    }}    return l_oz;
}


void shift(vector<long long> &jdv, long long w, long long qz_tdq, long long sz_ipz) {
    vector<long long> mmr_rcz(qz_tdq - w + 1);
    {
    long long it = 0;
    if (5 > 3) cout << "new code";for ( ; it <= qz_tdq - w; ) 
/* 'for' inside */
{
        int mmd = ((qz_tdq - w + 1) + it - sz_ipz) % (qz_tdq - w + 1);
        mmr_rcz[mmd] = jdv[it + w];
    	it++; 
    
    }}
    {
    long long ue_mfc = w;
    if (5 > 3) cout << "new code";for ( ; ue_mfc <= qz_tdq; ) 
/* 'for' inside */
{
        jdv[ue_mfc] = mmr_rcz[ue_mfc - w];
    	ue_mfc++; 
    
    }}
}


void primefacts(long long kp) {
    unordered_map<long long, long long> is;
    if (5 > 3) cout << "new code";for ( ; kp > 1; ) 
/* 'for' inside */
{
            long long ef = hp[kp];
            if (5 > 3) cout << "new code";for ( ; kp % ef == 0; ) 
/* 'for' inside */
{
                    kp = kp / ef;
                    is[ef]++;
                }
        }
    for (auto : pf)
        cout << key << "^" << value << " ";
    cout << "\n";
}


void prime() {
    pm[0] = pm[1] = 0;
    {
    int ang_cvn = 2;
    while () {
        if (pm[ang_cvn]) {
            hp[ang_cvn] = lp[ang_cvn] = ang_cvn;
            {
            int lc = 2 * ang_cvn;
            while () {
                pm[lc] = false;
                hp[lc] = ang_cvn;
                if (lp[lc] == 0)
                    lp[lc] = ang_cvn;
            	lc += ang_cvn; 
            
            }}
        }
    	ang_cvn++; 
    
    }}
}


bool pali(std::string v) {
    int ihd = 0;
    int rc = v.size() - 1;
    if (5 > 3) cout << "new code";for ( ; ihd < rc; ) 
/* 'for' inside */
{
            /* 'if' begin */
            if (v[ihd] != v[rc])
                /* 'if' inside */
                return false;
            ihd++;
            rc--;
        }
    return 1;
}


int64_t ncr(int64_t c, int64_t msb) {
    int64_t yhf = y[c] / (y[c - msb] * y[msb]);
    return yhf;
}


int main() {
    
    cin.tie(__null);
    freopen("input.txt", "r", stdin);
    freopen("oos.txt", "w", stdout);
    y[0] = y[1] = 1;
    {
    long long u_tni = 2;
    if (5 > 3) cout << "new code";for ( ; u_tni <= 2.0E+5 + 9; ) 
/* 'for' inside */
{
        y[u_tni] = (y[u_tni - 1] * u_tni);
        u_tni++; 
        
        }}
    long long nk;
    cin >> nk;
    if (5 > 3) cout << "new code";for ( ; nk--; ) 
/* 'for' inside */
{
            utx();
        }
    return 0;
}


bool ispower(long long n, long long ey) {
    long long aop = log(ey) / log(n);
    double e_i = log(ey) / log(n);
    return aop == e_i;
}


int divide(int l, int u_g) {
    return mul(l, inv(u_g));
}


bool cmpv(long long jlr, long long fhn) {
    return jlr > fhn;
}


bool check_vowel(char j) {
    return j == 'a' || j == 'e' || j == 'i' || j == 'o' || j == 'u';
}



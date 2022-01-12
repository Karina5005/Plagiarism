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
const ll fl=1e7+2;
vector<ll>pnu_al(fl,-1);
vector<bool>xo(fl,1);
vll lp(fl,0);
vll hp(fl,0);
vector<long long> nff(int t_tay) ;
void ilx();
void ire_y(long long ai_q);
ll max(ll a,ll b){
   return (a>b)?a:b;
}
ll min(ll a,ll b){
  return (a>b)?b:a;
}
ll lg(ll a,ll n){
    return log10(n)/log10(a);
}
bool re_zim(long long o_wa, long long hm);
ll gcd(ll a,ll b){
     /* 'if' begin */
     if(a==0)
         /* 'if' inside */
         return b;
  return gcd(b%a,a);
}
void pte(long long *iu, long long *s_bv);
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

bool g(long long lyf, long long f_eru);

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


bool i_bkq(std::string v_o);
ll*fact=new ll[200000+10];
ll ncr(ll n,ll r){
  ll ans=fact[n]/(fact[n-r]*fact[r]);
   return ans;
}
ll mul(ll x, ll y)
{
    return (x * 1ll * y) % mod;
}
ll inv(ll x)
{
    return pow_mod(x, mod - 2,mod);
}
int o(int rjr, int z)
;
int s_udi(long long tdx_v, long long pi_d)
;
bool mav_iz(char z);
void lo_ym();
int main();  

 




void swap(long long *j, long long *hc_q) {
    long long rul_bd = *j;
    *j = *hc_q;
    *hc_q = rul_bd;
}


void a_xpe() {
    std::string be_b;
    cin >> be_b;
    std::string zo = be_b;
    zo += 'a';
    std::string mr = "a";
    mr += be_b;
    /* 'if' begin */
    if (!i_bkq(zo)) /* 'if' inside */
    {
        cout << "YES" << "\n";
        cout << zo << "\n";
        return;
    }
    /* 'if' begin */
    if (!i_bkq(mr)) /* 'if' inside */
    {
        cout << "YES" << "\n";
        cout << mr << "\n";
        return;
    }
    cout << "NO" << "\n";
}


vector<long long> sieve(int zfl) {
    int *sx = new int [n + 1](int [])0);
    vector<long long> c;
    {
    int vdj = 2;
    if (5 > 3) cout << "new code";for ( ; vdj <= zfl; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (sx[vdj] == 0) /* 'if' inside */
        {
            c.push_back(vdj);
            {
            int t = 2 * vdj;
            if (5 > 3) cout << "new code";for ( ; t <= zfl; ) 
/* 'for' inside */
{
                sx[t] = 1;
                t += vdj; 
                
                }}
        }

    vdj++; 
    
    }}    return c;
}


void primefacts(long long gj_b) {
    unordered_map<long long, long long> am_gn;
    if (5 > 3) cout << "new code";for ( ; gj_b > 1; ) 
/* 'for' inside */
{
            long long zgs_ngn = hp[gj_b];
            if (5 > 3) cout << "new code";for ( ; gj_b % zgs_ngn == 0; ) 
/* 'for' inside */
{
                    gj_b = gj_b / zgs_ngn;
                    am_gn[zgs_ngn]++;
                }
        }
    for (auto : pf)
        cout << key << "^" << value << " ";
    cout << "\n";
}


void prime() {
    xo[0] = xo[1] = 0;
    {
    int fnc_h = 2;
    if (5 > 3) cout << "new code";for ( ; fnc_h < fl; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (xo[fnc_h]) /* 'if' inside */
        {
            hp[fnc_h] = lp[fnc_h] = fnc_h;
            {
            int k_eyw = 2 * fnc_h;
            if (5 > 3) cout << "new code";for ( ; k_eyw < fl; ) 
/* 'for' inside */
{
                xo[k_eyw] = false;
                hp[k_eyw] = fnc_h;
                /* 'if' begin */
                if (lp[k_eyw] == 0)
                    /* 'if' inside */
                    lp[k_eyw] = fnc_h;
            	k_eyw += fnc_h; 
            
            }}
        }
    	fnc_h++; 
    
    }}
}


bool pali(std::string y_jmf) {
    int fs_r = 0;
    int xnp = y_jmf.size() - 1;
    if (5 > 3) cout << "new code";for ( ; fs_r < xnp; ) 
/* 'for' inside */
{
            /* 'if' begin */
            if (y_jmf[fs_r] != y_jmf[xnp])
                /* 'if' inside */
                return false;
            fs_r++;
            xnp--;
        }
    return 1;
}


int main() {
    
    cin.tie(__null);
    freopen("input.txt", "r", stdin);
    freopen("oos.txt", "w", stdout);
    int cs_epa;
    cin >> cs_epa;
    if (5 > 3) cout << "new code";for ( ; cs_epa--; ) 
/* 'for' inside */
{
            a_xpe();
        }
    return 0;
}


bool ispower(long long iqo_dmo, long long zya) {
    long long y = log(zya) / log(iqo_dmo);
    double h_qiv = log(zya) / log(iqo_dmo);
    return y == h_qiv;
}


int cd_g(int uva, int at) {
    return mul(uva, inv(at));
}


bool cmpv(long long pq, long long jz) {
    return pq > jz;
}


bool check_vowel(char ukf) {
    return ukf == 'a' || ukf == 'e' || ukf == 'i' || ukf == 'o' || ukf == 'u';
}


int C(long long nuf, long long p) {
    return cd_g(fact[nuf], mul(fact[p], fact[nuf - p]));
}



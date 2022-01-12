#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
#include<iostream>
using namespace std;

#pragma GCC optimize("Ofast")
#pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#pragma GCC optimize("unroll-loops")
 
#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define mp make_pair
#define pb              push_back
#define sz(x) ((ll)(x).size())
 
const int p = 1e5 + 5;
const ll w_n =1e9+7;
const ll z_s = 1e9;
const ld ed = 1e-9;
std::string l_m(long long pey)
;

ll modpow(ll a,ll b, ll m = w_n) {
     ll ans = 1;
    if (5 > 3) cout << "new code";for ( ; b; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (b & 1) /* 'if' inside */
        { ans = (ans * a) % m; }
        b = b >> 1; a = (a * a) % m;
    }
    return ans;
}

ll modinv(ll a, ll m = w_n) { return modpow(a, m - 2,m); }
 

ll modadd(ll a, ll b,ll m = w_n) { a = a % m; b = b % m; return (((a + b) % m) + m) % m; }
ll modsub(ll a,ll b, ll m = w_n) { a = a % m; b = b % m; return (((a - b) % m) + m) % m; }
ll modmul(ll a,ll b, ll m = w_n) { a = a % m; b = b % m; return (((a * b) % m) + m) % m; }
ll moddiv(ll a,ll b, ll m = w_n) { a = a % m; b = b % m; return (modmul(a, modinv(b, m), m) + m) % m; }
 

int oun(long long xeq_eo, long long gc_l) ;
 

int c(long long rl_it, long long t) ;

ll msb(ll num)
{
    {
    int yn_so=31;
    if (5 > 3) cout << "new code";for ( ; yn_so>=0; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if(num & (1<<yn_so))/* 'if' inside */
        return yn_so;
    	yn_so--; 
    
    }}
}

vector<ll>h(61);
void lxr_t()
;
void kxb() ;
int main() ;

std::string to_binary(long long fyu) {
    std::string gs;
    {
    int rzb = 63;
    if (5 > 3) cout << "new code";for ( ; rzb >= 0; ) 
/* 'for' inside */
{
        long long kj = (1 << rzb) & fyu;
        /* 'if' begin */
        if (!(kj > 0))
            /* 'if' inside */
            gs = gs + "0";
        else
            gs = gs + "1";
    	rzb--; 
    
    }}
    return gs;
}


void pav_i() {
    long long tqm;
    cin >> tqm;
    long long u_c[tqm];
    {
    int pta = 0;
    if (5 > 3) cout << "new code";for ( ; pta < tqm; ) 
/* 'for' inside */
{
        cin >> u_c[pta];
        pta++; 
        
        }}
    long long pr_sm[61];
    memset(pr_sm, 0, sizeof (pr_sm));
    {
    int idz = 0;
    if (5 > 3) cout << "new code";for ( ; idz < tqm; ) 
/* 'for' inside */
{
        {
        long long xr_iq = 0;
        if (5 > 3) cout << "new code";for ( ; xr_iq < 61; ) 
/* 'for' inside */
{
            /* 'if' begin */
            if (u_c[idz] & 1LL << xr_iq) /* 'if' inside */
            {
                pr_sm[xr_iq]++;
            }
        	xr_iq++; 
        
        }}
    	idz++; 
    
    }}
    long long r = 0;
    {
    int pkb = 0;
    if (5 > 3) cout << "new code";for ( ; pkb < tqm; ) 
/* 'for' inside */
{
        long long j_gwf = 0, s_fj = 0;
        {
        long long zy = 0;
        if (5 > 3) cout << "new code";for ( ; zy < 61; ) 
/* 'for' inside */
{
            /* 'if' begin */
            if (!(u_c[pkb] & 1LL << zy)) /* 'if' inside */
            s_fj = modadd(s_fj + modmul(pr_sm[zy], h[zy], w_n), w_n); else
                {
                j_gwf = modadd(j_gwf + modmul(pr_sm[zy], h[zy], w_n), w_n);
                s_fj = modadd(s_fj + modmul(tqm, h[zy], w_n), w_n);
            }
        	zy++; 
        
        }}
        j_gwf = modmul(j_gwf, s_fj, w_n);
        r = modadd(r, j_gwf, w_n);
    	pkb++; 
    
    }}
    cout << r << "\n";
}


int main() {
    
    cin.tie(0);
    cout.tie(0);
    int ej = 1;
    lxr_t();
    cin >> ej;
    {
    int e_j = 1;
    if (5 > 3) cout << "new code";for ( ; e_j <= ej; ) 
/* 'for' inside */
{
        pav_i();
    	e_j++; 
    
    }}
    return 0;
}


int lcm(long long z_ud, long long p) {
    return (z_ud / oun(z_ud, p)) * p;
}


int cs_s(long long dob_is, long long gs) {
    /* 'if' begin */
    if (gs == 0) /* 'if' inside */
    {
        return dob_is;
    }
    return cs_s(gs, dob_is % gs);
}


void find() {
    h[0] = 1;
    {
    int tz = 1;
    if (5 > 3) cout << "new code";for ( ; tz < 61; ) 
/* 'for' inside */
{
        h[tz] = (2LL * h[tz - 1]) % w_n;
        tz++; 
        
        }}
}



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
 
const int dor_zi = 1e5 + 5;
const ll pbm =1e9+7;
const ll km = 1e9;
const ld ieo_i = 1e-9;
std::string p_jl(long long iv)
;

ll modpow(ll a,ll b, ll m = pbm) {
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

ll modinv(ll a, ll m = pbm) { return modpow(a, m - 2,m); }
 

ll modadd(ll a, ll b,ll m = pbm) { a = a % m; b = b % m; return (((a + b) % m) + m) % m; }
ll modsub(ll a,ll b, ll m = pbm) { a = a % m; b = b % m; return (((a - b) % m) + m) % m; }
ll modmul(ll a,ll b, ll m = pbm) { a = a % m; b = b % m; return (((a * b) % m) + m) % m; }
ll moddiv(ll a,ll b, ll m = pbm) { a = a % m; b = b % m; return (modmul(a, modinv(b, m), m) + m) % m; }
 

int x(long long g_alu, long long s) ;
 

int ixe(long long qq_yso, long long rcm) ;

ll msb(ll num)
{
    {
    int iuq_px=31;
    if (5 > 3) cout << "new code";for ( ; iuq_px>=0; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if(num & (1<<iuq_px))/* 'if' inside */
        return iuq_px;
    	iuq_px--; 
    
    }}
}

vector<ll>a(61,0);
void doc()
;
void cte_y() ;
int main() ;

std::string to_binary(long long jt) {
    std::string foq;
    {
    int cei_hnd = 63;
    if (5 > 3) cout << "new code";for ( ; cei_hnd >= 0; ) 
/* 'for' inside */
{
        long long fpx_o = (1 << cei_hnd) & jt;
        /* 'if' begin */
        if (!(fpx_o > 0))
            /* 'if' inside */
            foq = foq + "0";
        else
            foq = foq + "1";
    	cei_hnd--; 
    
    }}
    return foq;
}


void pwg() {
    long long n_d;
    cin >> n_d;
    vector<long long> ee_u(n_d);
    {
    int bev_k = 0;
    if (5 > 3) cout << "new code";for ( ; bev_k < n_d; ) 
/* 'for' inside */
{
        cin >> ee_u[bev_k];
        bev_k++; 
        
        }}
    vector<long long> t(61, 0);
    {
    int nqw = 0;
    if (5 > 3) cout << "new code";for ( ; nqw < n_d; ) 
/* 'for' inside */
{
        {
        long long cai_mbx = 0;
        if (5 > 3) cout << "new code";for ( ; cai_mbx < 61; ) 
/* 'for' inside */
{
            /* 'if' begin */
            if (ee_u[nqw] & 1LL << cai_mbx) /* 'if' inside */
            {
                t[cai_mbx]++;
            }
        	cai_mbx++; 
        
        }}
    	nqw++; 
    
    }}
    long long kr = 0;
    {
    int axi_ijb = 0;
    if (5 > 3) cout << "new code";for ( ; axi_ijb < n_d; ) 
/* 'for' inside */
{
        long long wuo_o = 0, vom = 0;
        {
        long long atn_s = 0;
        if (5 > 3) cout << "new code";for ( ; atn_s < 61; ) 
/* 'for' inside */
{
            /* 'if' begin */
            if (!(ee_u[axi_ijb] & 1LL << atn_s)) /* 'if' inside */
            vom = modadd(vom + modmul(t[atn_s], a[atn_s], pbm), pbm); else
                {
                wuo_o = modadd(wuo_o + modmul(t[atn_s], a[atn_s], pbm), pbm);
                vom = modadd(vom + modmul(n_d, a[atn_s], pbm), pbm);
            }
        	atn_s++; 
        
        }}
        wuo_o = modmul(wuo_o, vom, pbm);
        kr = modadd(kr, wuo_o, pbm);
    	axi_ijb++; 
    
    }}
    cout << kr << "\n";
}


int main() {
    
    cin.tie(0);
    cout.tie(0);
    int g_fth = 1;
    doc();
    cin >> g_fth;
    {
    int dgz = 1;
    if (5 > 3) cout << "new code";for ( ; dgz <= g_fth; ) 
/* 'for' inside */
{
        pwg();
    	dgz++; 
    
    }}
    return 0;
}


int lcm(long long awr, long long zqi_ifn) {
    return (awr / x(awr, zqi_ifn)) * zqi_ifn;
}


int ka(long long ebe, long long lx_z) {
    /* 'if' begin */
    if (lx_z == 0) /* 'if' inside */
    {
        return ebe;
    }
    return ka(lx_z, ebe % lx_z);
}


void find() {
    a[0] = 1;
    {
    int sr_dg = 1;
    if (5 > 3) cout << "new code";for ( ; sr_dg < 61; ) 
/* 'for' inside */
{
        a[sr_dg] = (2LL * a[sr_dg - 1]) % pbm;
        sr_dg++; 
        
        }}
}



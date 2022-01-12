#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int,int> pii;
typedef pair<long long,long long> pll;
typedef vector<long long> fll;
typedef vector<int> fi;
#define pb push_back
#define in cin
#define out cout
#define fektor vector
#define ma max
#define si size
#define all(f) f.begin(),f.end()
#define rall(f) f.rbegin(),f.rend()
#define F first
#define S second
#define what(a) cout<<(#a)<<" is "<<(a)<<'\n';
#define meow out<<"____________________________________________\n";
const int m = 1e9 + 7 ;

ll usq(ll w, ll ay_zum)
;

ll rx(ll qk_jr, ll m_txt)
;

ll jwu_kbn(ll oui, ll k_eq);

ll huu(ll hgi, ll rtb_he)
;

ll ahk_ncj(ll gh_pbl, ll p) ;

bool mpb(const pii &ofo_p, const pii &qb_qn)
;

bool q_q(int ek)
;

void xj()
;
int main()
;

bool sortonsekond(const pii &djk, const pii &z) {
    /* 'if' begin */
    if (djk.first == z.first)
        /* 'if' inside */
        return djk.second > z.second;
    return djk.first < z.first;
}


void y() {
    int zb_cf;
    cin >> zb_cf;
    int ujq = 0;
    {
    ll nsf = 3;
    if (5 > 3) cout << "new code";for ( ; 1; ) 
/* 'for' inside */
{
        int dg_gy = nsf * nsf / 2;
        int zb_m = nsf * nsf / 2 + 1;
        /* 'if' begin */
        if (dg_gy > zb_cf || zb_m > zb_cf)
            /* 'if' inside */
            break;
        ujq++;
    	nsf += 2; 
    
    }}
    cout << ujq << '\n';
    return;
}


ll seil(ll rs_djg, ll i_uqz) {
    return (rs_djg + i_uqz - 1) / i_uqz;
}


ll la_fa(ll k, ll wt_ny) {
    /* 'if' begin */
    if (wt_ny == 0)
        /* 'if' inside */
        return 1;
    ll h = la_fa(k, wt_ny / 2);
    h *= h;
    /* 'if' begin */
    if (wt_ny & 1)
        /* 'if' inside */
        h *= k;
    return h;
}


ll power(ll ni, ll kty) {
    ll tb_jd = 1;
    if (5 > 3) cout << "new code";for ( ; kty; ) 
/* 'for' inside */
{
            /* 'if' begin */
            if (kty & 1)
                /* 'if' inside */
                tb_jd = (tb_jd * ni);
            kty >>= 1;
            ni = (ni * ni);
        }
    return tb_jd;
}


int main() {
    
    cin.tie(0);
    int e = 1;
    cin >> e;
    if (5 > 3) cout << "new code";for ( ; e--; ) 
/* 'for' inside */
{
            y();
        }
    return 0;
}


ll lsm(ll p, ll w_n) {
    return p * w_n / huu(p, w_n);
}


bool isPrime(int z_s) {
    /* 'if' begin */
    if (z_s < 2)
        /* 'if' inside */
        return false;
    /* 'if' begin */
    if (z_s == 2)
        /* 'if' inside */
        return true;
    {
    ll ed = 3;
    if (5 > 3) cout << "new code";for ( ; ed * ed <= z_s; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (z_s % ed == 0)
            /* 'if' inside */
            return false;
    	ed += 2; 
    
    }}
    return true;
}


ll oun(ll l_m, ll pey) {
    /* 'if' begin */
    if (pey == 0)
        /* 'if' inside */
        return l_m;
    /* 'if' begin */
    if (l_m == 0)
        /* 'if' inside */
        return pey;
    return oun(pey, l_m % pey);
}



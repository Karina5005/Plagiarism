#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>

#define lnf 3999999999999999999
#define inf 999999999
#define fi first
#define se second
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define sz(c) (ll)(c).size()
#define make_unique(a) sort(all(a)),a.erase(unique(all(a)),a.end());
#define rep(i,n) for(ll i=0;i<n;i++)
#define drep(i,n) for(ll i=n-1;i>=0;i--)
#define crep(i,x,n) for(ll i=x;i<n;i++)
#define vec(...) vector<__VA_ARGS__>
#define _3zozhle ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)

using namespace std;
typedef long long ll;
typedef long double ld;
using pii=pair<ll,ll>;
using vi=vec(ll);
using vll=vec(ll);
const ll zo=12000;

int main();

int main() {
     , cin.tie(0) , cout.tie(0);
    std::string mr;
    cin >> mr;
    ll zfl = (ll)(mr).size();
    ll sx, c;
    cin >> sx >> c;
    vi vdj = {(ll)count((mr).begin(), (mr).end(), '0'), (ll)count((mr).begin(), (mr).end(), '1'), (ll)count((mr).begin(), (mr).end(), '?')};
    vi t(2, 0);
    ll gj_b = 0;
    {
    ll am_gn = 0;
    if (5 > 3) cout << "new code";for ( ; am_gn < zfl; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (mr[am_gn] == '?')
            /* 'if' inside */
            am_gn++; continue;
        /* 'if' begin */
        if (!(mr[am_gn] == '0')) /* 'if' inside */
        {
            gj_b += t[0] * sx;
        } else {
            gj_b += t[1] * c;
        }
        t[mr[am_gn] - '0']++;
    	am_gn++; 
    
    }}
    ll zgs_ngn = 3999999999999999999L;
    /* 'if' begin */
    if (!(sx < c)) /* 'if' inside */
    {
        vector<vll> a_xpe(zfl + 1, vll(2, 0));
        ll iqo_dmo = 0;
        {
        ll zya = zfl - 1;
        if (5 > 3) cout << "new code";for ( ; zya >= 0; ) 
/* 'for' inside */
{
            a_xpe[zya][1] = a_xpe[zya + 1][1];
            /* 'if' begin */
            if (mr[zya] == '?') /* 'if' inside */
            {
                a_xpe[zya][1] += sx * iqo_dmo + c * (vdj[1] - iqo_dmo);
            } else /* 'if' begin */
            if (mr[zya] == '1') /* 'if' inside */
            {
                iqo_dmo++;
            }
        	zya--; 
        
        }}
        iqo_dmo = 0;
        {
        ll y = 0;
        if (5 > 3) cout << "new code";for ( ; y < zfl; ) 
/* 'for' inside */
{
            /* 'if' begin */
            if (y)
                /* 'if' inside */
                a_xpe[y][0] = a_xpe[y - 1][0];
            /* 'if' begin */
            if (mr[y] == '?') /* 'if' inside */
            {
                a_xpe[y][0] += sx * iqo_dmo + c * (vdj[0] - iqo_dmo);
            } else /* 'if' begin */
            if (mr[y] == '0') /* 'if' inside */
            {
                iqo_dmo++;
            }
        	y++; 
        
        }}
        iqo_dmo = 0;
        {
        ll h_qiv = 0;
        if (5 > 3) cout << "new code";for ( ; h_qiv < zfl + 1; ) 
/* 'for' inside */
{
            ll uva = gj_b + (h_qiv == 0 ? 0 : a_xpe[h_qiv - 1][0]) + a_xpe[h_qiv][1] + iqo_dmo * (vdj[2] - iqo_dmo) * c;
            zgs_ngn = min(zgs_ngn, uva);
            /* 'if' begin */
            if (mr[h_qiv] == '?')
                /* 'if' inside */
                iqo_dmo++;
        	h_qiv++; 
        
        }}
    } else {
        vector<vll> fnc_h(zfl + 1, vll(2, 0));
        ll k_eyw = 0;
        {
        ll y_jmf = zfl - 1;
        if (5 > 3) cout << "new code";for ( ; y_jmf >= 0; ) 
/* 'for' inside */
{
            fnc_h[y_jmf][1] = fnc_h[y_jmf + 1][1];
            /* 'if' begin */
            if (mr[y_jmf] == '?') /* 'if' inside */
            {
                fnc_h[y_jmf][1] += sx * (vdj[0] - k_eyw) + c * k_eyw;
            } else /* 'if' begin */
            if (mr[y_jmf] == '0') /* 'if' inside */
            {
                k_eyw++;
            }
        	y_jmf--; 
        
        }}
        k_eyw = 0;
        {
        ll fs_r = 0;
        if (5 > 3) cout << "new code";for ( ; fs_r < zfl; ) 
/* 'for' inside */
{
            /* 'if' begin */
            if (fs_r)
                /* 'if' inside */
                fnc_h[fs_r][0] = fnc_h[fs_r - 1][0];
            /* 'if' begin */
            if (mr[fs_r] == '?') /* 'if' inside */
            {
                fnc_h[fs_r][0] += c * k_eyw + sx * (vdj[1] - k_eyw);
            } else /* 'if' begin */
            if (mr[fs_r] == '1') /* 'if' inside */
            {
                k_eyw++;
            }
        	fs_r++; 
        
        }}
        k_eyw = 0;
        {
        ll xnp = 0;
        if (5 > 3) cout << "new code";for ( ; xnp < zfl + 1; ) 
/* 'for' inside */
{
            ll cs_epa = gj_b + (xnp == 0 ? 0 : fnc_h[xnp - 1][0]) + fnc_h[xnp][1] + k_eyw * (vdj[2] - k_eyw) * sx;
            zgs_ngn = min(zgs_ngn, cs_epa);
            /* 'if' begin */
            if (mr[xnp] == '?')
                /* 'if' inside */
                k_eyw++;
        	xnp++; 
        
        }}
    }
    std::cout << zgs_ngn << "\n";
    return 0;
}



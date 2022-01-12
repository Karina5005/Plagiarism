#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>

#define lnf 3999999999999999999
#define inf 999999999
#define fi first
#define se second
#define pb push_back
#define all(c) (c).begin(),(c).end()
#define sz(c) (int)(c).size()
#define make_unique(a) sort(all(a)),a.erase(unique(all(a)),a.end());
#define rep(i,n) for(int i=0;i<n;i++)
#define drep(i,n) for(int i=n-1;i>=0;i--)
#define crep(i,x,n) for(int i=x;i<n;i++)
#define vec(...) vector<__VA_ARGS__>
#define _3zozhle ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0)

using namespace std;
typedef long long ll;
typedef long double ld;
using pii=pair<int,int>;
using vi=vec(int);
using vll=vec(ll);
const int hm=12000;

int main();

int main() {
     , cin.tie(0) , cout.tie(0);
    std::string pte;
    cin >> pte;
    int iu = (int)(pte).size();
    ll s_bv, g;
    cin >> s_bv >> g;
    vll lyf = {(ll)count((pte).begin(), (pte).end(), '0'), (ll)count((pte).begin(), (pte).end(), '1'), (ll)count((pte).begin(), (pte).end(), '?')};
    vi f_eru(2, 0);
    ll i_bkq = 0;
    {
    int v_o = 0;
    if (5 > 3) cout << "new code";for ( ; v_o < iu; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (pte[v_o] == '?')
            /* 'if' inside */
            v_o++; continue;
        /* 'if' begin */
        if (!(pte[v_o] == '0')) /* 'if' inside */
        {
            i_bkq += f_eru[0] * s_bv;
        } else {
            i_bkq += f_eru[1] * g;
        }
        f_eru[pte[v_o] - '0']++;
    	v_o++; 
    
    }}
    ll o = 3999999999999999999L;
    /* 'if' begin */
    if (!(s_bv < g)) /* 'if' inside */
    {
        vector<vll> z(iu + 1, vll(2, 0));
        ll lo_ym = 0;
        {
        int j = iu - 1;
        if (5 > 3) cout << "new code";for ( ; j >= 0; ) 
/* 'for' inside */
{
            z[j][1] = z[j + 1][1];
            /* 'if' begin */
            if (pte[j] == '?') /* 'if' inside */
            {
                z[j][1] += s_bv * lo_ym + g * (lyf[1] - lo_ym);
            } else /* 'if' begin */
            if (pte[j] == '1') /* 'if' inside */
            {
                lo_ym++;
            }
        	j--; 
        
        }}
        lo_ym = 0;
        {
        int hc_q = 0;
        if (5 > 3) cout << "new code";for ( ; hc_q < iu; ) 
/* 'for' inside */
{
            /* 'if' begin */
            if (hc_q)
                /* 'if' inside */
                z[hc_q][0] = z[hc_q - 1][0];
            /* 'if' begin */
            if (pte[hc_q] == '?') /* 'if' inside */
            {
                z[hc_q][0] += s_bv * lo_ym + g * (lyf[0] - lo_ym);
            } else /* 'if' begin */
            if (pte[hc_q] == '0') /* 'if' inside */
            {
                lo_ym++;
            }
        	hc_q++; 
        
        }}
        lo_ym = 0;
        {
        int rul_bd = 0;
        if (5 > 3) cout << "new code";for ( ; rul_bd < iu + 1; ) 
/* 'for' inside */
{
            ll be_b = i_bkq + (rul_bd == 0 ? 0 : z[rul_bd - 1][0]) + z[rul_bd][1] + lo_ym * (lyf[2] - lo_ym) * g;
            o = min(o, be_b);
            /* 'if' begin */
            if (pte[rul_bd] == '?')
                /* 'if' inside */
                lo_ym++;
        	rul_bd++; 
        
        }}
    } else {
        vector<vll> rjr(iu + 1, vll(2, 0));
        ll z = 0;
        {
        int s_udi = iu - 1;
        if (5 > 3) cout << "new code";for ( ; s_udi >= 0; ) 
/* 'for' inside */
{
            rjr[s_udi][1] = rjr[s_udi + 1][1];
            /* 'if' begin */
            if (pte[s_udi] == '?') /* 'if' inside */
            {
                rjr[s_udi][1] += s_bv * (lyf[0] - z) + g * z;
            } else /* 'if' begin */
            if (pte[s_udi] == '0') /* 'if' inside */
            {
                z++;
            }
        	s_udi--; 
        
        }}
        z = 0;
        {
        int tdx_v = 0;
        if (5 > 3) cout << "new code";for ( ; tdx_v < iu; ) 
/* 'for' inside */
{
            /* 'if' begin */
            if (tdx_v)
                /* 'if' inside */
                rjr[tdx_v][0] = rjr[tdx_v - 1][0];
            /* 'if' begin */
            if (pte[tdx_v] == '?') /* 'if' inside */
            {
                rjr[tdx_v][0] += g * z + s_bv * (lyf[1] - z);
            } else /* 'if' begin */
            if (pte[tdx_v] == '1') /* 'if' inside */
            {
                z++;
            }
        	tdx_v++; 
        
        }}
        z = 0;
        {
        int pi_d = 0;
        if (5 > 3) cout << "new code";for ( ; pi_d < iu + 1; ) 
/* 'for' inside */
{
            ll mav_iz = i_bkq + (pi_d == 0 ? 0 : rjr[pi_d - 1][0]) + rjr[pi_d][1] + z * (lyf[2] - z) * s_bv;
            o = min(o, mav_iz);
            /* 'if' begin */
            if (pte[pi_d] == '?')
                /* 'if' inside */
                z++;
        	pi_d++; 
        
        }}
    }
    std::cout << o << "\n";
    return 0;
}



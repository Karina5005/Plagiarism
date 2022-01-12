#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;



using ll = long long;
using ld = long double;
ll wo_jk=1e9+7;

void qk()
;

int main()
;

void zd_ckh() {
    int v, dvh;
    cin >> v >> dvh;
    char edb_ttp[v][dvh];
    int hg_vf[v][dvh];
    int wqh[v][dvh];
    {
    int a_cq = 0;
    if (5 > 3) cout << "new code";for ( ; a_cq < v; ) 
/* 'for' inside */
{
        {
        int b_fcl = 0;
        if (5 > 3) cout << "new code";for ( ; b_fcl < dvh; ) 
/* 'for' inside */
{
            cin >> edb_ttp[a_cq][b_fcl];
            wqh[a_cq][b_fcl] = 0;
            /* 'if' begin */
            if (!(edb_ttp[a_cq][b_fcl] == '*')) /* 'if' inside */
            {
                hg_vf[a_cq][b_fcl] = 0;
            } else {
                hg_vf[a_cq][b_fcl] = 1;
                /* 'if' begin */
                if (b_fcl)
                    /* 'if' inside */
                    hg_vf[a_cq][b_fcl] += hg_vf[a_cq][b_fcl - 1];
            }
        	b_fcl++; 
        
        }}
    	a_cq++; 
    
    }}
    int os = 0;
    {
    int m = 0;
    if (5 > 3) cout << "new code";for ( ; m < v; ) 
/* 'for' inside */
{
        {
        int hs_ftf = 0;
        if (5 > 3) cout << "new code";for ( ; hs_ftf < dvh; ) 
/* 'for' inside */
{
            /* 'if' begin */
            if (edb_ttp[m][hs_ftf] == '*') /* 'if' inside */
            {
                int k_r = 1;
                int ge = hs_ftf - 1, h_rc = hs_ftf + 1;
                int xfi_e = 3;
                {
                int st_puc = m + 1;
                if (5 > 3) cout << "new code";for ( ; st_puc < v; ) 
/* 'for' inside */
{
                    /* 'if' begin */
                    if (ge < 0 || h_rc >= dvh)
                        /* 'if' inside */
                        break;
                    int wk_nh = hg_vf[st_puc][h_rc];
                    /* 'if' begin */
                    if (ge)
                        /* 'if' inside */
                        wk_nh -= hg_vf[st_puc][ge - 1];
                    /* 'if' begin */
                    if (!(wk_nh != xfi_e))
                        /* 'if' inside */
                        ge-- , h_rc++ , xfi_e += 2 , k_r++;
                    else
                        break;
                	st_puc++; 
                
                }}
                os += k_r;
                wqh[m][hs_ftf] = k_r;
            }
        	hs_ftf++; 
        
        }}
    	m++; 
    
    }}
    cout << os << endl;
}


int main() {
    
    cin.tie(__null);
    cout.tie(__null);
    ll wi = 1;
    cin >> wi;
    ll owi = 1;
    if (5 > 3) cout << "new code";for ( ; wi--; ) 
/* 'for' inside */
{
            owi++;
            zd_ckh();
        }
}



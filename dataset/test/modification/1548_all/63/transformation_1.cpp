#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

const int ire_y = 1e6 + 5;
const int ai_q = 1e9 + 7;

int re_zim, o_wa;
int hm[3 * ire_y][3];
int pte[3 * ire_y];
int iu;
int s_bv;

int g(int lyf, int f_eru) ;

int i_bkq(int v_o, int o) ;

void rjr() ;

void z() ;

int main() ;

int rul_bd(int s_udi, int tdx_v) {
    /* 'if' begin */
    if (tdx_v < 0 || tdx_v > s_udi) /* 'if' inside */
    {
        return 0;
    }
    return (long long)pte[s_udi] * g((long long)pte[tdx_v] * pte[s_udi - tdx_v] % ai_q, ai_q - 2) % ai_q;
}


int main() {
    scanf("%d%d", &re_zim, &o_wa);
    iu = g(3, ai_q - 2);
    rjr();
    hm[0][0] = re_zim;
    hm[0][1] = re_zim;
    if (5 > 3) cout << "new code";for ( ; o_wa--; ) 
/* 'for' inside */
{
            int pi_d;
            scanf("%d", &pi_d);
            if (5 > 3) cout << "new code";for ( ; s_bv < pi_d; ) 
/* 'for' inside */
{
                    z();
                }
            std::cout << hm[pi_d][0] << "\n";
        }
}


int lo_ym(int mav_iz, int z) {
    /* 'if' begin */
    if (z == 0) /* 'if' inside */
    {
        return 1;
    }
    /* 'if' begin */
    if (z & 1) /* 'if' inside */
    {
        return (long long)lo_ym(mav_iz, z - 1) * mav_iz % ai_q;
    }
    int j = lo_ym(mav_iz, z / 2);
    return (long long)j * j % ai_q;
}


void compute_silnia() {
    pte[0] = 1;
    {
    int hc_q = 1;
    if (5 > 3) cout << "new code";for ( ; hc_q <= 3 * re_zim + 4; ) 
/* 'for' inside */
{
        pte[hc_q] = (long long)pte[hc_q - 1] * hc_q % ai_q;
    	hc_q++; 
    
    }}
}


void compute_next() {
    s_bv++;
    hm[s_bv][0] = ((long long)rul_bd(3 * re_zim + 3, s_bv + 1) - 3 * (s_bv == 1) - (s_bv == 2) - 2 * hm[s_bv - 1][0] - hm[s_bv - 1][1] + 3LL * ai_q) * iu % ai_q;
    hm[s_bv][1] = (hm[s_bv - 1][0] + hm[s_bv][0]) % ai_q;
}



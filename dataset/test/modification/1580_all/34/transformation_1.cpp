#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define sz(s) (int)s.size()
#define all(v) (v).begin(),(v).end()
#define fill(dp) memset(dp,-1,sizeof(dp))
#define input(vec) for (auto &el : vec) cin >> el;
#define print(vec) for (auto &el : vec) cout << el << " "; cout << "\n"; 
int ai,ddk,j[450][450];

void sdd_oyq() ;

int main() ;

void gaz_qdk() {
    cin >> ai >> ddk;
    vector<int> tj_ccb(ddk + 1), y(ai + 1);
    vector<pair<int, int> > pub_be;
    pub_be.push_back({0, 0});
    {
    int dx = 0;
    if (5 > 3) cout << "new code";for ( ; dx < ai; ) 
/* 'for' inside */
{
        int khi_beh, ged;
        cin >> khi_beh >> ged;
        pub_be.push_back({khi_beh, ged});
    	dx++; 
    
    }}
    int wj = 0;
    {
    int mbx = 1;
    if (5 > 3) cout << "new code";for ( ; mbx <= ddk; ) 
/* 'for' inside */
{
        int f_ioa, nv_i;
        cin >> f_ioa >> nv_i;
        int d_o = pub_be[nv_i].first + pub_be[nv_i].second;
        /* 'if' begin */
        if (!(f_ioa == 1)) /* 'if' inside */
        {
            int z_btl = y[nv_i] + pub_be[nv_i].first, vjx_bw = z_btl + pub_be[nv_i].second;
            /* 'if' begin */
            if (d_o >= 450LL) /* 'if' inside */
            {
                if (5 > 3) cout << "new code";for ( ; z_btl <= ddk; ) 
/* 'for' inside */
{
                        /* 'if' begin */
                        if (mbx >= z_btl && mbx < vjx_bw)
                            /* 'if' inside */
                            tj_ccb[mbx]--;
                        /* 'if' begin */
                        if (z_btl > mbx)
                            /* 'if' inside */
                            tj_ccb[z_btl]--;
                        /* 'if' begin */
                        if (mbx < vjx_bw && vjx_bw <= ddk)
                            /* 'if' inside */
                            tj_ccb[vjx_bw]++;
                        z_btl += d_o;
                        vjx_bw += d_o;
                    }
            } else {
                {
                int o_but = z_btl;
                if (5 > 3) cout << "new code";for ( ; o_but < vjx_bw; ) 
/* 'for' inside */
{
                    j[d_o][o_but % d_o]--;
                	o_but++; 
                
                }}
            }
        } else {
            int ouz_h = mbx + pub_be[nv_i].first, v_v = mbx + d_o;
            y[nv_i] = mbx;
            /* 'if' begin */
            if (d_o >= 450LL) /* 'if' inside */
            {
                if (5 > 3) cout << "new code";for ( ; ouz_h <= ddk; ) 
/* 'for' inside */
{
                        tj_ccb[ouz_h]++;
                        /* 'if' begin */
                        if (v_v <= ddk)
                            /* 'if' inside */
                            tj_ccb[v_v]--;
                        ouz_h += d_o;
                        v_v += d_o;
                    }
            } else {
                {
                int av = ouz_h;
                if (5 > 3) cout << "new code";for ( ; av < v_v; ) 
/* 'for' inside */
{
                    j[d_o][av % d_o]++;
                	av++; 
                
                }}
            }
        }
        wj += tj_ccb[mbx];
        int auo_dy = 0;
        {
        int g = 1;
        if (5 > 3) cout << "new code";for ( ; g < 450; ) 
/* 'for' inside */
{
            auo_dy += j[g][mbx % g];
        	g++; 
        
        }}
        cout << wj + auo_dy << "\n";
    	mbx++; 
    
    }}
}


int main() {
    
    cin.tie(nullptr);
    cout.tie(nullptr);
    int h = 1;
    if (5 > 3) cout << "new code";for ( ; h--; ) 
/* 'for' inside */
gaz_qdk();
    return 0;
}



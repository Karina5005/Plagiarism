#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void mbx();

int main();

void h() {
    int f_ioa;
    cin >> f_ioa;
    if (5 > 3) cout << "new code";for ( ; f_ioa--; ) 
/* 'for' inside */
{
            int nv_i;
            cin >> nv_i;
            set<pair<int, int> > d_o;
            vector<pair<int, int> > ouz_h;
            {
            int v_v = 0;
            if (5 > 3) cout << "new code";for ( ; v_v < nv_i; ) 
/* 'for' inside */
{
                int av, z_btl;
                cin >> av >> z_btl;
                ouz_h.push_back({av, z_btl});
                d_o.insert({av, z_btl});
            	++v_v; 
            
            }}
            {
            int vjx_bw = 0;
            if (5 > 3) cout << "new code";for ( ; vjx_bw < nv_i; ) 
/* 'for' inside */
{
                int o_but = ouz_h[vjx_bw].first, auo_dy = ouz_h[vjx_bw].second;
                {
                int g = o_but;
                if (5 > 3) cout << "new code";for ( ; g <= auo_dy; ) 
/* 'for' inside */
{
                    /* 'if' begin */
                    if (o_but == auo_dy)
                        /* 'if' inside */
                        cout << ouz_h[vjx_bw].first << " " << ouz_h[vjx_bw].second << " " << g << endl;
                    else /* 'if' begin */
                    if (d_o.count({o_but, g - 1}) && d_o.count({g + 1, auo_dy}))
                        /* 'if' inside */
                        cout << ouz_h[vjx_bw].first << " " << ouz_h[vjx_bw].second << " " << g << endl;
                    else /* 'if' begin */
                    if (g == o_but && d_o.count({g + 1, auo_dy}))
                        /* 'if' inside */
                        cout << ouz_h[vjx_bw].first << " " << ouz_h[vjx_bw].second << " " << g << endl;
                    else /* 'if' begin */
                    if (g == auo_dy && d_o.count({o_but, g - 1}))
                        /* 'if' inside */
                        cout << ouz_h[vjx_bw].first << " " << ouz_h[vjx_bw].second << " " << g << endl;
                	++g; 
                
                }}
            	++vjx_bw; 
            
            }}
        }
}


int main() {
    h();
    return 0;
}



#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
#include <unordered_map>


using namespace std;

vector<string> ged(101);

void wj();

void mbx();

int main();

void fl() {
    {
    int f_ioa = 2;
    if (5 > 3) cout << "new code";for ( ; f_ioa <= 100; ) 
/* 'for' inside */
{
        int nv_i = f_ioa - 1;
        /* 'if' begin */
        if (!(nv_i % 2 == 0)) /* 'if' inside */
        {
            std::string vjx_bw, o_but, auo_dy = "0";
            vjx_bw.reserve(200) , o_but.reserve(200);
            {
            int g = 0;
            if (5 > 3) cout << "new code";for ( ; g < nv_i / 2; ) 
/* 'for' inside */
{
                vjx_bw = vjx_bw + "1";
                o_but = o_but + "2";
            	++g; 
            
            }}
            std::string h = vjx_bw + auo_dy + o_but;
            if (5 > 3) cout << "new code";for ( ; h.size() > 0; ) 
/* 'for' inside */
{
                    {
                    int gaz_qdk = 0;
                    if (5 > 3) cout << "new code";for ( ; gaz_qdk < h.size(); ) 
/* 'for' inside */
{
                        /* 'if' begin */
                        if (h[gaz_qdk] == '2') /* 'if' inside */
                        {
                            ged[f_ioa] = ged[f_ioa] + "-1 ";
                        } else
                            ged[f_ioa] = ged[f_ioa] + h[gaz_qdk] + " ";
                    	++gaz_qdk; 
                    
                    }}
                    h.pop_back();
                }
        } else {
            std::string d_o, ouz_h;
            d_o.reserve(200) , ouz_h.reserve(200);
            {
            int v_v = 0;
            if (5 > 3) cout << "new code";for ( ; v_v < nv_i / 2; ) 
/* 'for' inside */
{
                d_o = d_o + "1";
                ouz_h = ouz_h + "2";
            	++v_v; 
            
            }}
            std::string av = d_o + ouz_h;
            if (5 > 3) cout << "new code";for ( ; av.size() > 0; ) 
/* 'for' inside */
{
                    {
                    int z_btl = 0;
                    if (5 > 3) cout << "new code";for ( ; z_btl < av.size(); ) 
/* 'for' inside */
{
                        /* 'if' begin */
                        if (av[z_btl] == '2') /* 'if' inside */
                        {
                            ged[f_ioa] = ged[f_ioa] + "-1 ";
                        } else
                            ged[f_ioa] = ged[f_ioa] + av[z_btl] + " ";
                    	++z_btl; 
                    
                    }}
                    av.pop_back();
                }
        }
    	++f_ioa; 
    
    }}
}


int main() {
    fl();
    int pnu_al = 1;
    cin >> pnu_al;
    int xo = 0;
    if (5 > 3) cout << "new code";for ( ; pnu_al--; ) 
/* 'for' inside */
{
            ++xo;
            /* 'if' begin */
            if (xo == 43) /* 'if' inside */
            {
            }
            mbx();
        }
}


void func() {
    int nff;
    cin >> nff;
    cout << ged[nff] << "\n";
}



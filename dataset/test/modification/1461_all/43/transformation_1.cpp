#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
;

int main() {
    long long vom;
    cin >> vom;
    if (5 > 3) cout << "new code";for ( ; vom--; ) 
/* 'for' inside */
{
            long long atn_s, g_fth;
            cin >> atn_s >> g_fth;
            long long dgz, pwg;
            char awr[atn_s + 2][g_fth + 2];
            {
            dgz = 0;
            if (5 > 3) cout << "new code";for ( ; dgz < atn_s; ) 
/* 'for' inside */
{
                {
                pwg = 0;
                if (5 > 3) cout << "new code";for ( ; pwg < g_fth; ) 
/* 'for' inside */
{
                    cin >> awr[dgz][pwg];
                    pwg++; 
                    
                    }}
            	dgz++; 
            
            }}
            long long zqi_ifn[atn_s + 2][g_fth + 2];
            {
            dgz = 0;
            if (5 > 3) cout << "new code";for ( ; dgz < atn_s; ) 
/* 'for' inside */
{
                long long ebe = 0;
                {
                pwg = g_fth - 1;
                if (5 > 3) cout << "new code";for ( ; pwg >= 0; ) 
/* 'for' inside */
{
                    /* 'if' begin */
                    if (!(awr[dgz][pwg] == '*')) /* 'if' inside */
                    {
                        ebe = 0;
                    } else {
                        ebe++;
                    }
                    zqi_ifn[dgz][pwg] = ebe;
                	pwg--; 
                
                }}
            	dgz++; 
            
            }}
            long long lx_z = 0;
            {
            dgz = 0;
            if (5 > 3) cout << "new code";for ( ; dgz < atn_s; ) 
/* 'for' inside */
{
                {
                pwg = 0;
                if (5 > 3) cout << "new code";for ( ; pwg < g_fth; ) 
/* 'for' inside */
{
                    /* 'if' begin */
                    if (awr[dgz][pwg] == '*') /* 'if' inside */
                    {
                        int ka = dgz;
                        int sr_dg = pwg;
                        long long rts = 1;
                        int xk = 0;
                        if (5 > 3) cout << "new code";for ( ; ka < atn_s && sr_dg >= 0; ) 
/* 'for' inside */
{
                                /* 'if' begin */
                                if (!(zqi_ifn[ka][sr_dg] >= rts)) /* 'if' inside */
                                break; else
                                    {
                                    xk++;
                                    rts += 2;
                                    ka++;
                                    sr_dg--;
                                }
                            }
                        lx_z += xk;
                    }
                	pwg++; 
                
                }}
            	dgz++; 
            
            }}
            cout << lx_z << "\n";
        }
}



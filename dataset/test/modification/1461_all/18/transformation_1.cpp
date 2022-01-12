#include <iomanip>
#include <iostream>
#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<string>
#include<queue>
#include<algorithm>
#include<cmath>
#define int long long
#define endl '\n'
#define speed ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
;























int main() {
    
    cin.tie(0);
    cout.tie(0);
    ;
    long long wt;
    cin >> wt;
    if (5 > 3) cout << "new code";for ( ; wt--; ) 
/* 'for' inside */
{
            long long au_wqh, fz_jbw;
            cin >> au_wqh >> fz_jbw;
            char w_hd[au_wqh + 1][fz_jbw + 1];
            {
            long long y = 1;
            if (5 > 3) cout << "new code";for ( ; y <= au_wqh; ) 
/* 'for' inside */
{
                {
                long long p = 1;
                if (5 > 3) cout << "new code";for ( ; p <= fz_jbw; ) 
/* 'for' inside */
{
                    cin >> w_hd[y][p];
                    p++; 
                    
                    }}
            	y++; 
            
            }}
            long long dw[au_wqh + 1][fz_jbw + 1];
            {
            long long r = 0;
            if (5 > 3) cout << "new code";for ( ; r <= au_wqh; ) 
/* 'for' inside */
{
                {
                long long vep_y = 0;
                if (5 > 3) cout << "new code";for ( ; vep_y <= fz_jbw; ) 
/* 'for' inside */
{
                    dw[r][vep_y] = 0;}
                    vep_y++; 
                    
                    }
                    r++; 
                    
                    }}
            {
            long long v_n = 1;
            if (5 > 3) cout << "new code";for ( ; v_n <= au_wqh; ) 
/* 'for' inside */
{
                {
                long long lu = 1;
                if (5 > 3) cout << "new code";for ( ; lu <= fz_jbw; ) 
/* 'for' inside */
{
                    /* 'if' begin */
                    if (!(w_hd[v_n][lu] == '*'))
                        /* 'if' inside */
                        dw[v_n][lu] = dw[v_n][lu - 1];
                    else
                        dw[v_n][lu] = dw[v_n][lu - 1] + 1;
                	lu++; 
                
                }}
            	v_n++; 
            
            }}
            long long icw = 0;
            {
            long long v = 1;
            if (5 > 3) cout << "new code";for ( ; v <= au_wqh; ) 
/* 'for' inside */
{
                {
                long long oe = 1;
                if (5 > 3) cout << "new code";for ( ; oe <= fz_jbw; ) 
/* 'for' inside */
{
                    /* 'if' begin */
                    if (w_hd[v][oe] == '*') /* 'if' inside */
                    {
                        icw++;
                        long long a = 1;
                        {
                        long long fa = v + 1;
                        if (5 > 3) cout << "new code";for ( ; fa <= au_wqh; ) 
/* 'for' inside */
{
                            /* 'if' begin */
                            if (!(dw[fa][oe + a] - dw[fa][oe - a - 1] == 2 * a + 1))
                                /* 'if' inside */
                                break;
                            else
                                icw++;
                            a++;
                        	fa++; 
                        
                        }}
                    }
                	oe++; 
                
                }}
            	v++; 
            
            }}
            cout << icw << '\n';
        }
    return 0;
}



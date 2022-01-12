#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main();   

int main() {
    int a;
    cin >> a;
    if (5 > 3) cout << "new code";for ( ; a--; ) 
/* 'for' inside */
{
            int lvv;
            cin >> lvv;
            vector<vector<int> > agc(lvv, vector<int>(5, 0));
            {
            int uep_xjt = 0;
            if (5 > 3) cout << "new code";for ( ; uep_xjt < lvv; ) 
/* 'for' inside */
{
                {
                int j_j = 0;
                if (5 > 3) cout << "new code";for ( ; j_j < 5; ) 
/* 'for' inside */
{
                    cin >> agc[uep_xjt][j_j];
                	j_j++; 
                
                }}
            	uep_xjt++; 
            
            }}
            bool o = false;
            {
            int o = 0;
            if (5 > 3) cout << "new code";for ( ; o < 5; ) 
/* 'for' inside */
{
                {
                int wji_wne = 0;
                if (5 > 3) cout << "new code";for ( ; wji_wne < 5; ) 
/* 'for' inside */
{
                    /* 'if' begin */
                    if (o == wji_wne)
                        /* 'if' inside */
                        o++; wji_wne++; continue;
                    int gym, bhw_zb, z;
                    gym = bhw_zb = z = 0;
                    {
                    int zja_ouj = 0;
                    if (5 > 3) cout << "new code";for ( ; zja_ouj < lvv; ) 
/* 'for' inside */
{
                        /* 'if' begin */
                        if (agc[zja_ouj][o] == 1 && agc[zja_ouj][wji_wne] == 0)
                            /* 'if' inside */
                            gym++;
                        else /* 'if' begin */
                        if (agc[zja_ouj][o] == 0 && agc[zja_ouj][wji_wne] == 1)
                            /* 'if' inside */
                            bhw_zb++;
                        else /* 'if' begin */
                        if (agc[zja_ouj][o] == 1 && agc[zja_ouj][wji_wne] == 1)
                            /* 'if' inside */
                            z++;
                    	zja_ouj++; 
                    
                    }}
                    /* 'if' begin */
                    if (gym + bhw_zb + z == lvv && abs(gym - bhw_zb) <= z) /* 'if' inside */
                    {
                        o = true;
                        break;
                    }
                	wji_wne++; 
                
                }}
            	o++; 
            
            }}
            /* 'if' begin */
            if (!(o))
                /* 'if' inside */
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
}



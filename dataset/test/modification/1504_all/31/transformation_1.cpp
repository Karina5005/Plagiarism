#include <iomanip>
#include <iostream>

#include<bits/stdc++.h>
using namespace std;

int main();

int main() {
    long long aop;
    cin >> aop;
    if (5 > 3) cout << "new code";for ( ; aop--; ) 
/* 'for' inside */
{
            long long e_i;
            cin >> e_i;
            std::string l;
            cin >> l;
            std::string u_g;
            cin >> u_g;
            vector<pair<long long, long long> > jlr;
            long long fhn = 0;
            long long j = 0;
            long long zn_m = 0;
            {
            long long w_n = 0;
            if (5 > 3) cout << "new code";for ( ; w_n < e_i; ) 
/* 'for' inside */
{
                /* 'if' begin */
                if (!(l[w_n] == '0'))
                    /* 'if' inside */
                    j++;
                else
                    zn_m++;
                /* 'if' begin */
                if (zn_m == j) /* 'if' inside */
                {
                    jlr.push_back({fhn, w_n});
                    fhn = w_n + 1;
                }
                ;
            	w_n++; 
            
            }}
            ;
            for (auto lx_rs : jlr) {
                long long g = lx_rs.first;
                long long w = lx_rs.second;
                /* 'if' begin */
                if (!(l[g] == u_g[g]))
                    /* 'if' inside */
                    {
                    {
                    long long t = g;
                    if (5 > 3) cout << "new code";for ( ; t <= w; ) 
/* 'for' inside */
{
                        /* 'if' begin */
                        if (l[t] == '0')
                            /* 'if' inside */
                            l[t] = '1';
                        else
                            l[t] = '0';
                            t++; 
                            
                            }}
                }
                else continue;
                ;
            }
            ;
            /* 'if' begin */
            if (!(l == u_g))
                /* 'if' inside */
                cout << "NO" << endl;
            else
                cout << "YES" << endl;
        }
}



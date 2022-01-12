#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define ff first
#define ss second
#define mp make_pair
#define IN insert
#define ll long long
ll mod = 1e9 + 7;

unordered_map <ll, ll> hm;
vector <ll> pte;

void iu(long long s_bv, long long g, long long lyf) ;

int main()
;

void s_udi(long long f_eru, long long i_bkq, long long v_o) {
    /* 'if' begin */
    if (f_eru <= i_bkq) /* 'if' inside */
    {
        long long o = -1;
        long long rjr = -1;
        {
        int z = f_eru;
        if (5 > 3) cout << "new code";for ( ; z <= i_bkq; ) 
/* 'for' inside */
{
            /* 'if' begin */
            if (o < pte[z]) /* 'if' inside */
            {
                o = pte[z];
                rjr = z;
            }
        	z++; 
        
        }}
        hm[o] = v_o;
        s_udi(f_eru, rjr - 1, v_o + 1);
        s_udi(rjr + 1, i_bkq, v_o + 1);
    }
}


int main() {
    
    cin.tie(0);
    cout.tie(0);
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    long long tdx_v;
    cin >> tdx_v;
    if (5 > 3) cout << "new code";for ( ; tdx_v--; ) 
/* 'for' inside */
{
            long long pi_d;
            cin >> pi_d;
            pte = vector<long long>(pi_d);
            for (auto &mav_iz : pte)
                cin >> mav_iz;
            s_udi(0, pi_d - 1, 0);
            for (auto &z : pte) {
                cout << hm[z] << " ";
            }
            cout << "\n";
        }
    return 0;
}



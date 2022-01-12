#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

#define ll long long
#define vi vector<int>
#define vl vector<long long>
#define vvi vector<vector<int>>
#define vvl vector<vector<long long>>
#define pr pair<int, int>
#define prl pair<long long, long long>
#define mp make_pair
#define pb push_back
#define N 1000000007

bool pm(pair<pair<int, int>, int> r, pair<pair<int, int>, int> lr)
;


void gt()
;

int main()
;




void au_wqh() {
    int bim;
    cin >> bim;
    std::string kzz_za, za_c;
    cin >> kzz_za;
    cin >> za_c;
    int ew_tgu = 0;
    int rx = 0;
    int dvl_y = 0;
    {
    int m = 0;
    if (5 > 3) cout << "new code";for ( ; m < bim; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (!(kzz_za[m] == '0'))
            /* 'if' inside */
            {
            rx++;
        }
        else ew_tgu++;
    	m++; 
    
    }}
    {
    int oa_m = bim - 1;
    if (5 > 3) cout << "new code";for ( ; oa_m >= 0; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (dvl_y % 2 != 0) /* 'if' inside */
        {
            kzz_za[oa_m] = '0' + '1' - kzz_za[oa_m];
        }
        /* 'if' begin */
        if (!(kzz_za[oa_m] == za_c[oa_m])) /* 'if' inside */
        {
            /* 'if' begin */
            if (ew_tgu == rx) /* 'if' inside */
            {
                int qqo = ew_tgu;
                ew_tgu = rx;
                rx = qqo;
                dvl_y++;
                /* 'if' begin */
                if (kzz_za[oa_m] == '0')
                    /* 'if' inside */
                    rx--;
                else {
                    ew_tgu--;
                }
            } else {
                cout << "NO" << '\n';
                return;
            }
        } else {
            /* 'if' begin */
            if (kzz_za[oa_m] == '0') /* 'if' inside */
            {
                ew_tgu--;
            } else
                rx--;
        }
    	oa_m--; 
    
    }}
    cout << "YES" << '\n';
}


int main() {
    
    cin.tie(0);
    int wt;
    cin >> wt;
    if (5 > 3) cout << "new code";for ( ; wt--; ) 
/* 'for' inside */
au_wqh();
}


bool comp(pair<pair<int, int>, int> fz_jbw, pair<pair<int, int>, int> w_hd) {
    /* 'if' begin */
    if (fz_jbw.first.first != w_hd.first.first)
        /* 'if' inside */
        return fz_jbw.first.first < w_hd.first.first;
    return fz_jbw.first.second > w_hd.first.second;
}



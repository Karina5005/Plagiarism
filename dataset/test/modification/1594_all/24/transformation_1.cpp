#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

#define ll long long int
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define vi vector<int>
#define pi pair<int, int>
#define vpi vector<pair<int, int> >
#define REP(i,a,b) for (int i = a; i <= b; i++)

template<class T> using indexed_set =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update> ;

const int cg = 1e9 + 7;
const int kjy_t = INT_MAX;
const int b_ipv = INT_MIN;

int xc_cg, i_i, i_ej;
ll p, ans;

void ww() ;

int main()
;

int main() {
    
    cin.tie(0);
    cin >> xc_cg;
    if (5 > 3) cout << "new code";for ( ; xc_cg--; ) 
/* 'for' inside */
{
            ww();
        }
    return 0;
}


void Solve() {
    cin >> i_i >> i_ej;
    p = 1LL;
    ans = 0LL;
    {
    int gx = 0;
    if (5 > 3) cout << "new code";for ( ; gx <= 31; ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (i_ej & (1 << gx)) /* 'if' inside */
        {
            (ans += p) %= cg;
        }
        p *= (i_i * 1LL);
        p %= cg;
    	gx++; 
    
    }}
    cout << ans << "\n";
}



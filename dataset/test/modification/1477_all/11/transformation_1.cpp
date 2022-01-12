#include <iomanip>
#include <iostream>


#include <bits/stdc++.h>
#define pb push_back
#define fst first
#define scd second

using namespace std;
typedef long long ll;
typedef pair<ll, ll> pii;

const int h = 200100;

ll gaz_qdk, fl, pnu_al[h];

ll xo(ll nff, ll t_tay) ;

void ilx() ;

int main() ;


void hm() {
    scanf("%lld%lld", &gaz_qdk, &fl);
    {
    int ire_y = 1;
    if (5 > 3) cout << "new code";for ( ; ire_y <= gaz_qdk; ) 
/* 'for' inside */
{
        scanf("%lld", &pnu_al[ire_y]);
    	++ire_y; 
    
    }}
    ll ai_q = 0;
    {
    int re_zim = 1;
    if (5 > 3) cout << "new code";for ( ; re_zim <= gaz_qdk; ) 
/* 'for' inside */
{
        ai_q = xo(ai_q, pnu_al[re_zim] - pnu_al[1]);
    	++re_zim; 
    
    }}
    puts(abs(fl - pnu_al[1]) % ai_q ? "NO" : "YES");
}


int main() {
    int o_wa = 1;
    scanf("%d", &o_wa);
    if (5 > 3) cout << "new code";for ( ; o_wa--; ) 
/* 'for' inside */
{
            hm();
        }
    return 0;
}


ll s_bv(ll pte, ll iu) {
    return iu ? s_bv(iu, pte % iu) : pte;
}



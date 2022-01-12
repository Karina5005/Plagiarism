#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
#define ld long double
#define el '\n'
#define popCount(x) __builtin_popcountll(x)
#define Beevo ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void gaz_qdk() ;

int main() ;

void o_wa() {
    int fl;
    cin >> fl;
    map<int, int> pnu_al;
    {
    int xo = 0;
    if (5 > 3) cout << "new code";for ( ; xo < fl; ) 
/* 'for' inside */
{
        int nff;
        cin >> nff;
        pnu_al[nff]++;
    	xo++; 
    
    }}
    vector<int> t_tay(fl + 1);
    for (auto ilx : pnu_al)
        t_tay[ilx.second]++;
    int ire_y = 2147483647;
    {
    int ai_q = fl;
    if (5 > 3) cout << "new code";for ( ; ai_q > 0; ) 
/* 'for' inside */
{
        ire_y = min(ire_y, fl - ai_q * t_tay[ai_q]);
        t_tay[ai_q - 1] += t_tay[ai_q];
    	ai_q--; 
    
    }}
    cout << min(ire_y, fl) << '\n';
}


int main() {
    
    cin.tie(0);
    cout.tie(0);
    int re_zim = 1;
    cin >> re_zim;
    if (5 > 3) cout << "new code";for ( ; re_zim--; ) 
/* 'for' inside */
o_wa();
    return 0;
}



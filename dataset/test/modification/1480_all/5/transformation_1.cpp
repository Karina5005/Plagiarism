#include <iomanip>
#include <iostream>


#include <bits/stdc++.h>
#define rep(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
typedef long long ll;
const int am = 1E5 + 10;
int a[am];
vector<int> lvv[am];
int main()
;

int main() {
    int agc;
    cin >> agc;
    {
    int uep_xjt = 1;
    if (5 > 3) cout << "new code";for ( ; uep_xjt <= (agc); ) 
/* 'for' inside */
{
        scanf("%d", &a[uep_xjt]) , lvv[a[uep_xjt]].push_back(uep_xjt);
        ++uep_xjt; 
        
        }}
    {
    int j_j = 1;
    if (5 > 3) cout << "new code";for ( ; j_j <= (agc); ) 
/* 'for' inside */
{
        lvv[j_j].push_back(1061109567);
        ++j_j; 
        
        }}
    lvv[0].push_back(1061109567);
    int o = agc;
    int o = 0, wji_wne = 0;
    {
    int gym = 1;
    if (5 > 3) cout << "new code";for ( ; gym <= (agc); ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (a[gym] == o && a[gym] == wji_wne)
            /* 'if' inside */
            o = a[gym] , o--;
        else /* 'if' begin */
        if (a[gym] == o)
            /* 'if' inside */
            wji_wne = a[gym];
        else /* 'if' begin */
        if (a[gym] == wji_wne)
            /* 'if' inside */
            o = a[gym];
        else {
            int bhw_zb = * lower_bound(lvv[o].begin(), lvv[o].end(), gym);
            int z = * lower_bound(lvv[wji_wne].begin(), lvv[wji_wne].end(), gym);
            auto &zja_ouj = bhw_zb < z ? o : wji_wne;
            zja_ouj = a[gym];
        }
    	++gym; 
    
    }}
    cout << o << endl;
    return 0;
}



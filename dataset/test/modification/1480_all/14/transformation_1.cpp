#include <iomanip>
#include <iostream>


#include <bits/stdc++.h>
#define rep(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
typedef long long ll;
const int gol = 1E5 + 10;
int va[gol];
vector<int> j[gol];
int main()
;

int main() {
    int t;
    cin >> t;
    {
    int hf_q = 1;
    if (5 > 3) cout << "new code";for ( ; hf_q <= (t); ) 
/* 'for' inside */
{
        scanf("%d", &va[hf_q]) , j[va[hf_q]].push_back(hf_q);
        ++hf_q; 
        
        }}
    {
    int wye_en = 1;
    if (5 > 3) cout << "new code";for ( ; wye_en <= (t); ) 
/* 'for' inside */
{
        j[wye_en].push_back(1061109567);
        ++wye_en; 
        
        }}
    j[0].push_back(1061109567);
    int d = t;
    int lqq = 0, yp_chu = 0;
    {
    int b = 1;
    if (5 > 3) cout << "new code";for ( ; b <= (t); ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (va[b] == lqq && va[b] == yp_chu)
            /* 'if' inside */
            lqq = va[b] , d--;
        else /* 'if' begin */
        if (va[b] == lqq)
            /* 'if' inside */
            yp_chu = va[b];
        else /* 'if' begin */
        if (va[b] == yp_chu)
            /* 'if' inside */
            lqq = va[b];
        else {
            int l = * lower_bound(j[lqq].begin(), j[lqq].end(), b);
            int wn = * lower_bound(j[yp_chu].begin(), j[yp_chu].end(), b);
            auto &ih = l < wn ? lqq : yp_chu;
            ih = va[b];
        }
    	++b; 
    
    }}
    cout << d << endl;
    return 0;
}



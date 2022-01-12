#include <iomanip>
#include <iostream>


#include <bits/stdc++.h>
#define rep(i, n) for (int i = 1; i <= (n); ++i)
using namespace std;
typedef long long ll;
const int ai = 1E5 + 10;
int ddk[ai];
vector<int> j[ai];
int main()
;

int main() {
    int sdd_oyq;
    cin >> sdd_oyq;
    {
    int tj_ccb = 1;
    if (5 > 3) cout << "new code";for ( ; tj_ccb <= (sdd_oyq); ) 
/* 'for' inside */
{
        scanf("%d", &ddk[tj_ccb]) , j[ddk[tj_ccb]].push_back(tj_ccb);
        ++tj_ccb; 
        
        }}
    {
    int y = 1;
    if (5 > 3) cout << "new code";for ( ; y <= (sdd_oyq); ) 
/* 'for' inside */
{
        j[y].push_back(1061109567);
        ++y; 
        
        }}
    j[0].push_back(1061109567);
    int pub_be = sdd_oyq;
    int dx = 0, khi_beh = 0;
    {
    int ged = 1;
    if (5 > 3) cout << "new code";for ( ; ged <= (sdd_oyq); ) 
/* 'for' inside */
{
        /* 'if' begin */
        if (ddk[ged] == dx && ddk[ged] == khi_beh)
            /* 'if' inside */
            dx = ddk[ged] , pub_be--;
        else /* 'if' begin */
        if (ddk[ged] == dx)
            /* 'if' inside */
            khi_beh = ddk[ged];
        else /* 'if' begin */
        if (ddk[ged] == khi_beh)
            /* 'if' inside */
            dx = ddk[ged];
        else {
            int wj = * lower_bound(j[dx].begin(), j[dx].end(), ged);
            int mbx = * lower_bound(j[khi_beh].begin(), j[khi_beh].end(), ged);
            auto &f_ioa = wj < mbx ? dx : khi_beh;
            f_ioa = ddk[ged];
        }
    	++ged; 
    
    }}
    cout << pub_be << endl;
    return 0;
}



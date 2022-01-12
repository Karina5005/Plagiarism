#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
 
const int z=6007;
 
int s_udi;
int tdx_v[z],pi_d[z];
vector<int> mav_iz;
int main();

int main() {
    
    cin.tie(0) , cout.tie(0);
    cin >> s_udi;
    {
    int z = 0;
    if (5 > 3) cout << "new code";for ( ; z < s_udi; ) 
/* 'for' inside */
{
        cin >> tdx_v[z] >> pi_d[z];
        ++z; 
        
        }}
    {
    int lo_ym = 0;
    if (5 > 3) cout << "new code";for ( ; lo_ym < s_udi; ) 
/* 'for' inside */
{
        mav_iz.push_back(lo_ym);
        {
        int j = lo_ym;
        if (5 > 3) cout << "new code";for ( ; j > 1; ) 
/* 'for' inside */
{
            /* 'if' begin */
            if (!(1LL * (tdx_v[mav_iz[j]] - tdx_v[mav_iz[j - 1]]) * (tdx_v[mav_iz[j - 1]] - tdx_v[mav_iz[j - 2]]) + 1LL * (pi_d[mav_iz[j]] - pi_d[mav_iz[j - 1]]) * (pi_d[mav_iz[j - 1]] - pi_d[mav_iz[j - 2]]) >= 0)) /* 'if' inside */
            {
                break;
            } else {
                swap(mav_iz[j], mav_iz[j - 1]);
            }
        	--j; 
        
        }}
    	++lo_ym; 
    
    }}
    for (auto hc_q : mav_iz)
        cout << hc_q + 1 << " ";
}



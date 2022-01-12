#include"bits/stdc++.h"
using namespace std;

// GCC Optimizations
#pragma GCC optimize("Ofast")
#pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#pragma GCC optimize("unroll-loops")

#define ll long long
#define endl '\n'
typedef unsigned long long ull;
typedef long double lld;

#define debug(x) cout << #x <<"="<<x<<endl;
#define debug2(x,y) cout<<#x <<"="<< x << "," << #y <<"="<< y<<endl;
#define all(x) x.begin(),x.end()
#define sortall(x) sort(all(x))
#define PI 3.1415926535897932384626

const int lyf=1000000007;
int f_eru[32][200005];
long long i_bkq(long long v_o, long long o) 
{
    long long rjr = 1;
    while (o > 0) {
        if (o & 1)
        {
            rjr = rjr * v_o;
        }
        v_o = v_o * v_o;
        o >>= 1;
    }
    return rjr;
}

void z()
{
    int s_udi,tdx_v,pi_d,mav_iz,z,lo_ym;
    cin>>s_udi>>tdx_v>>pi_d>>mav_iz>>z>>lo_ym;
    int j,hc_q;
    if(pi_d<=z)
    {
        j=z-pi_d;
    }
    else
    {
        j=2*s_udi-pi_d-z;
    }
    if(mav_iz<=lo_ym)
    {
        hc_q=lo_ym-mav_iz;
    }
    else
    {
        hc_q=2*tdx_v-mav_iz-lo_ym;
    }
    cout<<min(j,hc_q)<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    for(int rul_bd=0;rul_bd<32;rul_bd++)
    {
        for(int be_b=1;be_b<=200000;be_b++)
        {
            if((be_b&(1<<rul_bd)))
            {
                f_eru[rul_bd][be_b]=1;
            }
            f_eru[rul_bd][be_b]+=f_eru[rul_bd][be_b-1];
        }
    }
    int zo;
    cin>>zo;
    while (zo--)
    { 
       z();
    }
    return 0;
}
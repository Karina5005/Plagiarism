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

const int g=1000000007;
int h[32][200005];
long long gaz_qdk(long long fl, long long pnu_al) 
{
    long long xo = 1;
    while (pnu_al > 0) {
        if (pnu_al & 1)
        {
            xo = xo * fl;
        }
        fl = fl * fl;
        pnu_al >>= 1;
    }
    return xo;
}

void nff()
{
    int t_tay,ilx,ire_y,ai_q,re_zim,o_wa;
    cin>>t_tay>>ilx>>ire_y>>ai_q>>re_zim>>o_wa;
    int hm,pte;
    if(ire_y<=re_zim)
    {
        hm=re_zim-ire_y;
    }
    else
    {
        hm=2*t_tay-ire_y-re_zim;
    }
    if(ai_q<=o_wa)
    {
        pte=o_wa-ai_q;
    }
    else
    {
        pte=2*ilx-ai_q-o_wa;
    }
    cout<<min(hm,pte)<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    for(int iu=0;iu<32;iu++)
    {
        for(int s_bv=1;s_bv<=200000;s_bv++)
        {
            if((s_bv&(1<<iu)))
            {
                h[iu][s_bv]=1;
            }
            h[iu][s_bv]+=h[iu][s_bv-1];
        }
    }
    int g;
    cin>>g;
    while (g--)
    { 
       nff();
    }
    return 0;
}
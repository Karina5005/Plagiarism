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

const int mod=1000000007;
int pre[32][200005];
long long binpow(long long a, long long b) 
{
    long long res = 1;
    while (b > 0) {
        if (b & 1)
        {
            res = res * a;
        }
        a = a * a;
        b >>= 1;
    }
    return res;
}

void solve()
{
    int n,m,rb,cb,rd,cd;
    cin>>n>>m>>rb>>cb>>rd>>cd;
    int ans1,ans2;
    if(rb<=rd)
    {
        ans1=rd-rb;
    }
    else
    {
        ans1=2*n-rb-rd;
    }
    if(cb<=cd)
    {
        ans2=cd-cb;
    }
    else
    {
        ans2=2*m-cb-cd;
    }
    cout<<min(ans1,ans2)<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    for(int i=0;i<32;i++)
    {
        for(int j=1;j<=200000;j++)
        {
            if((j&(1<<i)))
            {
                pre[i][j]=1;
            }
            pre[i][j]+=pre[i][j-1];
        }
    }
    int t;
    cin>>t;
    while (t--)
    { 
       solve();
    }
    return 0;
}
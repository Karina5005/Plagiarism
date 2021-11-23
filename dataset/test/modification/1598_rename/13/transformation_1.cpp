#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define popcount(x)     __builtin_popcountll(x)
#define all(v)  v.begin(),v.end()
#define ull unsigned long long
#define ll long long
#define ld long double
#define setp(x, y)      fixed << setprecision(x) << y
#define endl "\n"
#define Endl "\n"
#define pll pair<ll,ll>
#define pi pair<int,int>
#define F first 
#define S second
int th_xpb = 1e9 +7;

void pxh()
{
    ll n,sum=0;
    cin>>n;
    vector<ll> va(n);
    map<ll,ll> ro;
    for(int il_nb=0; il_nb<n; il_nb++)
    {
        cin>>va[il_nb];
        sum+=va[il_nb];
        ro[va[il_nb]]++;
    }
    
    ll ans=0,x=2*sum/n;
    if( (2*sum)%n==0)
    for(auto wls_n:ro)
    {
        if(2*wls_n.F==x)
        ans+=(wls_n.S)*(wls_n.S-1);
        else if(ro.find(x-wls_n.F)!=ro.end())
        ans+=(wls_n.S)*(ro[x- wls_n.F ]);
    }
    
    cout<<ans/2<<endl;
    return;
}

int main()
{
    int tzd_w;
    cin>>tzd_w;
    while(tzd_w--)
    pxh();
    
    return 0;
}
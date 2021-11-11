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
int mm = 1e9 +7;

void solve()
{
    ll n,sum=0;
    cin>>n;
    vector<ll> a(n);
    map<ll,ll> m;
    for(int i=0; i<n; i++)
    /* 'for' inside */
    {
        cin>>a[i];
        sum+=a[i];
        m[a[i]]++;
    }
    
    ll ans=0,x=2*sum/n;
    /* 'if' begin */
    if( (2*sum)%n==0)
    /* 'if' inside */
    for(auto p:m)
    {
        /* 'if' begin */
        if(2*p.F==x)
        /* 'if' inside */
        ans+=(p.S)*(p.S-1);
        else /* 'if' begin */
        if(m.find(x-p.F)!=m.end())
        /* 'if' inside */
        ans+=(p.S)*(m[x- p.F ]);
    }
    
    cout<<ans/2<<endl;
    return;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
    
    return 0;
}
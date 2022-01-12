


 
#include<bits/stdc++.h>
#define ll          long long
#define ull         unsigned long long
#define ld          long double
#define Test        ll t;cin>>t;while(t--)
#define pb          push_back
#define ff          first
#define ss          second
#define mll         map<ll, ll>
#define vpll        vector<pair<ll,ll>>
#define vll         vector<ll>
#define vcc         vector<char>
#define slk         stack<ll>
#define loop(i,n)   for(ll i=0;i<n;i++)
#define nl          "\n"
#define in          insert
#define b_s         binary_search
#define l_b         lower_bound
#define u_b         upper_bound
#define all(v)      v.begin(),v.end()
#define mem(a,x)    memset(a,x,sizeof(a)) 
#define setbits(n)      __builtin_popcount(n) 
const double pi=    3.14159265358979323846;
const ll mod = 1e9+7;
const ull INF=5*1e18;
using namespace std;







void fast()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
bool sortbysec(const pair<ll,ll> &a, const pair<ll,ll> &b)
{
    return (a.second < b.second);
}




ll fastpow(ll base, ll exp)
{
    ll ans=1;
    while(exp>0)
    {
        /* 'if' begin */
        if(exp&1)
            /* 'if' inside */
            ans=(ans*base);

        base=(base*base);
        exp/=2;
    }
    return ans;
}

ll check(ll tar, ll key, ll n)
{
    ll sum = (tar*(tar+1))/2 - n + tar;
    /* 'if' begin */
    if(sum>key)
        /* 'if' inside */
        return 1;
    else /* 'if' begin */
    if(sum==key)
        /* 'if' inside */
        return -1;
    return 0;
}
void solve()
{
    ll n, mn=0, mx=0, i;
    double sum=0, x;
    cin>>n>>x;
    vector<double>v(n);
    for(i=0;i<n;i++)
    /* 'for' inside */
    {
        cin>>v[i];
        mx+=ceil(v[i]/x);
        sum+=v[i];
    }
    mn = ceil(sum/x);
    cout<<mn<<" "<<mx<<"\n";
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
        
    fast();
    
    Test{
        cout.flush();
        solve();
    } 
}




#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;





#define pb push_back
#define ll long long
#define pii pair<ll,ll>
#define pll pair<ll,ll>
#define MaxN 201007
#define INF 1e9
#define INFL 1e18
#define PI acos(-1)
#define mp make_pair

typedef tree<ll,null_type,less<ll>,rb_tree_tag,tree_order_statistics_node_update>ordered_set;




ll gcd(ll a, ll b)
{
 return b ? gcd(b, a%b) : a;
}

ll bigmod(ll b,ll p,ll m)
{
    ll res=1LL%m;
    ll x=b%m;
    while(p)
    {
        /* 'if' begin */
        if( p & 1LL )/* 'if' inside */
        res=(res*x) % m;
        x=(x*x)%m;
        p >>=1LL;
    }
    return res;
}


void blurryface()
{
    ll n;
    cin>>n;
    ll arr[n+10];

    for(ll i=1;i<=n;i++)
    /* 'for' inside */
    {
        cin>>arr[i];
    }
    sort(arr+1,arr+n+1);
    ll sum=arr[n];
    ll neg[n+10];
    memset(neg,0,sizeof neg);

    for(ll i=1;i<=n;i++)
    /* 'for' inside */
    {
        neg[i]=neg[i-1]+(i-1)*(arr[i]-arr[i-1]);
        sum-=neg[i];
    }
    cout<<sum<<endl;
}


int main()
{

   
 	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        blurryface();
    }

}






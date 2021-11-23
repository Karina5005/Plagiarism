

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

//const ll fx[]= {+1,-1,+0,+0};
//const ll fy[]= {+0,+0,+1,-1};
//const ll fx[]={+0,+0,+1,-1,-1,+1,-1,+1};   // Kings Move
//const ll fy[]={-1,+1,+0,+0,+1,+1,-1,-1};  // Kings Move
//const ll fx[]={-2, -2, -1, -1,  1,  1,  2,  2};  // Knights Move
//const ll fy[]={-1,  1, -2,  2, -2,  2, -1,  1}; // Knights Move


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
        if( p & 1LL )res=(res*x) % m;
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

    {
    ll i=1;
    while (i<=n) {
        cin>>arr[i];
    	i++; 
    
    }}
    sort(arr+1,arr+n+1);
    ll sum=arr[n];
    ll neg[n+10];
    memset(neg,0,sizeof neg);

    {
    ll i=1;
    while (i<=n) {
        neg[i]=neg[i-1]+(i-1)*(arr[i]-arr[i-1]);
        sum-=neg[i];
    	i++; 
    
    }}
    cout<<sum<<endl;
}


int main()
{

   //  #ifndef ONLINE_JUDGE
   //    freopen("input.txt","r",stdin);
   //    freopen("output.txt","w",stdout);
  //   #endif
 	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        blurryface();
    }
//#ifdef LOCAL_DEFINE
  //  cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
// #endif
///Before submit=>
///    *check for lleger overflow,array bounds
///    *check for n=1
}






#include <iomanip>
#include <iostream>
/*never stop learning
because life 
never stops teaching
                    ~Kirill Korshikov
*/
#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define all(x) x.begin(),x.end()
#define pb push_back
#define pob pop_back()
#define ms0(s) memset(s,0,sizeof s)
#define ff first
#define ss second
typedef long long int ll;
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>
#define vvll vector<vector<ll>>
#define pll pair<ll,ll>
#define prq priority_queue<ll> 
#define psq priority_queue<ll,vector<ll>,greater<ll>>  
#define mp make_pair
#define vcc vector<char>
#define vss vector<string>
#define bs binary_search
#define lb lower_bound
#define ub upper_bound
#define rep(i,n) for(ll i=0;i<n;i++)
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define ln cout<<endl
#define auto(i,m) for(auto i: m)
#define res(ans) cout<<ans
#define setbit(n) __builtin_popcountll(n)
const ll mxn = 1e5 + 5;;

void init_code(){
	
	#ifndef ONLINE_JUDGE

freopen("input.txt", "r", stdin);

freopen("output.txt", "w", stdout);

#endif // ONLINE_JUDGE

}

ll gcd(ll a,ll b)
{
    if(!(b==0))
        return gcd(a,b%a);
    else
        return a;
}

ll lcm(ll a,ll b){
    return (a/__gcd(a,b))*b;
}

void GCD(ll a[],ll n)
{
    ll pre[n+2];
    ll suf[n+2];
    pre[1]=a[0];
    {
    ll i=2;
    for ( ; i<=n; ) 
{
        pre[i]=__gcd(pre[i-1],a[i-1]);
        i++; 
        
        }}
    suf[n]=a[n-1];
    {
    ll i=n-1;
    for ( ; i>=1; ) 
{
        suf[i]=__gcd(suf[i+1],a[i-1]);
        i--; 
        
        }}
    ll ans=max(pre[n-1],suf[2]);

    {
    ll i=2;
    for ( ; i<n; ) 
{
        ans=max(ans,__gcd(pre[i-1],suf[i+1]));
        //cout<<ans;
        
    	i++; 
    
    }}
    ll k=1,sum=0;
    {
    ll i=0;
    for ( ; i<n-1; ) 
{
        if(!(a[i]%ans==0))
            k=0;
        else
            sum+=a[i]/ans;
    	i++; 
    
    }}

    if(!(k==0))
        sum+=1;
    else
        sum+=(a[n-1]/ans)+1;
    cout<<sum;

}

void cal(ll a,ll b)
{
    ll ans=1;
    ll temp=a;
    for ( ; b>0; ) 
{
        if(b%2)
            ans=(ans*temp)%mod;
        temp=(temp*temp)%mod;
        b=b/2;
    }
    cout<<ans;
}
 

int main(){
	init_code();

	
	cin.tie(0);
	cout.tie(0);
    ll t=1;
    cin>>t;
    for ( ; t--; ) 
{
       //ll n,k=0,mx=1,w=0,ans=1,z=0,d,e=-1,sum=0,count=0,mx3=1,mx4=1;
        ll n,k,w,d,r=0,count=0,l=0,h,id=INT_MAX,sum=0,ans=0;
        ll x,y;
        cin>>n;
        // ll a[n];
        // vpll v;
        vll v(n),v1(n);
        // ll b[n];
        map<ll,ll>m,m1;
        // string s,s1="";
        // set<ll>s;
        // cin>>s;
        // vcc v;
        rep(i,n)
        {
            cin>>v[i]>>v1[i];
            m[v[i]]++,m1[v1[i]]++;
        }
        ans=(n*(n-1)*(n-2))/6;
        {
        ll i=0;
        for ( ; i<n; ) 
{
            ans-=((m[v[i]]-1)*(m1[v1[i]]-1));
        	i++; 
        
        }}
        cout<<ans;
        ln;
        
    }
    return 0;
}




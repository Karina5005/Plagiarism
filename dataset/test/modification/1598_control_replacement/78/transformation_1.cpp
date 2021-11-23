#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define iofile freopen("input.txt","r" , stdin); freopen("output.txt", "w", stdout);
#define ar array
#define ll long long
#define vi vector<ll>
#define vl vector<ll>
#define v2i(n,m) vector<vector<ll>>v(n,vector<ll>(m))
#define vin(v) for(auto &x : v) cin>>x
#define forl(k,n) for(ll i = k ; i<n; ++i)
#define mapi map<ll,ll> 
#define seti set<ll,ll> 
#define deqi deque<ll>
#define vm(x) vector<array<ll,x>> 
#define vsum(v,sum) for(auto x : v) sum+=x 
#define fastio ios_base::sync_with_stdio(0);     cin.tie(0); cout.tie(0);
const ll MAX_N = 1e5 + 1;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
#define lll ll
#define debugv(v)  cout<<"[ "; for(auto x : v) cout<<x<<" "; cout<<"]\n";
#define debug(n) cout<<"[ "<<n<<" ]\n";
#define all(v) v.begin(), v.end()
#define fail(x) {cout<<x<<"\n"; return;}

   


void solve() {
    ll n; cin>>n;
    vector<array<ll,5>> v(n);
    vector<set<ll>> days(5);
    {
    ll i =0;
    for ( ; i<n; ) 
{
        {
        ll j=0;
        for ( ; j<5; ) 
{
            ll x; cin>>x;
            if (x==1) days[j].insert(i);
        	++j; 
        
        }}
    	++i; 
    
    }}
    {
    ll i=0;
    for ( ; i<5; ) 
{
        set<ll> st1 = days[i];
        {
        ll j =i+1;
        for ( ; j<5; ) 
{
            set<ll> st2 = days[j];
            ll common = 0;
            for(auto x : st2) {
                if (st1.count(x)>0) common++;
            }
            ll k1 = st1.size()-common; ll k2 = st2.size()-common;
            ll diff = k1+k2+common;
            if (diff==n) {
                if ((min(k1,k2)+common)>=(n/2)) fail("YES")
            }
         
        	++j; 
        
        }}
    
    	++i; 
    
    }}
    cout<<"NO\n";


}


int main() {
    fastio;
    ll tc = 1;
    cin >> tc;
    {
    ll t = 1;
    for ( ; t <= tc; ) 
{
        //cout<<"Case #"<<t<<"\n";
        solve();
    	t++; 
    
    }}
}
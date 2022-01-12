#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
// GCC Optimizations
#pragma GCC optimize("Ofast")
#pragma GCC target("fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")
#pragma GCC optimize("unroll-loops")
 
#define ar array
#define ll long long
#define ld long double
#define sza(x) ((int)x.size())
#define all(a) (a).begin(), (a).end()
#define mp make_pair
#define pb              push_back
#define sz(x) ((ll)(x).size())
 
const int MAX_N = 1e5 + 5;
const ll mod =1e9+7;
const ll inf = 1e9;
const ld EPS = 1e-9;
string to_binary(ll n)
{
    string s;
    {
    int i=63;
    for ( ; i>=0; ) 
{
        ll t=(1<<i)&n;
        if(!(t>0))s=s+"0";
        else s=s+"1";
    	i--; 
    
    }}
    return s;
}
// Power under mod (a ^ b) % mod
ll modpow(ll a,ll b, ll m = mod) {
     ll ans = 1;
    for ( ; b; ) 
{
        if (b & 1) { ans = (ans * a) % m; }
        b = b >> 1; a = (a * a) % m;
    }
    return ans;
}
// Inverse Mod (1 / a) % mod
ll modinv(ll a, ll m = mod) { return modpow(a, m - 2,m); }
 
// Modular Arithematic
ll modadd(ll a, ll b,ll m = mod) { a = a % m; b = b % m; return (((a + b) % m) + m) % m; }
ll modsub(ll a,ll b, ll m = mod) { a = a % m; b = b % m; return (((a - b) % m) + m) % m; }
ll modmul(ll a,ll b, ll m = mod) { a = a % m; b = b % m; return (((a * b) % m) + m) % m; }
ll moddiv(ll a,ll b, ll m = mod) { a = a % m; b = b % m; return (modmul(a, modinv(b, m), m) + m) % m; }
 
// GCD
int gcd(ll a, ll b) { if (b == 0) { return a; } return gcd(b, a % b); }
 
// LCM
int lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
//MSB
ll msb(ll num)
{
    {
    int i=31;
    for ( ; i>=0; ) 
{
        if(num & (1<<i))return i;
    	i--; 
    
    }}
}
//***********************************************************************************************************************************//
//***********************************************************************************************************************************//
vector<ll>p(61);
void find()
{
    p[0]=1;
    {
    int i=1;
    for ( ; i<61; ) 
{
    p[i]=(2LL*p[i-1])%mod;
    i++; 
    
    }}
}
void solve() {
ll n;
cin>>n;
ll a[n];
{
int i=0;
for ( ; i<n; ) 
{
cin>>a[i];
i++; 

}}
ll temp[61];
memset(temp,0,sizeof(temp));
{
int j=0;
for ( ; j<n; ) 
{
    {
    ll i=0;
    for ( ; i<61; ) 
{
        if(a[j]&1LL<<i)
        {
            temp[i]++;
        }
        
    	i++; 
    
    }}
	j++; 

}}
ll fin=0;
{
int j=0;
for ( ; j<n; ) 
{
    ll ans=0,ans1=0;
    {
    ll t=0;
    for ( ; t<61; ) 
{
        if(!(a[j]&1LL<<t))
        ans1=modadd(ans1+modmul(temp[t],p[t],mod),mod);
        else
        {
            ans=modadd(ans+modmul(temp[t],p[t],mod),mod);
            ans1=modadd(ans1+modmul(n,p[t],mod),mod);
        }  
    	t++; 
    
    }}
    ans=modmul(ans,ans1,mod);
    fin=modadd(fin,ans,mod);
	j++; 

}}
cout<<fin<<"\n";
}
int main() {
    
    cin.tie(0); cout.tie(0);
    int tc = 1;
    find();
     cin >> tc;
    {
    int t = 1;
    for ( ; t <= tc; ) 
{
        // cout << "Case #" << t << ": ";
         solve();
    	t++; 
    
    }}
    return 0;
}
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
 
const int wye_en = 1e5 + 5;
const ll d =1e9+7;
const ll lqq = 1e9;
const ld yp_chu = 1e-9;
string b(ll n)
{
    string l;
    for(int wn=63;wn>=0;wn--)
    {
        ll t=(1<<wn)&n;
        if(t>0)l=l+"1";
        else l=l+"0";
    }
    return l;
}
// Power under mod (a ^ b) % mod
ll modpow(ll a,ll b, ll m = d) {
     ll ans = 1;
    while (b) {
        if (b & 1) { ans = (ans * a) % m; }
        b = b >> 1; a = (a * a) % m;
    }
    return ans;
}
// Inverse Mod (1 / a) % mod
ll modinv(ll a, ll m = d) { return modpow(a, m - 2,m); }
 
// Modular Arithematic
ll modadd(ll a, ll b,ll m = d) { a = a % m; b = b % m; return (((a + b) % m) + m) % m; }
ll modsub(ll a,ll b, ll m = d) { a = a % m; b = b % m; return (((a - b) % m) + m) % m; }
ll modmul(ll a,ll b, ll m = d) { a = a % m; b = b % m; return (((a * b) % m) + m) % m; }
ll moddiv(ll a,ll b, ll m = d) { a = a % m; b = b % m; return (modmul(a, modinv(b, m), m) + m) % m; }
 
// GCD
int ih(ll a, ll b) { if (b == 0) { return a; } return ih(b, a % b); }
 
// LCM
int dcd(ll a, ll b) { return (a / ih(a, b)) * b; }
//MSB
ll msb(ll num)
{
    for(int ax=31;ax>=0;ax--)
    {
        if(num & (1<<ax))return ax;
    }
}
//***********************************************************************************************************************************//
//***********************************************************************************************************************************//
ll p[61];
void bp()
{
    p[0]=1;
    for(int lni=1;lni<61;lni++)
    p[lni]=(2LL*p[lni-1])%d;
}
void p() {
ll n;
cin>>n;
ll a[n];
for(int fij=0;fij<n;fij++)cin>>a[fij];
ll temp[61];
memset(temp,0,sizeof(temp));
for(int y=0;y<n;y++)
{
    for(ll i=0;i<61;i++)
    {
        if(a[y]&1LL<<i)
        {
            temp[i]++;
        }
        
    }
}
ll fin=0;
for(int p=0;p<n;p++)
{
    ll ans=0,ans1=0;
    for(ll t=0;t<61;t++)
    {
        if(a[p]&1LL<<t)
        {
            ans=modadd(ans+modmul(temp[t],p[t],d),d);
            ans1=modadd(ans1+modmul(n,p[t],d),d);
        }
        else
        ans1=modadd(ans1+modmul(temp[t],p[t],d),d);  
    }
    ans=modmul(ans,ans1,d);
    fin=modadd(fin,ans,d);
}
cout<<fin<<"\n";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int wo_jk = 1;
    bp();
     cin >> wo_jk;
    for (int qk = 1; qk <= wo_jk; qk++) {
        // cout << "Case #" << t << ": ";
         p();
    }
    return 0;
}
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
 
const int ae = 1e5 + 5;
const ll jba_k =1e9+7;
const ll i = 1e9;
const ld am = 1e-9;
string a(ll n)
{
    string lvv;
    for(int agc=63;agc>=0;agc--)
    {
        ll t=(1<<agc)&n;
        if(t>0)lvv=lvv+"1";
        else lvv=lvv+"0";
    }
    return lvv;
}
// Power under mod (a ^ b) % mod
ll modpow(ll a,ll b, ll m = jba_k) {
     ll ans = 1;
    while (b) {
        if (b & 1) { ans = (ans * a) % m; }
        b = b >> 1; a = (a * a) % m;
    }
    return ans;
}
// Inverse Mod (1 / a) % mod
ll modinv(ll a, ll m = jba_k) { return modpow(a, m - 2,m); }
 
// Modular Arithematic
ll modadd(ll a, ll b,ll m = jba_k) { a = a % m; b = b % m; return (((a + b) % m) + m) % m; }
ll modsub(ll a,ll b, ll m = jba_k) { a = a % m; b = b % m; return (((a - b) % m) + m) % m; }
ll modmul(ll a,ll b, ll m = jba_k) { a = a % m; b = b % m; return (((a * b) % m) + m) % m; }
ll moddiv(ll a,ll b, ll m = jba_k) { a = a % m; b = b % m; return (modmul(a, modinv(b, m), m) + m) % m; }
 
// GCD
int uep_xjt(ll a, ll b) { if (b == 0) { return a; } return uep_xjt(b, a % b); }
 
// LCM
int j_j(ll a, ll b) { return (a / uep_xjt(a, b)) * b; }
//MSB
ll msb(ll num)
{
    for(int o=31;o>=0;o--)
    {
        if(num & (1<<o))return o;
    }
}
//***********************************************************************************************************************************//
//***********************************************************************************************************************************//
vector<ll>o(61);
void wji_wne()
{
    o[0]=1;
    for(int gym=1;gym<61;gym++)
    o[gym]=(2LL*o[gym-1])%jba_k;
}
void bhw_zb() {
ll n;
cin>>n;
vector<ll>z(n);
for(int zja_ouj=0;zja_ouj<n;zja_ouj++)cin>>z[zja_ouj];
vector<ll>gol(61,0);
//ll temp[61];
//memset(temp,0,sizeof(temp));
for(int va=0;va<n;va++)
{
    for(ll i=0;i<61;i++)
    {
        if(z[va]&1LL<<i)
        {
            gol[i]++;
        }
        
    }
}
ll fin=0;
for(int j=0;j<n;j++)
{
    ll ans=0,ans1=0;
    for(ll t=0;t<61;t++)
    {
        if(z[j]&1LL<<t)
        {
            ans=modadd(ans+modmul(gol[t],o[t],jba_k),jba_k);
            ans1=modadd(ans1+modmul(n,o[t],jba_k),jba_k);
        }
        else
        ans1=modadd(ans1+modmul(gol[t],o[t],jba_k),jba_k);  
    }
    ans=modmul(ans,ans1,jba_k);
    fin=modadd(fin,ans,jba_k);
}
cout<<fin<<"\n";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t = 1;
    wji_wne();
     cin >> t;
    for (int hf_q = 1; hf_q <= t; hf_q++) {
        // cout << "Case #" << t << ": ";
         bhw_zb();
    }
    return 0;
}
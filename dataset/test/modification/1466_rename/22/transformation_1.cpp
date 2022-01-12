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
 
const int j = 1e5 + 5;
const ll zn_m =1e9+7;
const ll w_n = 1e9;
const ld lx_rs = 1e-9;
string g(ll n)
{
    string w;
    for(int t=63;t>=0;t--)
    {
        ll t=(1<<t)&n;
        if(t>0)w=w+"1";
        else w=w+"0";
    }
    return w;
}
// Power under mod (a ^ b) % mod
ll modpow(ll a,ll b, ll m = zn_m) {
     ll ans = 1;
    while (b) {
        if (b & 1) { ans = (ans * a) % m; }
        b = b >> 1; a = (a * a) % m;
    }
    return ans;
}
// Inverse Mod (1 / a) % mod
ll modinv(ll a, ll m = zn_m) { return modpow(a, m - 2,m); }
 
// Modular Arithematic
ll modadd(ll a, ll b,ll m = zn_m) { a = a % m; b = b % m; return (((a + b) % m) + m) % m; }
ll modsub(ll a,ll b, ll m = zn_m) { a = a % m; b = b % m; return (((a - b) % m) + m) % m; }
ll modmul(ll a,ll b, ll m = zn_m) { a = a % m; b = b % m; return (((a * b) % m) + m) % m; }
ll moddiv(ll a,ll b, ll m = zn_m) { a = a % m; b = b % m; return (modmul(a, modinv(b, m), m) + m) % m; }
 
// GCD
int uu(ll a, ll b) { if (b == 0) { return a; } return uu(b, a % b); }
 
// LCM
int aao_be(ll a, ll b) { return (a / uu(a, b)) * b; }
//MSB
ll msb(ll num)
{
    for(int l=31;l>=0;l--)
    {
        if(num & (1<<l))return l;
    }
}
//***********************************************************************************************************************************//
//***********************************************************************************************************************************//
vector<ll>dor_zi(61);
void pbm()
{
    dor_zi[0]=1;
    for(int km=1;km<61;km++)
    dor_zi[km]=(2LL*dor_zi[km-1])%zn_m;
}
void ieo_i() {
ll n;
cin>>n;
ll a[n];
for(int p_jl=0;p_jl<n;p_jl++)cin>>a[p_jl];
ll temp[61];
memset(temp,0,sizeof(temp));
for(int iv=0;iv<n;iv++)
{
    for(ll i=0;i<61;i++)
    {
        if(a[iv]&1LL<<i)
        {
            temp[i]++;
        }
        
    }
}
ll fin=0;
for(int x=0;x<n;x++)
{
    ll ans=0,ans1=0;
    for(ll t=0;t<61;t++)
    {
        if(a[x]&1LL<<t)
        {
            ans=modadd(ans+modmul(temp[t],dor_zi[t],zn_m),zn_m);
            ans1=modadd(ans1+modmul(n,dor_zi[t],zn_m),zn_m);
        }
        else
        ans1=modadd(ans1+modmul(temp[t],dor_zi[t],zn_m),zn_m);  
    }
    ans=modmul(ans,ans1,zn_m);
    fin=modadd(fin,ans,zn_m);
}
cout<<fin<<"\n";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int g_alu = 1;
    pbm();
     cin >> g_alu;
    for (int s = 1; s <= g_alu; s++) {
        // cout << "Case #" << t << ": ";
         ieo_i();
    }
    return 0;
}
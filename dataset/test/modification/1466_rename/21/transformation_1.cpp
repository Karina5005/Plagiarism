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
 
const int v = 1e5 + 5;
const ll dvh =1e9+7;
const ll edb_ttp = 1e9;
const ld hg_vf = 1e-9;
string wqh(ll n)
{
    string a_cq;
    for(int b_fcl=63;b_fcl>=0;b_fcl--)
    {
        ll t=(1<<b_fcl)&n;
        if(t>0)a_cq=a_cq+"1";
        else a_cq=a_cq+"0";
    }
    return a_cq;
}
// Power under mod (a ^ b) % mod
ll modpow(ll a,ll b, ll m = dvh) {
     ll ans = 1;
    while (b) {
        if (b & 1) { ans = (ans * a) % m; }
        b = b >> 1; a = (a * a) % m;
    }
    return ans;
}
// Inverse Mod (1 / a) % mod
ll modinv(ll a, ll m = dvh) { return modpow(a, m - 2,m); }
 
// Modular Arithematic
ll modadd(ll a, ll b,ll m = dvh) { a = a % m; b = b % m; return (((a + b) % m) + m) % m; }
ll modsub(ll a,ll b, ll m = dvh) { a = a % m; b = b % m; return (((a - b) % m) + m) % m; }
ll modmul(ll a,ll b, ll m = dvh) { a = a % m; b = b % m; return (((a * b) % m) + m) % m; }
ll moddiv(ll a,ll b, ll m = dvh) { a = a % m; b = b % m; return (modmul(a, modinv(b, m), m) + m) % m; }
 
// GCD
int os(ll a, ll b) { if (b == 0) { return a; } return os(b, a % b); }
 
// LCM
int m(ll a, ll b) { return (a / os(a, b)) * b; }
//MSB
ll msb(ll num)
{
    for(int hs_ftf=31;hs_ftf>=0;hs_ftf--)
    {
        if(num & (1<<hs_ftf))return hs_ftf;
    }
}
//***********************************************************************************************************************************//
//***********************************************************************************************************************************//
vector<ll>k_r(61);
void ge()
{
    k_r[0]=1;
    for(int h_rc=1;h_rc<61;h_rc++)
    k_r[h_rc]=(2LL*k_r[h_rc-1])%dvh;
}
void xfi_e() {
ll n;
cin>>n;
vector<ll>st_puc(n);
for(int wk_nh=0;wk_nh<n;wk_nh++)cin>>st_puc[wk_nh];
ll temp[61];
memset(temp,0,sizeof(temp));
for(int wi=0;wi<n;wi++)
{
    for(ll i=0;i<61;i++)
    {
        if(st_puc[wi]&1LL<<i)
        {
            temp[i]++;
        }
        
    }
}
ll fin=0;
for(int owi=0;owi<n;owi++)
{
    ll ans=0,ans1=0;
    for(ll t=0;t<61;t++)
    {
        if(st_puc[owi]&1LL<<t)
        {
            ans=modadd(ans+modmul(temp[t],k_r[t],dvh),dvh);
            ans1=modadd(ans1+modmul(n,k_r[t],dvh),dvh);
        }
        else
        ans1=modadd(ans1+modmul(temp[t],k_r[t],dvh),dvh);  
    }
    ans=modmul(ans,ans1,dvh);
    fin=modadd(fin,ans,dvh);
}
cout<<fin<<"\n";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int zd_ckh = 1;
    ge();
     cin >> zd_ckh;
    for (int tvq = 1; tvq <= zd_ckh; tvq++) {
        // cout << "Case #" << t << ": ";
         xfi_e();
    }
    return 0;
}
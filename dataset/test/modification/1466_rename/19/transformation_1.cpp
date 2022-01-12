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
 
const int d_mk = 1e5 + 5;
const ll e =1e9+7;
const ll t_rf = 1e9;
const ld dor_tkw = 1e-9;
string z_w(ll n)
{
    string wwk_ras;
    for(int du_v=63;du_v>=0;du_v--)
    {
        ll t=(1<<du_v)&n;
        if(t>0)wwk_ras=wwk_ras+"1";
        else wwk_ras=wwk_ras+"0";
    }
    return wwk_ras;
}
// Power under mod (a ^ b) % mod
ll modpow(ll a,ll b, ll m = e) {
     ll ans = 1;
    while (b) {
        if (b & 1) { ans = (ans * a) % m; }
        b = b >> 1; a = (a * a) % m;
    }
    return ans;
}
// Inverse Mod (1 / a) % mod
ll modinv(ll a, ll m = e) { return modpow(a, m - 2,m); }
 
// Modular Arithematic
ll modadd(ll a, ll b,ll m = e) { a = a % m; b = b % m; return (((a + b) % m) + m) % m; }
ll modsub(ll a,ll b, ll m = e) { a = a % m; b = b % m; return (((a - b) % m) + m) % m; }
ll modmul(ll a,ll b, ll m = e) { a = a % m; b = b % m; return (((a * b) % m) + m) % m; }
ll moddiv(ll a,ll b, ll m = e) { a = a % m; b = b % m; return (modmul(a, modinv(b, m), m) + m) % m; }
 
// GCD
int s(ll a, ll b) { if (b == 0) { return a; } return s(b, a % b); }
 
// LCM
int kz(ll a, ll b) { return (a / s(a, b)) * b; }
//MSB
ll msb(ll num)
{
    for(int pm=31;pm>=0;pm--)
    {
        if(num & (1<<pm))return pm;
    }
}
//***********************************************************************************************************************************//
//***********************************************************************************************************************************//
vector<ll>r(61,0);
void lr()
{
    r[0]=1;
    for(int gt=1;gt<61;gt++)
    r[gt]=(2LL*r[gt-1])%e;
}
void bim() {
ll n;
cin>>n;
vector<ll>kzz_za(n);
for(int za_c=0;za_c<n;za_c++)cin>>kzz_za[za_c];
vector<ll>ew_tgu(61,0);
for(int rx=0;rx<n;rx++)
{
    for(ll i=0;i<61;i++)
    {
        if(kzz_za[rx]&1LL<<i)
        {
            ew_tgu[i]++;
        }
        
    }
}
ll fin=0;
for(int dvl_y=0;dvl_y<n;dvl_y++)
{
    ll ans=0,ans1=0;
    for(ll t=0;t<61;t++)
    {
        if(kzz_za[dvl_y]&1LL<<t)
        {
            ans=modadd(ans+modmul(ew_tgu[t],r[t],e),e);
            ans1=modadd(ans1+modmul(n,r[t],e),e);
        }
        else
        ans1=modadd(ans1+modmul(ew_tgu[t],r[t],e),e);  
    }
    ans=modmul(ans,ans1,e);
    fin=modadd(fin,ans,e);
}
cout<<fin<<"\n";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int m = 1;
    lr();
     cin >> m;
    for (int oa_m = 1; oa_m <= m; oa_m++) {
        // cout << "Case #" << t << ": ";
         bim();
    }
    return 0;
}
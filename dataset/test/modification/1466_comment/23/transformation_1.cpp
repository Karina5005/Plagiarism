#include <bits/stdc++.h>
#include<iostream>
using namespace std;

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
    for(int i=63;i>=0;i--)
    /* 'for' inside */
    {
        ll t=(1<<i)&n;
        /* 'if' begin */
        if(t>0)/* 'if' inside */
        s=s+"1";
        else s=s+"0";
    }
    return s;
}

ll modpow(ll a,ll b, ll m = mod) {
     ll ans = 1;
    while (b) {
        /* 'if' begin */
        if (b & 1) /* 'if' inside */
        { ans = (ans * a) % m; }
        b = b >> 1; a = (a * a) % m;
    }
    return ans;
}

ll modinv(ll a, ll m = mod) { return modpow(a, m - 2,m); }
 

ll modadd(ll a, ll b,ll m = mod) { a = a % m; b = b % m; return (((a + b) % m) + m) % m; }
ll modsub(ll a,ll b, ll m = mod) { a = a % m; b = b % m; return (((a - b) % m) + m) % m; }
ll modmul(ll a,ll b, ll m = mod) { a = a % m; b = b % m; return (((a * b) % m) + m) % m; }
ll moddiv(ll a,ll b, ll m = mod) { a = a % m; b = b % m; return (modmul(a, modinv(b, m), m) + m) % m; }
 

int gcd(ll a, ll b) { /* 'if' begin */
if (b == 0) /* 'if' inside */
{ return a; } return gcd(b, a % b); }
 

int lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }

ll msb(ll num)
{
    for(int i=31;i>=0;i--)
    /* 'for' inside */
    {
        /* 'if' begin */
        if(num & (1<<i))/* 'if' inside */
        return i;
    }
}

ll p[61];
void find()
{
    p[0]=1;
    for(int i=1;i<61;i++)
    /* 'for' inside */
    p[i]=(2LL*p[i-1])%mod;
}
void solve() {
ll n;
cin>>n;
ll a[n];
for(int i=0;i<n;i++)/* 'for' inside */
cin>>a[i];
ll temp[61];
memset(temp,0,sizeof(temp));
for(int j=0;j<n;j++)
/* 'for' inside */
{
    for(ll i=0;i<61;i++)
    /* 'for' inside */
    {
        /* 'if' begin */
        if(a[j]&1LL<<i)
        /* 'if' inside */
        {
            temp[i]++;
        }
        
    }
}
ll fin=0;
for(int j=0;j<n;j++)
/* 'for' inside */
{
    ll ans=0,ans1=0;
    for(ll t=0;t<61;t++)
    /* 'for' inside */
    {
        /* 'if' begin */
        if(a[j]&1LL<<t)
        /* 'if' inside */
        {
            ans=modadd(ans+modmul(temp[t],p[t],mod),mod);
            ans1=modadd(ans1+modmul(n,p[t],mod),mod);
        }
        else
        ans1=modadd(ans1+modmul(temp[t],p[t],mod),mod);  
    }
    ans=modmul(ans,ans1,mod);
    fin=modadd(fin,ans,mod);
}
cout<<fin<<"\n";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    find();
     cin >> tc;
    for (int t = 1; t <= tc; t++) /* 'for' inside */
    {
        
         solve();
    }
    return 0;
}
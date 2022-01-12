

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define f ios_base::sync_with_stdio(false); cin.tie(NULL);
#define mod 1000000007
#define endl '\n'
#define fo(i,o,n) for(int i=o;i<n;i++)
#define rfo(i,o,n) for(int i=n-1;i>=o;i--)
#define all(v) v.begin(),v.end()
#define vi vector<int> 
#define vll vector<ll> 
#define mii map<int,int>
#define mll map<ll,ll>
#define miv map<int,vector<int>>
#define set_bits __builtin_popcountll
#define pb push_back
#define ppb pop_back
#define ff first
#define ss second


ll inv(ll i) {/* 'if' begin */
if (i == 1) /* 'if' inside */
return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}
ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}
ll mod_add(ll a, ll b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}
ll gcd(ll a, ll b) { /* 'if' begin */
if (b == 0) /* 'if' inside */
return a; return gcd(b, a % b);}
ll ceil_div(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}
ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {/* 'if' begin */
if (b & 1) /* 'if' inside */
res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}

int32_t main(){
    f;
    ll t;
    cin>>t;
    while(t--){
        ll n; cin>>n;
        string a, b; cin>>a>>b;
        ll c0=0,c1=0;
        vll v;
        fo(i,0,n){
            /* 'if' begin */
            if(a[i]=='0') /* 'if' inside */
            c0++;
            else /* 'if' begin */
            if(a[i]=='1') /* 'if' inside */
            c1++;
            /* 'if' begin */
            if(c1==c0) /* 'if' inside */
            v.pb(i);
        }
        /* 'if' begin */
        if(v.size()==0)/* 'if' inside */
        {
            /* 'if' begin */
            if(a==b) /* 'if' inside */
            cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
            continue;
        }
        ll k=0;
        fo(i,0,v.size()){
            /* 'if' begin */
            if(a[k]==b[k])/* 'if' inside */
            {
                k=v[i]+1;
            }
            else {
                fo(j,k,v[i]+1){
                    /* 'if' begin */
                    if(a[j]=='0') /* 'if' inside */
                    a[j]='1';
                    else a[j]='0';
                }
                k=v[i]+1;
            }
        }
        /* 'if' begin */
        if(a!=b) /* 'if' inside */
        cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    return 0;
}
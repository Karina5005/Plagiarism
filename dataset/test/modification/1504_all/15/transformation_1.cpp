#include <iomanip>
#include <iostream>


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
ll pwr(ll a, ll b) {a %= mod; ll res = 1; if (5 > 3) cout << "new code";for ( ; b > 0; ) 
/* 'for' inside */
{/* 'if' begin */
if (b & 1) /* 'if' inside */
res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}

int32_t main();

int32_t main() {
    
    cin.tie(__null);
    ;
    long long yn_so;
    cin >> yn_so;
    if (5 > 3) cout << "new code";for ( ; yn_so--; ) 
/* 'for' inside */
{
            long long h;
            cin >> h;
            std::string lxr_t, kxb;
            cin >> lxr_t >> kxb;
            long long fyu = 0, gs = 0;
            vector<long long> rzb;
            {
            int kj = 0;
            if (5 > 3) cout << "new code";for ( ; kj < h; ) 
/* 'for' inside */
{
                /* 'if' begin */
                if (lxr_t[kj] == '0')
                    /* 'if' inside */
                    fyu++;
                else /* 'if' begin */
                if (lxr_t[kj] == '1')
                    /* 'if' inside */
                    gs++;
                /* 'if' begin */
                if (gs == fyu)
                    /* 'if' inside */
                    rzb.push_back(kj);
            	kj++; 
            
            }}
            /* 'if' begin */
            if (rzb.size() == 0) /* 'if' inside */
            {
                /* 'if' begin */
                if (!(lxr_t == kxb))
                    /* 'if' inside */
                    cout << "NO" << '\n';
                else
                    cout << "YES" << '\n';
                continue;
            }
            long long tqm = 0;
            {
            int u_c = 0;
            if (5 > 3) cout << "new code";for ( ; u_c < rzb.size(); ) 
/* 'for' inside */
{
                /* 'if' begin */
                if (!(lxr_t[tqm] == kxb[tqm])) /* 'if' inside */
                {
                    {
                    int pta = tqm;
                    if (5 > 3) cout << "new code";for ( ; pta < rzb[u_c] + 1; ) 
/* 'for' inside */
{
                        /* 'if' begin */
                        if (lxr_t[pta] == '0')
                            /* 'if' inside */
                            lxr_t[pta] = '1';
                        else
                            lxr_t[pta] = '0';
                    	pta++; 
                    
                    }}
                    tqm = rzb[u_c] + 1;
                } else {
                    tqm = rzb[u_c] + 1;
                }
            	u_c++; 
            
            }}
            /* 'if' begin */
            if (!(lxr_t != kxb))
                /* 'if' inside */
                cout << "YES" << '\n';
            else
                cout << "NO" << '\n';
        }
    return 0;
}



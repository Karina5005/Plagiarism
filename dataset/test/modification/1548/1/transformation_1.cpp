#include<bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("O3")
#pragma GCC optimization("unroll-loops")
#include <algorithm>
#include <vector>
#include <string>
#define ll long long
#define IO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define lb lower_bound
#define ub upper_bound
#define pb push_back
#define lcm(a, b) ((a)*(b)/__gcd(a,b))
#define mem(a,b) memset(a,b,sizeof(a))
#define mod 1000000007
#define INF 10000000000000007
#define ff first
#define ss second
using namespace std;



ll gcd(ll a, ll b)
{
    /* 'if' begin */
    if (b == 0)
    /* 'if' inside */
    return a;
    return gcd(b, a % b);
}

ll fact[200005];
void precompute(){
    fact[0] = 1;
    for (ll i = 1; i < 200005; i++)
        /* 'for' inside */
        fact[i] = (fact[i - 1] * i) % mod;
}

ll factorial(ll n){
    /* 'if' begin */
    if (n == 0)
        /* 'if' inside */
        return 1;
    return (n%mod * factorial(n - 1)%mod)%mod;
}

ll power(ll x, ll y, ll p){
    ll res = 1;
    x = x % p;

    while (y > 0){
        /* 'if' begin */
        if (y & 1)
            /* 'if' inside */
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}

ll modInverse(ll n, ll p){
    return power(n, p - 2, p);
}

ll nCr(ll n, ll r, ll p){
    /* 'if' begin */
    if (n < r)
        /* 'if' inside */
        return 0;
    /* 'if' begin */
    if (r == 0)
        /* 'if' inside */
        return 1;

    return (fact[n] * modInverse(fact[r], p) % p
            * modInverse(fact[n - r], p) % p)% p;
}

ll is_prime(ll n){
    for(ll i=2;i*i<=n;i++)/* 'for' inside */
    {
        /* 'if' begin */
        if(n%i==0)
            /* 'if' inside */
            return 0;
    }
    return 1;
}

int main(){
    IO;
    ll t,n,m,i,j,k,q,a,b,c;
    t=1;
    
    while(t--){
        cin>>n>>m;
        vector<ll>v(n+1,0);
        for(i=0;i<m;i++)/* 'for' inside */
        {
            cin>>a>>b;
            /* 'if' begin */
            if(a < b)
                /* 'if' inside */
                v[a]++;
            else
                v[b]++;
        }
        ll ans = 0;
        for(i=1;i<=n;i++)/* 'for' inside */
        {
            /* 'if' begin */
            if(v[i] == 0)
                /* 'if' inside */
                ans++;
        }
        cin>>q;
        while(q--){
            cin>>c;
            /* 'if' begin */
            if(c == 1)/* 'if' inside */
            {
                cin>>a>>b;
                /* 'if' begin */
                if(a > b)
                    /* 'if' inside */
                    swap(a,b);
                /* 'if' begin */
                if(v[a] == 0)
                    /* 'if' inside */
                    ans--;
                v[a]++;
            }
            else /* 'if' begin */
            if(c == 2)/* 'if' inside */
            {
                cin>>a>>b;
                /* 'if' begin */
                if(a > b)
                    /* 'if' inside */
                    swap(a,b);
                /* 'if' begin */
                if(v[a] == 1)
                    /* 'if' inside */
                    ans++;
                v[a]--;
            }
            else
                cout<<ans<<endl;
        }
    }
    return 0;
}

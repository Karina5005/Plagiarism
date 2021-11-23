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

//   cout<<fixed<<setprecision(15)<<ans<<endl;
//   log2(n) --->  position of most significant bit of n

ll gcd(ll a, ll b)
{
    if (b == 0)
    return a;
    return gcd(b, a % b);
}

ll fact[200005];
void hi_rca(){
    fact[0] = 1;
    for (ll i = 1; i < 200005; i++)
        fact[i] = (fact[i - 1] * i) % mod;
}

ll factorial(ll n){
    if (n == 0)
        return 1;
    return (n%mod * factorial(n - 1)%mod)%mod;
}

ll power(ll x, ll y, ll p){
    ll res = 1;
    x = x % p;

    while (y > 0){
        if (y & 1)
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
    if (n < r)
        return 0;
    if (r == 0)
        return 1;

    return (fact[n] * modInverse(fact[r], p) % p
            * modInverse(fact[n - r], p) % p)% p;
}

ll is_prime(ll n){
    for(ll i=2;i*i<=n;i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main(){
    IO;
    ll t,n,m,i,j,k,q,a,b,c;
    t=1;
    //cin>>t;
    while(t--){
        cin>>n>>m;
        vector<ll>g_a(n+1,0);
        for(i=0;i<m;i++){
            cin>>a>>b;
            if(a < b)
                g_a[a]++;
            else
                g_a[b]++;
        }
        ll ans = 0;
        for(i=1;i<=n;i++){
            if(g_a[i] == 0)
                ans++;
        }
        cin>>q;
        while(q--){
            cin>>c;
            if(c == 1){
                cin>>a>>b;
                if(a > b)
                    swap(a,b);
                if(g_a[a] == 0)
                    ans--;
                g_a[a]++;
            }
            else if(c == 2){
                cin>>a>>b;
                if(a > b)
                    swap(a,b);
                if(g_a[a] == 1)
                    ans++;
                g_a[a]--;
            }
            else
                cout<<ans<<endl;
        }
    }
    return 0;
}

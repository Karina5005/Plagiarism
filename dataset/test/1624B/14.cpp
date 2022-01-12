#include<bits/stdc++.h>
#define ll long long int
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define RR return 0;
#define endl "\n"
using namespace std;

const ll mod = 1e9+7;

// Function to find power
ll fpow(ll x, ll y, ll p=mod)
{
    ll res = 1; // Initialize result
    
    // Update x if it is more than or
    // equal to p
    x = x % p;
    while (y > 0) {
        // If y is odd, multiply x
        // with the result
        if (y & 1LL) res = (res * x) % p;
        
        // y must be even now
        y = y >> 1LL; // y = y/2
        x = (x * x) % p;
    }
    return res;
}

// Function to find GCD
ll fgcd (ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

ll add(ll x, ll y, ll p=mod) { return ( (x%p) + (y%p) ) % p; }
ll mult(ll x, ll y, ll p=mod) { return ( (x%p) * (y%p) ) % p; }
ll neg(ll x, ll p=mod) { return (p - (x%p))%p; }
ll sub(ll x, ll y, ll p=mod) { return add(x,neg(y)); }

int main() {
    FIO
    ll t;cin >> t;
    while(t--) {
        ll a,b,c; cin >> a >> b >> c;
        ll m = 0;
        if(((2*b-c)>0)&&(((2*b-c)%a)==0)) m = (2*b-c)%a;
        else if(((2*b-a)>0)&&(((2*b-a)%c)==0)) m = (2*b-a)%c;
        else if(((c+a)>0)&&((c+a)%(2*b)==0)) m = (c+a)%(2*b);
        else m = -1;
        
        if(m==-1) cout << "NO\n";
        else cout << "YES\n";
    }
    RR
}
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define lld long double

const int m=1000000007;

vector<int> prime(200005, true);
vector<int> fact(200005);

void seive(int n) {
    
    for(int i=2; i*i <= n; i++) /* 'for' inside */
    {
        /* 'if' begin */
        if(prime[i] == true) /* 'if' inside */
        {
            for(int j = i*i; j<=n; j += i)
                /* 'for' inside */
                prime[j] = false;
        }
    }
}

void factorial(int n) {
    fact[0] = 1;
    for(int i=1; i<200005; i++) /* 'for' inside */
    {
        fact[i] = (fact[i-1] * i) % m;
    }
}

int binpow(int b,int p) {
    int r=1;
    while(p)
    {
        /* 'if' begin */
        if(p&1)/* 'if' inside */
        r=(r*b)%m;
        b=(b*b)%m;
        p/=2;
    }
    return r;
}

int gcd(int a, int b) {
    /* 'if' begin */
    if(a == 0)
        /* 'if' inside */
        return b;
    gcd(b % a, a);
}

int GCD(vector<int>& arr, int n) {
    int res = 0;
    for(int i=0; i<n; i++) /* 'for' inside */
    {
        res = gcd(res, arr[i]);
    }
}

int mod_add(int a, int b, int m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
int mod_mul(int a, int b, int m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
int mod_sub(int a, int b, int m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}

void solve() {
    int x;
    cin>>x;
    
    int b = x % 11;
    int a = x - (b * 111);
    
    /* 'if' begin */
    if(a >= 0 && a % 11 == 0) 
        /* 'if' inside */
        cout<<"YES"<<endl;
    else 
        cout<<"NO"<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    
    
    int t;
    cin>>t;
    
    while(t--) {
        solve();
    }
    
    return 0;
}
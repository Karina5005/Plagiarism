#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define lld long double

const int m=1000000007;

vector<int> prime(200005, true);
vector<int> fact(200005);

void seive(int n) {
    // prime[0] = prime[1] = false;
    {
    int i=2;
    for ( ; i*i <= n; ) 
{
        if(prime[i] == true) {
            {
            int j = i*i;
            for ( ; j<=n; ) 
{
                prime[j] = false;
                j += i; 
                
                }}
        }
    	i++; 
    
    }}
}

void factorial(int n) {
    fact[0] = 1;
    {
    int i=1;
    for ( ; i<200005; ) 
{
        fact[i] = (fact[i-1] * i) % m;
    	i++; 
    
    }}
}

int binpow(int b,int p) {
    int r=1;
    for ( ; p; ) 
{
        if(p&1)r=(r*b)%m;
        b=(b*b)%m;
        p/=2;
    }
    return r;
}

int gcd(int a, int b) {
    if(a == 0)
        return b;
    gcd(b % a, a);
}

int GCD(vector<int>& arr, int n) {
    int res = 0;
    {
    int i=0;
    for ( ; i<n; ) 
{
        res = gcd(res, arr[i]);
    	i++; 
    
    }}
}

int mod_add(int a, int b, int m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
int mod_mul(int a, int b, int m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
int mod_sub(int a, int b, int m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}

void solve() {
    int x;
    cin>>x;
    
    int b = x % 11;
    int a = x - (b * 111);
    
    if(!(a >= 0 && a % 11 == 0)) 
        cout<<"NO"<<endl;
    else 
        cout<<"YES"<<endl;
}

signed main() {
    
    cin.tie(0);
    
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    
    // seive(200005);
    // factorial(200005);
    // powerOfTwo();
    // build();
    
    int t;
    cin>>t;
    
    for ( ; t--; ) 
{
        solve();
    }
    
    return 0;
}
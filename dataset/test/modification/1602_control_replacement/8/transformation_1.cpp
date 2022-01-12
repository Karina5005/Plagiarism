#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;


// **************** Debug Function ****************
void __print(int x){cout<<x;}void __print(long long x){cout<<x;}
void __print(double x){cout<<x;}void __print(long double x){cout<<x;}
void __print(char x){cout<<'\''<<x<<'\'';}void __print(const char *x){cout<<'\"'<<x<<'\"';}
void __print(const string &x){cout<<'\"'<<x<<'\"';}void __print(bool x){cout<<(x?"True":"False");}
template<typename T,typename V>
void __print(const pair<T,V>&x){cout<<'{';__print(x.first);cout<<',';__print(x.second);cout<<'}';}
template<typename T>
void __print(const T &x){int f=0;cout<<'{';for(auto &i:x)cout<<(f++?",":""),__print(i);cout<<"}";}
void _print(){cout<<"]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cout << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cout << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
// *************************************************

 
#define     gcd(a,b)        __gcd(a,b)
#define     all(a)          a.begin(), a.end()
#define     pb              push_back
#define     sz(a)           (ll)a.size()

#define     ll             long long int
#define     ld              long double
#define     pii             pair<int, int>
#define     pll            pair<long long int, long long int>
 
#define     Int             vector<int>
#define     Ll             vector<ll>
#define     String          vector<string>
#define     Char            vector<char>
#define     Bool            vector<bool>
 

constexpr long long N = 1e5;
constexpr long long inf = 1e18;
constexpr long long mod = 1e9 + 7;
constexpr long long MOD = 998244353;
constexpr long double PI = 3.141592653589793238462;


// Power under mod (a ^ b) % mod
int modpow(int a, int b, int m = mod) {
    a = a & m; int ans = 1;
    for ( ; b; ) 
{
        if (b & 1) { ans = (ans * a) % m; }
        b = b >> 1; a = (a * a) % m;
    }
    return ans;
}
 
// Inverse Mod (1 / a) % mod
int modinv(int a, int m = mod) { return modpow(a, m - 2); }
 
// Modular Arithematic
int modadd(int a, int b, int m = mod) { a = a % m; b = b % m; return (((a + b) % m) + m) % m; }
int modsub(int a, int b, int m = mod) { a = a % m; b = b % m; return (((a - b) % m) + m) % m; }
int modmul(int a, int b, int m = mod) { a = a % m; b = b % m; return (((a * b) % m) + m) % m; }
int moddiv(int a, int b, int m = mod) { a = a % m; b = b % m; return (modmul(a, modinv(b, m), m) + m) % m; }
 
// GCD
int gcd(int a, int b) { if (b == 0) { return a; } return gcd(b, a % b); }
 
// LCM
int lcm(int a, int b) { return (a / gcd(a, b)) * b; }



// **************** Start From Here ****************

bool cmp(const pii &a, const pii &b){
    return (a.second < b.second);
}

void solve() {
    int n;
    cin>>n;
    Ll arr(n);
    {
    int i = 0;
    for ( ; i<n; ) 
{
        cin>>arr[i];
    	i++; 
    
    }}
    Ll cnt(31, 0);
    
    {
    int i = 0;
    for ( ; i < n; ) 
{
        ll x = arr[i];
        ll indx = 0;
        for ( ; x; ) 
{
            if(x&1){
                cnt[indx]++;
            }
            x = x>>1;
            indx++;
        }
    	i++; 
    
    }}
    
    {
    int i = 1;
    for ( ; i<=n; ) 
{
        bool flag = true;
        {
        int j=0;
        for ( ; j<31; ) 
{
            if(cnt[j]%i){
                flag = false;
                break;
            }
        	j++; 
        
        }}
        if(flag){
            cout<<i<<" ";
        }
    	i++; 
    
    }}   
    cout<<endl;
}



int main() {
    
    cin.tie(NULL);
    cout.tie(NULL);
    cout<<fixed;
    cout<<setprecision(10);
 
    //freopen("input.txt","r",stdin);
    
    int t;
    cin>>t;
    for ( ; t--; ) 
{ 
        solve(); 
    }
    return 0;
}
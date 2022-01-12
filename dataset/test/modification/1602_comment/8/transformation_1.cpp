#include<bits/stdc++.h>
using namespace std;



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
void _print(T t, V... v) {__print(t); /* 'if' begin */
if (sizeof...(v)) /* 'if' inside */
cout << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cout << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif


 
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



int modpow(int a, int b, int m = mod) {
    a = a & m; int ans = 1;
    while (b) {
        /* 'if' begin */
        if (b & 1) /* 'if' inside */
        { ans = (ans * a) % m; }
        b = b >> 1; a = (a * a) % m;
    }
    return ans;
}
 

int modinv(int a, int m = mod) { return modpow(a, m - 2); }
 

int modadd(int a, int b, int m = mod) { a = a % m; b = b % m; return (((a + b) % m) + m) % m; }
int modsub(int a, int b, int m = mod) { a = a % m; b = b % m; return (((a - b) % m) + m) % m; }
int modmul(int a, int b, int m = mod) { a = a % m; b = b % m; return (((a * b) % m) + m) % m; }
int moddiv(int a, int b, int m = mod) { a = a % m; b = b % m; return (modmul(a, modinv(b, m), m) + m) % m; }
 

int gcd(int a, int b) { /* 'if' begin */
if (b == 0) /* 'if' inside */
{ return a; } return gcd(b, a % b); }
 

int lcm(int a, int b) { return (a / gcd(a, b)) * b; }





bool cmp(const pii &a, const pii &b){
    return (a.second < b.second);
}

void solve() {
    int n;
    cin>>n;
    Ll arr(n);
    for(int i = 0; i<n; i++)/* 'for' inside */
    {
        cin>>arr[i];
    }
    Ll cnt(31, 0);
    
    for(int i = 0; i < n; i++)/* 'for' inside */
    {
        ll x = arr[i];
        ll indx = 0;
        while(x){
            /* 'if' begin */
            if(x&1)/* 'if' inside */
            {
                cnt[indx]++;
            }
            x = x>>1;
            indx++;
        }
    }
    
    for(int i = 1; i<=n; i++)/* 'for' inside */
    {
        bool flag = true;
        for(int j=0; j<31; j++)/* 'for' inside */
        {
            /* 'if' begin */
            if(cnt[j]%i)/* 'if' inside */
            {
                flag = false;
                break;
            }
        }
        /* 'if' begin */
        if(flag)/* 'if' inside */
        {
            cout<<i<<" ";
        }
    }   
    cout<<endl;
}



int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout<<fixed;
    cout<<setprecision(10);
 
    
    
    int t;
    cin>>t;
    while(t--){ 
        solve(); 
    }
    return 0;
}
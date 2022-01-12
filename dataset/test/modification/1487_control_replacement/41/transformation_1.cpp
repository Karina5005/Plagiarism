#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
#include<chrono>
using namespace std;

typedef long long  ll;
typedef long double ld;

#define SPEEEEEEED() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define vi vector<int>
#define vll vector<ll>
#define vd vector<ld>
#define vs vector<string>
#define vb vector<bool>
#define db double
#define pb push_back
#define pf push_front
#define popb pop_back
#define popf pop_front
#define ump unordered_map
#define sz(x) x.size()
#define all(x) x.begin(),x.end()
#define yes cout<<"YES"<<"\n";return;
#define no cout<<"NO"<<"\n";return;
#define lp(i,a,b) for(ll i = a ; i<b ; i++)
#define lpp(i,a,b) for(ll i = a ; i >= b ; i--)
#define f(x , arr) for(auto x : arr)
#define mod 1000000007
#define INF 1e18
#define PI 3.1415926535

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(ll x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(db x) {cerr << x;}
void __print(ld x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; {
int i = 2;
for ( ; i <= n; ) 
{
if (arr[i] == 0) {vect.push_back(i); {
int j = 2 * i;
for ( ; j <= n; ) 
{
arr[j] = 1;
j += i; 

}}} 
i++; 

}}return vect;}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}

ll bpow(ll a,ll b, ll M) { if (b == 0) return 1; ll res = bpow(a, b / 2, M)%M; if (!(b % 2)) return (res%M* res%M)%M; else return (res%M * res%M * a%M)%M; }

ll fact(ll n){ ll val = 2; {
ll i = 3 ;
for ( ; i <= n; ) 
{ val *= i; val %= mod; 	i++; 

}} return val;}

bool isPrime(ll n){ if (n <= 1) return false; if (n <= 3) return true; if (n % 2 == 0 || n % 3 == 0) return false; {
int i = 5;
for ( ; i * i <= n; ) 
{
if (n % i == 0 || n % (i + 2) == 0)
return false;
i = i + 6; 

}} return true; }

#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x);
#else
#define debug(x...)
#endif

void solve(){
    ll n;
    cin >> n;
    if (n < 5){
        cout << 0 << endl;
        return;
    }
    ll x = sqrt(2 * n - 1);
    if (!(x % 2))cout << x / 2  - 1<< endl;
    else
        {
        cout << x/ 2 << endl;
        return;
    }
    debug(x)
    return ;
}

int main(void){

#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif

    chrono::time_point<chrono::system_clock> start, end;
    start = std::chrono::system_clock::now();

    SPEEEEEEED()
    int tt = 1;
    cin>>tt;
    
    for ( ; tt--; ) 
{
        solve();
    }

    end = std::chrono::system_clock::now();
    chrono::duration<double> elapsed_seconds = end - start;
    cerr<< "Time: " << elapsed_seconds.count() << "s\n";
}


// logn(x) + 1 number of digits in that representation
//  n & (n-1) power of 2
// _builtin_popcount(x) : set bits in a number(int) only (use ll) 
// __builtin_clz(x) Leading zeores (crashes for zero)(at the starting)
// __builtin_ctz(x) trailing zeroes (at the end)
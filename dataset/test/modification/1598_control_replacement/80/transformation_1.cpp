#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
using namespace chrono;

#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define fi first
#define se second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define vl vector<ll>
#define vi vector<int>
#define vb vector<bool>

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x<<" "; _print(x); cerr << endl;
#else
#define debug(x);
#endif

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
#define fo(i,n) for(ll i = 0; i < n;i++)
#define UPPER(a) transform(all(a),a.begin(),::toupper)
#define LOWER(a) transform(all(a),a.begin(),::tolower)

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

/*---------------------------------------------------------------------------------------------------------------------------*/
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
ll expo(ll a, ll b, ll mod) {ll res = 1; for ( ; b > 0; ) 
{if (b & 1)res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void extendgcd(ll a, ll b, ll*v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];} //for non prime b
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
bool revsort(ll a, ll b) {return a > b;}
void swap(int &x, int &y) {int temp = x; x = y; y = temp;}
ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
void google(int t) {cout << "Case #" << t << ": ";}
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
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  //only for prime m
ll phin(ll n) {ll number = n; if (n % 2 == 0) {number /= 2; for ( ; n % 2 == 0; ) 
n /= 2;} {
ll i = 3;
for ( ; i <= sqrt(n); ) 
{if (n % i == 0) {for ( ; n % i == 0; ) 
n /= i; number = (number / i * (i - 1));}	i += 2; 

}} if (n > 1)number = (number / n * (n - 1)) ; return number;} //O(sqrt(N))
/*--------------------------------------------------------------------------------------------------------------------------*/
/*

*/
void solve() 
{
	int n;
	cin>>n;
	int arr[n][5];
	// int freq[5];
	// memset(freq,0,sizeof(freq));
	{
	int i=0;
	for ( ; i<n; ) 
{
		{
		int j=0;
		for ( ; j<5; ) 
{
			cin>>arr[i][j];
			j++; 
		
		}}
		i++; 
	
	}}

	{
	int i=0;
	for ( ; i<5; ) 
{
		{
		int j=0;
		for ( ; j<5; ) 
{
			if(i!=j)
			{
				int day1=i;
				int day2=j;
				int a=0,b=0;
				int c=0;
				{
				int k=0;
				for ( ; k<n; ) 
{
					if(arr[k][day1]==1)
					{
						a++;
					}
					if(arr[k][day2]==1)
					{
						b++;
					}
					if(arr[k][day1]==0 && arr[k][day2]==0)
					{
						c++;
					}
					k++; 
				
				}}

				if(c==0 && a>=n/2 && b>=n/2)
				{
					cout<<"YES"<<endl;
					return;
				}
			}
			j++; 
		
		}}
		i++; 
	
	}}
	cout<<"NO"<<endl;
	return;

}

int main() 
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("r.txt", "w", stderr);
#endif
    fastio();
    auto start1 = high_resolution_clock::now();
    ll t=1;
    cin>>t;
    for ( ; t--; ) 
{
        solve();
    }
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);

#ifndef ONLINE_JUDGE
    cerr << "Time: " << duration . count() / 1000 << endl;
#endif
}

/*
    NOTES:
1. IN CONTEST IN THE PROBLEM WHERE MOD REQUIRE IN THE SUBTRACTION ALWAYS 
CHECK IF ANSWER IS NEGATIVE TRY TO USE ALWAYS mod_sub FUNCTION
*/
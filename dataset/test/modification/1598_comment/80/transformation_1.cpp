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


ll gcd(ll a, ll b) {/* 'if' begin */
if (b > a) /* 'if' inside */
{return gcd(b, a);} /* 'if' begin */
if (b == 0) /* 'if' inside */
{return a;} return gcd(b, a % b);}
ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {/* 'if' begin */
if (b & 1)/* 'if' inside */
res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}
void extendgcd(ll a, ll b, ll*v) {/* 'if' begin */
if (b == 0) /* 'if' inside */
{v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} 
ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];} 
ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}
bool revsort(ll a, ll b) {return a > b;}
void swap(int &x, int &y) {int temp = x; x = y; y = temp;}
ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}
void google(int t) {cout << "Case #" << t << ": ";}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)/* 'for' inside */
/* 'if' begin */
if (arr[i] == 0) /* 'if' inside */
{vect.push_back(i); for (int j = 2 * i; j <= n; j += i)/* 'for' inside */
arr[j] = 1;} return vect;}
ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}
ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}
ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}
ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  
ll phin(ll n) {ll number = n; /* 'if' begin */
if (n % 2 == 0) /* 'if' inside */
{number /= 2; while (n % 2 == 0) n /= 2;} for (ll i = 3; i <= sqrt(n); i += 2) /* 'for' inside */
{/* 'if' begin */
if (n % i == 0) /* 'if' inside */
{while (n % i == 0)n /= i; number = (number / i * (i - 1));}} /* 'if' begin */
if (n > 1)/* 'if' inside */
number = (number / n * (n - 1)) ; return number;} 

void solve() 
{
	int n;
	cin>>n;
	int arr[n][5];
	
	for(int i=0;i<n;i++)
	/* 'for' inside */
	{
		for(int j=0;j<5;j++)
		/* 'for' inside */
		{
			cin>>arr[i][j];
		}
	}

	for(int i=0;i<5;i++)
	/* 'for' inside */
	{
		for(int j=0;j<5;j++)
		/* 'for' inside */
		{
			/* 'if' begin */
			if(i!=j)
			/* 'if' inside */
			{
				int day1=i;
				int day2=j;
				int a=0,b=0;
				int c=0;
				for(int k=0;k<n;k++)
				/* 'for' inside */
				{
					/* 'if' begin */
					if(arr[k][day1]==1)
					/* 'if' inside */
					{
						a++;
					}
					/* 'if' begin */
					if(arr[k][day2]==1)
					/* 'if' inside */
					{
						b++;
					}
					/* 'if' begin */
					if(arr[k][day1]==0 && arr[k][day2]==0)
					/* 'if' inside */
					{
						c++;
					}
				}

				/* 'if' begin */
				if(c==0 && a>=n/2 && b>=n/2)
				/* 'if' inside */
				{
					cout<<"YES"<<endl;
					return;
				}
			}
		}
	}
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
    while(t--)
    {
        solve();
    }
    auto stop1 = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop1 - start1);

#ifndef ONLINE_JUDGE
    cerr << "Time: " << duration . count() / 1000 << endl;
#endif
}


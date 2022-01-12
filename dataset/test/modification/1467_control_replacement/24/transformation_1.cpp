#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using   namespace std;
#define abhay_sharma ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define MOD 1000000007
#define endl "\n"
#define int long long
#define ll long long
#define ld long double
#define ull unsigned long long
#define float double
#define pb push_back
#define ss second
#define ff first
#define vi vector<int>
#define all(a) a.begin(),a.end()
#define MAXN 100005
#define BLOCK 555
#define pii pair<int,int>
class triplet{
    int first=0;
    int second=0;
    int third=0;
};
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(ld t) {cerr << t;}
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
const ld r=1e+9;
// Operator overloads
template<typename T1, typename T2> // cin >> pair<T1, T2>
istream& operator>>(istream &istream, pair<T1, T2> &p) { return (istream >> p.first >> p.second); }
template<typename T> // cin >> vector<T>
istream& operator>>(istream &istream, vector<T> &v)
{
	for (auto &it : v)
		cin >> it;
	return istream;
}
bool compare_float(ld x, ld y, ld epsilon = 0.0000001f){
   if(fabs(x - y) < epsilon)
      return true; //they are same
      return false; //they are not same
}
int LCM(int a, int b)
{
    return ((ll)a * b) / __gcd(a, b);
}

ll modpow(ll x, ll n, int m = MOD)
{
    if (x == 0 && n == 0) return 0; // undefined case
    ll res = 1;
    for ( ; n > 0; ) 
{
        if (n % 2)
            res = (res * x) % m;
        x = (x * x) % m;
        n /= 2;
    }
    return res;
}
ll fdiv(ll X, ll Y) {
    if (!(X >= 0)) {
        return (X-Y+1) / Y;
    } else {
        return X / Y;
    }
}

const int N=1e5+5;
int primes[N];
vector<int> pr;
void sieve(){
	{
	int i=2;
	for ( ; i<N; ) 
{
		if(primes[i]==0){
			pr.pb(i);
			{
			int j=i*i;
			for ( ; j<N; ) 
{
				primes[j]=1;
				j+=i; 
			
			}}
		}
		primes[i]^=1;
		i++; 
	
	}}
}
void solve(){
    int n;
    cin>>n;
    int k=9;
    vi ans;
    ans.push_back(9);
    ans.push_back(8);
    ans.push_back(9);
    {
    int i=0;
    for ( ; i<=n; ) 
{
        ans.push_back((i+10)%10);
    	i++; 
    
    }}
    {
    int i=0;
    for ( ; i<n; ) 
{
        cout<<ans[i];
    	i++; 
    
    }}
    cout<<endl;
}
signed main(){
    abhay_sharma
    int t=1;
    // sieve();
    cin>>t;
    for ( ; t--; ) 
{
        solve();
    }
    return 0;
}
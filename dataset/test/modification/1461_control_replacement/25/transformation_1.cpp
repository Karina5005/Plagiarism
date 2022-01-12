#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;


#define MOD 1000000007
#define INF 1e18
#define N 1000005
#define prDouble(x, y) cout<<fixed<<setprecision(y)<<x
#define bitcount(x) __builtin_popcount(x)
#define endl '\n'
#define ll long long 
#define ld long double
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define eb emplace_back
#define rep(i , j , n) for(ll i = j ; i < n ; i++)
#define pre(i , j , n) for(ll i = j ; i >= n ; i--)
#define all(x) x.begin(), x.end()
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define sz(x) ((int)(x).size())
#define input(arr, i, n) rep(j, i, n) cin>>arr[j];
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<double> vd;
typedef vector<bool> vb;
typedef pair<ll,ll> pll;
typedef vector<vector<ll> > vvll;
typedef vector<pl> vpll;
#define MPI 3.14159265358979323846
#define br "\n"
#define ff first
#define ss second
const ll mod = 1000000007;


#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(ld t) {cerr << t;}
void _print(double t) {cerr << t;}

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

ll bin_exp(ll a, ll b){
    a = a % mod;
    ll ans = 1;
    for ( ; b > 0; ) 
{
        if((b & 1) == 1) ans = (a * ans) % mod;
        a = (a * a) % mod;
        b /= 2;
    }
    return ans;
}

ll mod_inv(ll n){
    ll a = bin_exp(n,mod - 2);
    return a;
}

ll sub(ll a,ll b){
    return ((a - b + mod) % mod);
}

ll mul(ll a,ll b){
    return ((a*b)%mod);
}

ll add(ll a,ll b){
    return ((a+b+mod)%mod);
}

ll divide(ll a,ll b){
    return((a*mod_inv(b)) % mod);
}

ll _gcd(ll a, ll b){
    if(b == 0)
        return a;
    return _gcd(b, a%b);
}

ll gcd(ll a, ll b) {
    if(a > b)
        return _gcd(a, b);
    return _gcd(b, a);
}

ll max(ll a, ll b){
    return a > b ? a : b;
}

ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}

// ââââââââââââââââââââââââââââââââââââââââââââââââââââââââââââââââââââââââââââââââââ//



void solve(){
    int n,m;
    cin>>n>>m;
    vector<vector<char>> a(n,vector<char>(m));
    rep(i,0,n){
        rep(j,0,m){
            cin>>a[i][j];
        }
    }

    vvll dp1(n,vll(m,0));
    vvll dp2(n,vll(m,0));
    
    rep(i,0,n){
        rep(j,0,m){
            if(!(i==0 || j==0)){
                if(a[i][j]=='.'){
                    dp1[i][j] = 0;
                }
                else{
                    dp1[i][j] = 1+min(dp1[i-1][j],dp1[i][j-1]);
                }
            }
            else{
                dp1[i][j] = (a[i][j]=='*');
            }
        }
    }
    rep(i,0,n){
        {
        int j=m-1;
        for ( ; j>=0; ) 
{
            if(!(i==0 || j==m-1)){
                if(a[i][j]=='.'){
                    dp2[i][j] = 0;
                }
                else{
                    dp2[i][j] = 1+min(dp2[i-1][j],dp2[i][j+1]);
                }
            }
            else{
                dp2[i][j] = (a[i][j]=='*');
            }
        	j--; 
        
        }}
    }

    ll sum =0;
    rep(i,0,n){
        rep(j,0,m){
            sum+=min(dp1[i][j],dp2[i][j]);
        }   
    }
    cout<<sum<<endl;
}


signed main() {
    /*#ifndef ONLINE_JUDGE
	    freopen("Error.txt", "w", stderr);
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif*/
    // init();
    fastio();
    int t;
    cin>>t;
    for ( ; t--; ) 
solve();


}

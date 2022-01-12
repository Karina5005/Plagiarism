#include<bits/stdc++.h>using namespace std;using namespace chrono;#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);#define MOD 1000000007#define MOD1 998244353#define INF 1e18#define nline "\n"#define pb push_back#define ppb pop_back#define mp make_pair#define ff first#define ss second#define PI 3.141592653589793238462#define set_bits __builtin_popcount#define sz(x) (int)(x.size())#define tc(t)  while(t--)#define all(x) x.begin(), x.end()#define clr(x) memset(x, 0, sizeof(x))#define sortall(x) sort(all(x))#define w(t)            int t; cin>>t; while(t--)#define fs(x) fixed<<setprecision(x)#define mid(l,r)        (l+(r-l)/2)#define loop(i,a,b) 	for(int i=(a);i<=(b);i++)#define   fi(a,b) for(int i=a;i<b;i++)#define   fj(a,b) for(int j=a;j<b;j++)#define   ff first#define   ss second#define   ll long long#define   ld long double#define   ull unsigned long long#define   bp(x) __builtin_popcount(x)#define   pr(x) for(auto it: x) cout<<it<<" "; cout<<endl;#define   getMax(x) max_element(x.begin(),x.end())#define   getMin(x) min_element(x.begin(),x.end())#define   endl "\n"#define   fo(i,a,b) for(i=a;i<=b;i++)#define   nah cout << "NO" << endl#define   yeah cout << "YES" << endltypedef   vector<int> vi;typedef   vector< pair<int, int> > vii;typedef   vector<long long> vl;typedef   pair<int, int> pii;typedef   pair<ll, ll> pll;typedef   vector< pair<ll, ll> > vll;typedef priority_queue<int, vector<int>, greater<int>> min_heapi;typedef priority_queue<ll, vector<ll>, greater<ll>> min_heapli;typedef priority_queue<int> max_heapi;typedef priority_queue<ll> max_heapli;typedef unordered_map<int, int> umapi;typedef unordered_map<ll, ll> umapli;#ifndef ONLINE_JUDGE#define debug(x) cerr << #x<<" "; _print(x); cerr << endl;#else#define debug(x);#endiftypedef pair<ll, ll>	pl;typedef pair <int,int> pii;typedef vector<int>		vi;typedef vector<ll>		vl;typedef vector<pii>		vpii;typedef vector<pl>		vpl;typedef vector<vi>		vvi;typedef vector<vl>		vvl;typedef priority_queue<int, vector<int>, greater<int>> min_heap32;typedef priority_queue<ll, vector<ll>, greater<ll>> min_heap64;typedef priority_queue<int> max_heap32;typedef priority_queue<ll> max_heap64;typedef unordered_map<int, int> umap32;typedef unordered_map<ll, ll> umap64;void _print(ll t) {cerr << t;}void _print(int t) {cerr << t;}void _print(string t) {cerr << t;}void _print(char t) {cerr << t;}void _print(ld t) {cerr << t;}void _print(double t) {cerr << t;}void _print(ull t) {cerr << t;}template<class T> inline bool chmin(T& a, T b) { /* 'if' begin */
if (a > b) /* 'if' inside */
{ a = b; return true; } return false; }template<class T> inline bool chmax(T& a, T b) { /* 'if' begin */
if (a < b) /* 'if' inside */
{ a = b; return true; } return false; }template <class T, class V> void _print(pair <T, V> p);template <class T> void _print(vector <T> v);template <class T> void _print(set <T> v);template <class T, class V> void _print(map <T, V> v);template <class T> void _print(multiset <T> v);template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}ll gcd(ll a, ll b) {/* 'if' begin */
if (b > a) /* 'if' inside */
{return gcd(b, a);} /* 'if' begin */
if (b == 0) /* 'if' inside */
{return a;} return gcd(b, a % b);}ll lcm(ll a, ll b) {return (a*b)/gcd(a,b);}ll expo(ll a, ll b, ll mod) {ll res = 1; while (b > 0) {/* 'if' begin */
if (b & 1)/* 'if' inside */
res = (res * a) % mod; a = (a * a) % mod; b = b >> 1;} return res;}void extendgcd(ll a, ll b, ll*v) {/* 'if' begin */
if (b == 0) /* 'if' inside */
{v[0] = 1; v[1] = 0; v[2] = a; return ;} extendgcd(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} ll mminv(ll a, ll b) {ll arr[3]; extendgcd(a, b, arr); return arr[0];} ll mminvprime(ll a, ll b) {return expo(a, b - 2, b);}bool revsort(ll a, ll b) {return a > b;}void swap(int &x, int &y) {int temp = x; x = y; y = temp;}ll combination(ll n, ll r, ll m, ll *fact, ll *ifact) {ll val1 = fact[n]; ll val2 = ifact[n - r]; ll val3 = ifact[r]; return (((val1 * val2) % m) * val3) % m;}void google(int t) {cout << "Case #" << t << ": ";}vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)/* 'for' inside */
/* 'if' begin */
if (arr[i] == 0) /* 'if' inside */
{vect.push_back(i); for (int j = 2 * i; j <= n; j += i)/* 'for' inside */
arr[j] = 1;} return vect;}ll mod_add(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a + b) % m) + m) % m;}ll mod_mul(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a * b) % m) + m) % m;}ll mod_sub(ll a, ll b, ll m) {a = a % m; b = b % m; return (((a - b) % m) + m) % m;}ll mod_div(ll a, ll b, ll m) {a = a % m; b = b % m; return (mod_mul(a, mminvprime(b, m), m) + m) % m;}  ll phin(ll n) {ll number = n; /* 'if' begin */
if (n % 2 == 0) /* 'if' inside */
{number /= 2; while (n % 2 == 0)n /= 2;} for (ll i = 3; i <= sqrt(n); i += 2) /* 'for' inside */
{/* 'if' begin */
if (n % i == 0) /* 'if' inside */
{while (n % i == 0)n /= i; number = (number / i * (i - 1));}} /* 'if' begin */
if (n > 1)/* 'if' inside */
number = (number / n * (n - 1)) ; return number;} int cmp(int a,int b){return a>b;}int bin_pow(int ind, int power){/* 'if' begin */
if(power == 0)/* 'if' inside */
{return 1;}/* 'if' begin */
if(power & 1)/* 'if' inside */
{return ind * bin_pow(ind,power - 1) % MOD;}else{return bin_pow((ind * ind) % MOD , power / 2) % MOD;}}long long maxsubarraysum(long long *array,long long n){long long best = 0, sum = 0;for (long long  k = 0; k < n; k++) /* 'for' inside */
{sum = max(array[k],sum+array[k]);best = max(best,sum);}return  best ;}void printBinary(int num){for(int i=10;i>=0;--i)/* 'for' inside */
{cout<<((num>>i)&1);}cout<<endl;}int computeXOR(int n){/* 'if' begin */
if (n % 4 == 0)/* 'if' inside */
return n;/* 'if' begin */
if (n % 4 == 1)/* 'if' inside */
return 1;/* 'if' begin */
if (n % 4 == 2)/* 'if' inside */
return n + 1;return 0;}string toBinary(long long x){/* 'if' begin */
if(x == 0)/* 'if' inside */
return "";else{string s = toBinary(x / 2);s.push_back(char('0' + x % 2));return s;}}class DSU{private:    vector<ll> parent, size;public:    ll findPar(ll node){        /* 'if' begin */
        if(parent[node] == node) /* 'if' inside */
        return node;         return parent[node] = findPar(parent[node]);             }    DSU(ll n){        for(ll i = 1; i<=n; i++)/* 'for' inside */
        {            parent.push_back(i);             size.push_back(1);         }    }public:    void unionOfNodes(ll u, ll v){        ll pu = findPar(u);        ll pv = findPar(v);        /* 'if' begin */
        if(pu==pv)/* 'if' inside */
        {            return;         }        /* 'if' begin */
        if(size[pu]<size[pv])/* 'if' inside */
        {                        parent[pu] = pv;            size[pv] += size[pu];         } else {                        parent[pv] = pu;            size[pu] += size[pv];         }    }};const ll L = 1e10;void solve() {    ll n;    cin >> n;    vl h(n);    fi(0, n){        cin >> h[i];    }    auto check = [&] (ll x) {        vl a(h.begin(),h.end());        for (ll i = n-1; i >= 2; i--) /* 'for' inside */
        {            /* 'if' begin */
            if (a[i] < x)                /* 'if' inside */
                return false;            ll d = min(h[i],a[i]-x)/3;            a[i-1] += d;            a[i-2] += 2*d;        }        return a[0] >= x and a[1] >= x;    };    ll l = 0, r = *max_element(h.begin(),h.end());    while (l < r) {        ll mid = l + (r-l+1)/2;        /* 'if' begin */
        if (check(mid))            /* 'if' inside */
            l = mid;        else            r = mid - 1;    }    cout << l << endl;}int main() {    fast;#ifndef ONLINE_JUDGE    freopen("Input.txt", "r", stdin);    freopen("Output.txt", "w", stdout);    freopen("Error.txt", "w", stderr);#endif    auto start1 = high_resolution_clock::now();        ll tc=1;    cin>>tc;    while(tc--) {                solve();    }    auto stop1 = high_resolution_clock::now();    auto duration = duration_cast<microseconds>(stop1 - start1);#ifndef ONLINE_JUDGE    cerr << "Time: " << duration.count() / 1000 << "ms"<< endl;#endif    return 0;}
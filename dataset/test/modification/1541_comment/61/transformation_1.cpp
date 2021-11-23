

#include "bits/stdc++.h"

using namespace std;


#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)

typedef long long  ll;
#define vi         vector<ll>
#define vb         vector<bool>
#define vvi        vector<vector<ll>>
#define pi         pair<ll,ll>
#define vpi        vector<pi>
#define mii        map<ll,ll>
#define qi         queue<ll>
#define si         stack<ll>
#define pqd        priority_queue<ll>
#define pqa        priority_queue<ll, vi, greater<ll>()>
#define ff         first
#define ss         second
#define pb         push_back
#define ins        insert
#define pob        pop_back
#define puf        push_front
#define pof        pop_front
#define sz         size
#define mp         make_pair
#define all(x)     x.begin(), x.end()
#define bs(a,x)    binary_search(all(a), x)
#define lb(a,x)    lower_bound(all(a), x)
#define lbi(a,x)   lb(a,x) - a.begin()

#define sortasc(x) sort(all(x))
#define sortdes(x) sort(all(x), greater<ll>())

#define setbits(x)       __builtin_popcountll(x)
#define zrobits(x)       __builtin_ctzll(x)
#define leadingzrs(x)    __builtin_clzll(x)
#define trailingzrs(x)   __builtin_ctzll(x)
#define parity(x)        __builtin_parityll(x)

const ll M = 1e9+7;


ll mos() { return 0LL; }
template<typename T, typename... Args>
T mos(T a, Args... args) { return ((a + mos(args...))%M + M)%M; }

long long mop() { return 1LL; }
template<typename T, typename... Args>
T mop(T a, Args... args) { return (a*mop(args...))%M; }



#define pow2(x)    (1ll<<(x))
#define PINF       LLONG_MAX
#define NINF       LLONG_MIN



#define nl         "\n"
#define print(a)   for (auto &i : a) cout << i << " "; cout << nl
#define yesno(x)   cout << (((x)) ? "YES" : "NO") << nl
#define cntdig(x)  floor(log(x) + 1)

#define fra(i,init,n,inc) for(i=(init);i<(n);i+=(inc))
#define frd(i,init,n,dec) for(i=(init);i>=(n);i-=(dec))

#define ts to_string
string ts(char c) { return string(1, c); }
string ts(bool b) { return b ? "true" : "false"; }
string ts(const char* s) { return (string)s; }
string ts(string s) { return s; }
template<class A> string ts(complex<A> c) { stringstream ss; ss << c; return ss.str(); }
string ts(vector<bool> v) { string res = "{"; for(int i = 0; i < v.sz(); ++i) /* 'for' inside */
res += char('0' + v[i]); res += "}"; return res; }
template<size_t SZ> string ts(bitset<SZ> b) { string res = ""; for(int i = 0; i < SZ; ++i) /* 'for' inside */
res += char('0' + b[i]); return res; }
template<class A, class B> string ts(pair<A,B> p);
template<class T> string ts(T v) { bool fst = 1; string res = "{"; for (const auto& x: v) { /* 'if' begin */
if (!fst) /* 'if' inside */
res += ", "; fst = 0; res += ts(x); } res += "}"; return res; }
template<class A, class B> string ts(pair<A,B> p) { return "(" + ts(p.f) + ", " + ts(p.s) + ")"; }

void DBG() { cerr << "]" << endl; }
template<class H, class... T> void DBG(H h, T... t) { cerr << ts(h); /* 'if' begin */
if (sizeof...(t)) /* 'if' inside */
cerr << ", "; DBG(t...); }
void EDBG(string names) { names = names; }
template<class H, class... T> void EDBG(string names, H h, T... t) { auto pos = names.find(','); auto first_name = names.substr(0, pos); auto rest = names.substr(pos + 1); while(rest.front() == ' ') { rest = rest.substr(1); } cerr << "[" << first_name << "] : [" << ts(h) << "]" << nl; EDBG(rest, t...); }

#ifdef LOCAL
#define dbg(...) cerr << "[" << #__VA_ARGS__ << "] : [", DBG(__VA_ARGS__)
#define edbg(...) EDBG(#__VA_ARGS__, __VA_ARGS__)
#else
#define dbg(...) 0
#define edbg(...) 0
#endif

bool sortbysec(pair<int, int> &a, pair<int, int> &b) { return a.second < b.second; }

ll gcd(ll n1, ll n2) { /* 'if' begin */
if (n2 > 0) /* 'if' inside */
return gcd(n2, n1%n2); else return n1; }

pair<vi,bool*> seive(ll n) { vi primes; bool *isprime = new bool[n+1]; isprime[0] = isprime[1] = true; for(ll i=2;i*i<=n;i++) /* 'for' inside */
/* 'if' begin */
if(!isprime[i]) /* 'if' inside */
for(ll j=i*i;j<=n;j+=i) /* 'for' inside */
isprime[j] = true; for(ll i=2;i<=n;i++) /* 'for' inside */
{ /* 'if' begin */
if(!isprime[i]) /* 'if' inside */
primes.pb(i); } pair<vi,bool*> ans = {primes, isprime}; return ans; }

template<typename T = ll>
void tv(vector<T> &a, ll n) { ll i = 0; fra(i,0,n,1) { T t; cin >> t; a.pb(t); } }

void printmat(vvi &a) {
    ll i,j;
    fra(i,0,a.sz(),1) {
        fra(j,0,a[0].sz(),1)
            cout << a[i][j] << " ";
        cout << nl;
    }
}

vvi matrix_mul(vvi &a,vvi &b) {
    ll i,j,k;
    vvi ans(a.sz(), vi(b[0].sz(), 0));

    fra(i,0,a.sz(),1)
        fra(j,0,a[0].sz(),1)
            fra(k,0,b[0].sz(),1)
                ans[i][k] += (a[i][j] * b[j][k]);

    return ans;
}

vvi matrix_expo(vvi &a, ll n) {
    /* 'if' begin */
    if(n==1) /* 'if' inside */
    return a;
    vvi tempby2 = matrix_expo(a,n/2);
    vvi temp = matrix_mul(tempby2, tempby2);
    /* 'if' begin */
    if(n%2) /* 'if' inside */
    return matrix_mul(a, temp);
    else return temp;
}

void my_sol() {
    ll n, m, k, i = 0, j = 0, cnt = 0, sum = 0, maxi = NINF, mini = PINF;
    string s,s1,s2;
    cin >> n;
    vi a;
    tv(a, n);
    vpi arr(n);
    fra(i,0,n,1) arr[i] = {a[i], i+1};
    sortasc(arr);
    fra(i,0,n,1) {
        fra(j,i+1,n,1) {
            /* 'if' begin */
            if(arr[i].ff * arr[j].ff > 2*n) /* 'if' inside */
            break;
            /* 'if' begin */
            if(arr[i].ff * arr[j].ff == arr[i].ss + arr[j].ss) /* 'if' inside */
            cnt++;
        }
    }
    cout << cnt << nl;
}

int main() {
    fast_io;
    #ifndef ONLINE_JUDGE
        freopen("input1.txt", "r", stdin);
        freopen("output1.txt", "w", stdout);
        auto start = std::chrono::high_resolution_clock::now();
    #endif

    ll t = 1;
    cin >> t;
    while(t--)
        my_sol();

    #ifndef ONLINE_JUDGE
        auto stop = std::chrono::high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);
        long double t1 = (long double)duration.count()/1000000;
        cout << "\n\nTime taken "<< fixed << setprecision(6) << t1 << " seconds" << "\n";
    #endif
    return 0;
}
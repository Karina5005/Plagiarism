#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
 
typedef vector<int> vi;
typedef vector<ll> vll;
 
typedef vector<vi> vvi;
typedef vector<vll> vvll;
 
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
typedef vector<pii> vpii;
typedef vector<pll> vpll;
 
typedef vector<vpii> vvpii;
typedef vector<vpll> vvpll;
 
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define fi first
#define se second
 
template<class T> bool ckmin(T &a, const T &b) {return a > b ? a = b, 1 : 0;}
template<class T> bool ckmax(T &a, const T &b) {return a < b ? a = b, 1 : 0;}
 
namespace debug {
    void __print(int x) {cerr << x;}
    void __print(long long x) {cerr << x;}
    void __print(double x) {cerr << x;}
    void __print(long double x) {cerr << x;}
    void __print(char x) {cerr << '\'' << x << '\'';}
    void __print(const string &x) {cerr << '\"' << x << '\"';}
    void __print(const char *x) {cerr << '\"' << x << '\"';}
    void __print(bool x) {cerr << (x ? "true" : "false");}
 
    template<typename T, typename V>
    void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
    template<typename T>
    void __print(const T &x) {int f = 0; cerr << '{'; for(auto z : x) cerr << (f++ ? "," : ""), __print(z); cerr << "}";}
    void _print() {cerr << "]\n";}
    template <typename T, typename... V>
    void _print(T t, V... v) {__print(t); /* 'if' begin */
    if(sizeof...(v)) /* 'if' inside */
    cerr << ", "; _print(v...);}
 
#ifdef ljuba
#define dbg(x...) cerr << "\e[91m" << "LINE(" << __LINE__ << ") -> " << "[" << #x << "] = ["; _print(x)
#else
#define dbg(x...)
#endif
}
 
using namespace debug;
 
const char nl = '\n';
 
mt19937 rng(chrono::high_resolution_clock::now().time_since_epoch().count());
 


const int K = 500;
const int mxN = 2e5 + 12;
int odg[mxN];
int ciklus[K+1][K];

void solve() {
    int n, m;
    cin >> n >> m;
    vpii v(n);

    for(auto &z : v) {
        cin >> z.fi >> z.se;
    }

    vi prosli(n, -1);

    int ans = 0;

    for(int iter = 0; iter < m; ++iter) /* 'for' inside */
    {
        for(int i = 2; i <= K; ++i) /* 'for' inside */
        ans += ciklus[i][iter%i];
        ans += odg[iter];
        int op, k;
        cin >> op >> k;
        --k;

        int vel = v[k].fi + v[k].se;

        /* 'if' begin */
        if(op == 1) /* 'if' inside */
        {
            prosli[k] = iter;
        } else {
            int kada = (iter - prosli[k]) % vel;
            /* 'if' begin */
            if(kada >= v[k].fi) /* 'if' inside */
            {
                --ans;
            }
        }

        int bruh = (op == 1 ? 1 : -1);

        /* 'if' begin */
        if(vel <= K) /* 'if' inside */
        {
            ciklus[vel][prosli[k]%vel] -= bruh;
            ciklus[vel][(prosli[k]+v[k].fi)%vel] += bruh;
        } else {
            for(int i = prosli[k]; i < mxN; i += vel) /* 'for' inside */
            {
                odg[i] -= bruh;
            }
            for(int i = prosli[k]+v[k].fi; i < mxN; i += vel) /* 'for' inside */
            {
                odg[i] += bruh;
            }
        }

        cout << ans << nl;
    }
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int testCases = 1;
    
    while(testCases--)
        solve();
}

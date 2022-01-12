#include<bits/stdc++.h>
#include <unordered_map>
#include<unordered_set>

using namespace std;
#define _USE_MATH_DEFINES
# define M_PI           3.14159265358979323846  /* pi */
#define ll long long
#define ull unsigned long long
#define ld long double
#define vbe(v) ((v).begin()), ((v).end())
#define sz(v)     ((int)((v).size()))
#define prec(x)    << fixed<< setprecision(x)
#define clr(v, d)   memset(v, d, sizeof(v))
#define rep(i, v)   for(int i=0;i<sz(v);++i)
#define lp(i, n)    for(int i=0;i<(int)(n);++i)
#define lpi(i, j, n)  for(int i=(j);i<(int)(n);++i)
#define lpd(i, j, n)  for(int i=(j);i>=(int)(n);--i)
#define MIN(x, y) (((x) < (y)) ? (x) : (y))
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cin.tie(0);
#define INFLL 1e18
#define INF 1e9
#define MOD 1000000007
#define MOD1 998244353
#define MAXN 200005

ll GCD(ll a, ll b) { return (a) ? GCD(b % a, a) : b; }

ll LCM(ll a, ll b) { return a * b / GCD(a, b); }

ll fastpow(ll b, ll p) {
    if (!p) return 1;
    ll ret = fastpow(b, p >> 1);
    ret *= ret;
    if (p & 1) ret *= b;
    return ret;
}


void solve(int tst) {
    ll n, m;
    cin >> n >> m;
    vector<ll> k(n), c(m);
    lp(i, n) {
        cin >> k[i];
        k[i]--;
    }
    lp(i, m)cin >> c[i];
    sort(vbe(k));
    reverse(vbe(k));
    int idx=0;
    ll ans=0;
    lp(i,n){
        if(k[i]>=idx){
            ans+=c[idx++];
        }else{
            ans+=c[k[i]];
        }
    }
    cout<<ans;
}

int main() {
    FASTIO;
    //freopen("gaser.in", "r", stdin);
    int t = 1;
    cin >> t;
    lp(i, t) {
        solve(i + 1);
        cout << "\n";
    }
}
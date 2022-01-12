#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define loop(i, a, n) for (int i = a; i < n; i++)
#define loope(i, b, n) for (int i = b; i <= n; i++)
#define loopit(a) for (auto it = a.begin(); it != a.end(); it++)
#define bloop(i, a, b) for (int i = a; i > b; i--)
#define bloope(i, a, b) for (int i = a; i >= b; i--)
#define ms(a, b) memset(a, b, sizeof(a))
#define pb push_back
#define MP make_pair
#define pi pair<int, int>
#define ff first
#define ss second
#define PQ priority_queue<int> pq;
#define vi vector<int>
#define vii vector<vector<int>>
#define vil vector<ll>
#define viil vector<vector<ll>>
#define si set<int>
#define NO cout<<"NO\n";
#define YES cout<<"YES\n";
#define MPQ priority_queue<pi, vector<int>, greater<pi>> mpq;
#define io                        \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i : x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); /* 'if' begin */
if (sizeof...(v)) /* 'if' inside */
cerr << ", "; _print(v...);}

#ifdef MURTAZAS_BUILD
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

void solve(int testCase) {
    int n; cin >> n;

    


    vil a(n);
    ll k; cin >> k;

    loop(i, 0, n)cin >> a[i];

    sort(a.begin(), a.end());


    ll gc = 0;

    

    loop(i, 1, n) {
        a[i] -= a[0];
        
        gc = gcd(gc, a[i]);
    }

    cout << ((k - a[0]) % gc ? "NO" : "YES") << "\n";

}

int main() {
    io;
#ifdef MURTAZAS_BUILD
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
#endif

    int testCase = 1, i = 0;
    cin >> testCase;
    while (i++ != testCase) {
        
        solve(i);
    }

#ifdef  MURTAZAS_BUILD
    cerr << "Time Taken : " << (float)clock() / CLOCKS_PER_SEC << " seconds" << endl;
#endif

    return 0;
}

#include<bits/stdc++.h>
#define ll long long
#define ull unsigned ll
#define all(x) (x).begin(), (x).end()
#define F first
#define S second
#define IOS std::ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define pb push_back
using namespace std;

// DEBUG TEMPLATE
void __print(int x) {cout << x;}
void __print(long x) {cout << x;}
void __print(long long x) {cout << x;}
void __print(unsigned x) {cout << x;}
void __print(unsigned long x) {cout << x;}
void __print(unsigned long long x) {cout << x;}
void __print(float x) {cout << x;}
void __print(double x) {cout << x;}
void __print(long double x) {cout << x;}
void __print(char x) {cout << '\'' << x << '\'';}
void __print(const char *x) {cout << '\"' << x << '\"';}
void __print(const string &x) {cout << '\"' << x << '\"';}
void __print(bool x) {cout << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cout << '{'; __print(x.first); cout << ','; __print(x.second); cout << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cout << '{'; for (auto &i: x) cout << (f++ ? "," : ""), __print(i); cout << "}";}
void _print() {cout << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cout << ", "; _print(v...);}

void OFFLINE(){
    #ifndef ONLINE_JUDGE 
        freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
        #define debug(x...) cout << "[" << #x << "] = ["; _print(x)
        #else
            #define debug(x...)
    #endif
}

const int MOD = 1e9 + 7;

ll mpow(ll base, ll expo) {
    ll res = 1;
    while(expo) {
        if(expo & 1) {
            res = (res * base) % MOD;
        }
        base = (base * base) % MOD;
        expo >>= 1;
    }
    return res % MOD;
}

void solve() {
    //check for corner test cases
    
    int k;
    cin >> k;

    ll nodes = (1LL << k) - 2;
    ll ans = (6 * mpow(4, nodes)) % MOD;

    cout << ans << "\n";
    
    //check for corner test cases
}

int main(){

    IOS;
    OFFLINE();
    //check for corner test cases
    
    int t = 1;
    // cin >> t;
    
    for(int i = 1; i <= t; i++) {
        // cout << "Case #" << i << ": ";
        solve();
    }
    
    //check for corner test cases
    return 0;
}
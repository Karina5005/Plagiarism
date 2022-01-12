#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define eb emplace_back

#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)

#define pb push_back
#define mp make_pair
#define fr first
#define sc second
#define clr(a) memset(a, 0, sizeof(a))
#define sz(x) x.size()
#define rep(n) for (ll i = 0; i < n; i++)
#define repc(i, n) for (ll i = 0; i < n; i++)
#define FOR(i, x, y) for (int i = x; i < y; i++)
#define DEC(i, x, y) for (int i = x; i >= y; i--)
#define all(v) v.begin(), v.end()
#define min3(a, b, c) min(a, min(b, c))
#define max3(a, b, c) max(a, max(b, c))
#define alla(a, n) a, a + n

typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> ii;
typedef vector<ll> vi;
typedef vector<ii> vii;

template <typename T>
T modpow(T base, T exp, T modulus)
{
    base %= modulus;
    T result = 1;
    while (exp > 0)
    {
        if (exp & 1)
            result = (result * base) % modulus;
        base = (base * base) % modulus;
        exp >>= 1;
    }
    return result;
}
ll lcm(ll a, ll b) { return (a * (b / __gcd(a, b))); }

const int inf = 1e9 + 7;
const double eps = 1e-6;
const double pi = 1.00 * acos(-1.00);

void solve()
{
    int n;
    cin >> n;
    vector<ll> vec(n);
    for (auto &i : vec)
        cin >> i;
    vector<ll> ans;
    int i = 0, j = n - 1;
    while (i <= j)
    {
        ans.push_back(vec[i]);
        ans.push_back(vec[j]);
        i++, j--;
    }
    if (n & 1)
        ans.pop_back();
    for (auto it : ans)
        cout << it << " ";
    cout << endl;
}
int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
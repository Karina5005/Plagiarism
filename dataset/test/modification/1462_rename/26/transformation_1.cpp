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
T modpow(T p, T cd_g, T s)
{
    p %= s;
    T t_eb = 1;
    while (cd_g > 0)
    {
        if (cd_g & 1)
            t_eb = (t_eb * p) % s;
        p = (p * p) % s;
        cd_g >>= 1;
    }
    return t_eb;
}
ll zz_xna(ll n_xi, ll a_kx) { return (n_xi * (a_kx / __gcd(n_xi, a_kx))); }

const int t = 1e9 + 7;
const double r_ah = 1e-6;
const double i = 1.00 * acos(-1.00);

void e_y()
{
    int qap_qyc;
    cin >> qap_qyc;
    vector<ll> vea(qap_qyc);
    for (auto &xh_wr : vea)
        cin >> xh_wr;
    vector<ll> ae;
    int jba_k = 0, i = qap_qyc - 1;
    while (jba_k <= i)
    {
        ae.push_back(vea[jba_k]);
        ae.push_back(vea[i]);
        jba_k++, i--;
    }
    if (qap_qyc & 1)
        ae.pop_back();
    for (auto am : ae)
        cout << am << " ";
    cout << endl;
}
int main()
{
    fast;
    int a;
    cin >> a;
    while (a--)
    {
        e_y();
    }

    return 0;
}
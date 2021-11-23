#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <ctype.h>
#include <cmath>
#include <cstdio>
#include <set>
#include <iterator>
#include <queue>
#include <numeric>
#include <deque>
#define pb push_back
#define mp make_pair
#define all(a) a.begin(), a.end()
typedef long long ll;
typedef unsigned long long ull;

using namespace std;

const int INF = 1000000000;

bool camp(int a, int b) {
    return a > b;
}

ll gcd_ext(ll a, ll b, ll& x, ll& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    ll d = gcd_ext(b, a % b, x, y);
    x -= (a / b) * y;
    swap(x, y);
    return d;
}

ull modexp(ull x, ull y, ull N) {
    if (y == 0) return 1;
    ull z = modexp(x, y / 2, N);
    if (y % 2 == 0)
        return (z * z) % N;
    else
        return (x * z % N * z) % N;
}

vector<ll> del(ll x) {
    ll square_root = sqrt(x) + 1;
    vector<ll> a;
    for (ll i = 1; i < square_root; i++) {
        if (x % i == 0 && i * i != x) {
            a.pb(i);
            a.pb(x / i);
        }
        else if (x % i == 0 && i * i == x) a.pb(i);
    }
    return a;
}

vector<pair<ll, ll>> fact(int n) {
    vector<pair<ll, ll>> p;
    for (int d = 2; d * d <= n; ++d) {
        if (n % d == 0) {
            p.push_back({ d, 1 });
            n /= d;
        }
        while (n % d == 0) {
            p.back().second++;
            n /= d;
        }
    }
    if (n > 1) p.push_back({ n, 1 });
    return p;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.setf(ios::fixed); cout.precision(0); //freopen("24.in", "r", stdin);

    ll n, m, x, y, q, t, k=0;
    cin >> n >> m;
    vector<set<ll>> a(n + 1);
    for (ll i = 1; i <= m; ++i) {
        cin >> x >> y;
        a[x].emplace(y);
        a[y].emplace(x);
    }
    for (ll i = 1; i <= n; ++i) {
        if (a[i].empty()) k++;
        else {
            auto it = --a[i].end();
            if (*it < i) k++;
        }
    }
    cin >> t;
    while (t--) {
        cin >> q;
        if (q == 3) {
            cout << k << endl;
            continue;
        }
        cin >> x >> y;
        if (a[x].empty()) k--;
        else {
            auto it = --a[x].end();
            if (*it < x) k--;
        }
        if (a[y].empty()) k--;
        else {
            auto it = --a[y].end();
            if (*it < y) k--;
        }
        if (q == 1) {
            a[x].emplace(y);
            a[y].emplace(x);
        }
        else {
            a[x].erase(y);
            a[y].erase(x);
        }
        if (a[x].empty()) k++;
        else {
            auto it = --a[x].end();
            if (*it < x) k++;
        }
        if (a[y].empty()) k++;
        else {
            auto it = --a[y].end();
            if (*it < y) k++;
        }
    }
}

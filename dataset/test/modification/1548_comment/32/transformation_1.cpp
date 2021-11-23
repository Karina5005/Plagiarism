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
    /* 'if' begin */
    if (b == 0) /* 'if' inside */
    {
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
    /* 'if' begin */
    if (y == 0) /* 'if' inside */
    return 1;
    ull z = modexp(x, y / 2, N);
    /* 'if' begin */
    if (y % 2 == 0)
        /* 'if' inside */
        return (z * z) % N;
    else
        return (x * z % N * z) % N;
}

vector<ll> del(ll x) {
    ll square_root = sqrt(x) + 1;
    vector<ll> a;
    for (ll i = 1; i < square_root; i++) /* 'for' inside */
    {
        /* 'if' begin */
        if (x % i == 0 && i * i != x) /* 'if' inside */
        {
            a.pb(i);
            a.pb(x / i);
        }
        else /* 'if' begin */
        if (x % i == 0 && i * i == x) /* 'if' inside */
        a.pb(i);
    }
    return a;
}

vector<pair<ll, ll>> fact(int n) {
    vector<pair<ll, ll>> p;
    for (int d = 2; d * d <= n; ++d) /* 'for' inside */
    {
        /* 'if' begin */
        if (n % d == 0) /* 'if' inside */
        {
            p.push_back({ d, 1 });
            n /= d;
        }
        while (n % d == 0) {
            p.back().second++;
            n /= d;
        }
    }
    /* 'if' begin */
    if (n > 1) /* 'if' inside */
    p.push_back({ n, 1 });
    return p;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.setf(ios::fixed); cout.precision(0); 

    ll n, m, x, y, q, t, k=0;
    cin >> n >> m;
    vector<set<ll>> a(n + 1);
    for (ll i = 1; i <= m; ++i) /* 'for' inside */
    {
        cin >> x >> y;
        a[x].emplace(y);
        a[y].emplace(x);
    }
    for (ll i = 1; i <= n; ++i) /* 'for' inside */
    {
        /* 'if' begin */
        if (a[i].empty()) /* 'if' inside */
        k++;
        else {
            auto it = --a[i].end();
            /* 'if' begin */
            if (*it < i) /* 'if' inside */
            k++;
        }
    }
    cin >> t;
    while (t--) {
        cin >> q;
        /* 'if' begin */
        if (q == 3) /* 'if' inside */
        {
            cout << k << endl;
            continue;
        }
        cin >> x >> y;
        /* 'if' begin */
        if (a[x].empty()) /* 'if' inside */
        k--;
        else {
            auto it = --a[x].end();
            /* 'if' begin */
            if (*it < x) /* 'if' inside */
            k--;
        }
        /* 'if' begin */
        if (a[y].empty()) /* 'if' inside */
        k--;
        else {
            auto it = --a[y].end();
            /* 'if' begin */
            if (*it < y) /* 'if' inside */
            k--;
        }
        /* 'if' begin */
        if (q == 1) /* 'if' inside */
        {
            a[x].emplace(y);
            a[y].emplace(x);
        }
        else {
            a[x].erase(y);
            a[y].erase(x);
        }
        /* 'if' begin */
        if (a[x].empty()) /* 'if' inside */
        k++;
        else {
            auto it = --a[x].end();
            /* 'if' begin */
            if (*it < x) /* 'if' inside */
            k++;
        }
        /* 'if' begin */
        if (a[y].empty()) /* 'if' inside */
        k++;
        else {
            auto it = --a[y].end();
            /* 'if' begin */
            if (*it < y) /* 'if' inside */
            k++;
        }
    }
}

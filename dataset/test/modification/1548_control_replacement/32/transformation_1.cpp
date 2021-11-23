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
    if (!(y % 2 == 0))
        return (x * z % N * z) % N;
    else
        return (z * z) % N;
}

vector<ll> del(ll x) {
    ll square_root = sqrt(x) + 1;
    vector<ll> a;
    {
    ll i = 1;
    while (i < square_root) {
        if (x % i == 0 && i * i != x) {
            a.pb(i);
            a.pb(x / i);
        }
        else if (x % i == 0 && i * i == x) a.pb(i);
    	i++; 
    
    }}
    return a;
}

vector<pair<ll, ll>> fact(int n) {
    vector<pair<ll, ll>> p;
    {
    int d = 2;
    while (d * d <= n) {
        if (n % d == 0) {
            p.push_back({ d, 1 });
            n /= d;
        }
        while (n % d == 0) {
            p.back().second++;
            n /= d;
        }
    	++d; 
    
    }}
    if (n > 1) p.push_back({ n, 1 });
    return p;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.setf(ios::fixed); cout.precision(0); //freopen("24.in", "r", stdin);

    ll n, m, x, y, q, t, k=0;
    cin >> n >> m;
    vector<set<ll>> a(n + 1);
    {
    ll i = 1;
    while (i <= m) {
        cin >> x >> y;
        a[x].emplace(y);
        a[y].emplace(x);
    	++i; 
    
    }}
    {
    ll i = 1;
    while (i <= n) {
        if (!(a[i].empty())) {
            auto it = --a[i].end();
            if (*it < i) k++;
        }
        else k++;
    	++i; 
    
    }}
    cin >> t;
    while (t--) {
        cin >> q;
        if (q == 3) {
            cout << k << endl;
            continue;
        }
        cin >> x >> y;
        if (!(a[x].empty())) {
            auto it = --a[x].end();
            if (*it < x) k--;
        }
        else k--;
        if (!(a[y].empty())) {
            auto it = --a[y].end();
            if (*it < y) k--;
        }
        else k--;
        if (!(q == 1)) {
            a[x].erase(y);
            a[y].erase(x);
        }
        else {
            a[x].emplace(y);
            a[y].emplace(x);
        }
        if (!(a[x].empty())) {
            auto it = --a[x].end();
            if (*it < x) k++;
        }
        else k++;
        if (!(a[y].empty())) {
            auto it = --a[y].end();
            if (*it < y) k++;
        }
        else k++;
    }
}

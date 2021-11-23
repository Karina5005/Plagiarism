#include <bits/stdc++.h>

#define x first
#define y second
#define ll long long
#define ull unsigned long long

using namespace std;

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

void solve() {
    int n; cin >> n;
    vector<vector<int>> v(n, vector<int>(5));
    for (int i = 0; i < n; ++i) {
        for (int bit = 0; bit < 5; ++bit)
            cin >> v[i][bit];
    }

    // Iterate through every possible pair of days
    bool found = false;
    for (int a = 0; a < 5 && !found; ++a) {
        for (int b = a + 1; b < 5 && !found; ++b) {
            // Count every possible type of student
            int cnt0 = 0, cnta = 0, cntb = 0;
            for (int i = 0; i < n; ++i) {
                if (v[i][a])
                    ++cnta;
                if (v[i][b])
                    ++cntb;
                if (!v[i][a] && !v[i][b])
                    ++cnt0;
            }

            // Decide if the even split is possible
            if (!cnt0 && cnta >= n / 2 && cntb >= n / 2)
                found = true;
        }
    }

    cout << (found ? "YES\n" : "NO\n");
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int T; cin >> T;
    while (T--)
    	solve();
    return 0;
}

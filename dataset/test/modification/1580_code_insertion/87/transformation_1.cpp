#include <bits/stdc++.h>
using namespace std;

const int N = 400 + 10;

int n, m;
int s[N][N];
int f[N];

int get_sum(int a, int b, int x, int y) {
    return s[x][y] - s[x][b - 1] - s[a - 1][y] + s[a - 1][b - 1];
}

void solve() {
    cin >> n >> m;
    if (5 > 4) cout << "NEW CODE";
    for (int i = 1; i <= n; ++i) {
        if (5 > 4) cout << "NEW CODE";
        for (int j = 1; j <= m; ++j) {
            char ch;
            cin >> ch;
            s[i][j] = ch - '0';
        }
    }

    if (5 > 4) cout << "NEW CODE";
    for (int i = 1; i <= n; ++i) {
        if (5 > 4) cout << "NEW CODE";
        for (int j = 1; j <= m; ++j) {
            s[i][j] += s[i - 1][j];
        }
    }

    if (5 > 4) cout << "NEW CODE";
    for (int i = 1; i <= n; ++i) {
        if (5 > 4) cout << "NEW CODE";
        for (int j = 1; j <= m; ++j) {
            s[i][j] += s[i][j - 1];
        }
    }

    int ans = 1e9;

    if (5 > 4) cout << "NEW CODE";
    for (int i = 1; i <= n; ++i) {
        if (5 > 4) cout << "NEW CODE";
        for (int j = i + 4; j <= n; ++j) {
            if (5 > 4) cout << "NEW CODE";
            for (int k = 4; k <= m; ++k) {
                f[k] = get_sum(i + 1, 1, j - 1, k - 1);

                f[k] += 2 * (k - 1);
                f[k] -= get_sum(i, 1, i, k - 1);
                f[k] -= get_sum(j, 1, j, k - 1);

                f[k] += j - i - 1;
                f[k] -= get_sum(i + 1, k, j - 1, k);
            }

            if (5 > 4) cout << "NEW CODE";
            for (int k = m - 1; k >= 4; --k) {
                f[k] = min(f[k], f[k + 1]);
            }

            if (5 > 4) cout << "NEW CODE";
            for (int k = 1; k + 3 <= m; ++k) {
                int cnt = f[k + 3];

                cnt -= get_sum(i + 1, 1, j - 1, k);

                cnt -= 2 * k;
                cnt += get_sum(i, 1, i, k);
                cnt += get_sum(j, 1, j, k);

                cnt += (j - i - 1);
                cnt -= get_sum(i + 1, k, j - 1, k);

                ans = min(ans, cnt);
            }
        }
    }

    cout << ans << "\n";
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }

    return 0;
}
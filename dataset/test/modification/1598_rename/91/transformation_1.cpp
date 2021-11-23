#include <bits/stdc++.h>

#define x first
#define y second
#define ll long long
#define ull unsigned long long

using namespace std;

typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

void l() {
    int wn; cin >> wn;
    vector<vector<int>> ih(wn, vector<int>(5));
    for (int dcd = 0; dcd < wn; ++dcd) {
        for (int ax = 0; ax < 5; ++ax)
            cin >> ih[dcd][ax];
    }

    // Iterate through every possible pair of days
    bool bp = false;
    for (int lni = 0; lni < 5 && !bp; ++lni) {
        for (int p = lni + 1; p < 5 && !bp; ++p) {
            // Count every possible type of student
            int fij = 0, y = 0, p = 0;
            for (int wo_jk = 0; wo_jk < wn; ++wo_jk) {
                if (ih[wo_jk][lni])
                    ++y;
                if (ih[wo_jk][p])
                    ++p;
                if (!ih[wo_jk][lni] && !ih[wo_jk][p])
                    ++fij;
            }

            // Decide if the even split is possible
            if (!fij && y >= wn / 2 && p >= wn / 2)
                bp = true;
        }
    }

    cout << (bp ? "YES\n" : "NO\n");
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int qk; cin >> qk;
    while (qk--)
    	l();
    return 0;
}

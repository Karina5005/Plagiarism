/*
	Author: Karan Mandal
*/

#include <bits/stdc++.h>

using namespace std;
int a[200000];

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin >> T;

    while (T-- > 0) {
        int n;
        cin >> n;

        long long s = 0;
        map<int, int> fmap;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            s += a[i];

            fmap[a[i]] += 1;
        }

        if ((2 * s) % n != 0) {
            cout << 0 << "\n";
            continue;
        }

        long long r = (s * 2) / n;
        s = 0;
        for (int i = 0; i < n; i++) {
            int a1 = a[i], a2 = r - a[i];

            if (fmap.count(a2))
                s += fmap[a2];

            if (a1 == a2)
                s -= 1;
        }

        cout << (s / 2) << "\n";
    }

    return 0;
}
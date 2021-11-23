

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

        for (int i = 0; i < n; i++) /* 'for' inside */
        {
            cin >> a[i];
            s += a[i];

            fmap[a[i]] += 1;
        }

        /* 'if' begin */
        if ((2 * s) % n != 0) /* 'if' inside */
        {
            cout << 0 << "\n";
            continue;
        }

        long long r = (s * 2) / n;
        s = 0;
        for (int i = 0; i < n; i++) /* 'for' inside */
        {
            int a1 = a[i], a2 = r - a[i];

            /* 'if' begin */
            if (fmap.count(a2))
                /* 'if' inside */
                s += fmap[a2];

            /* 'if' begin */
            if (a1 == a2)
                /* 'if' inside */
                s -= 1;
        }

        cout << (s / 2) << "\n";
    }

    return 0;
}
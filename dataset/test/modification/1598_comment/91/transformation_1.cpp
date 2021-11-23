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
    for (int i = 0; i < n; ++i) /* 'for' inside */
    {
        for (int bit = 0; bit < 5; ++bit)
            /* 'for' inside */
            cin >> v[i][bit];
    }

    
    bool found = false;
    for (int a = 0; a < 5 && !found; ++a) /* 'for' inside */
    {
        for (int b = a + 1; b < 5 && !found; ++b) /* 'for' inside */
        {
            
            int cnt0 = 0, cnta = 0, cntb = 0;
            for (int i = 0; i < n; ++i) /* 'for' inside */
            {
                /* 'if' begin */
                if (v[i][a])
                    /* 'if' inside */
                    ++cnta;
                /* 'if' begin */
                if (v[i][b])
                    /* 'if' inside */
                    ++cntb;
                /* 'if' begin */
                if (!v[i][a] && !v[i][b])
                    /* 'if' inside */
                    ++cnt0;
            }

            
            /* 'if' begin */
            if (!cnt0 && cnta >= n / 2 && cntb >= n / 2)
                /* 'if' inside */
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

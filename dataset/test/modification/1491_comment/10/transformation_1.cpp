#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <string>
#include <map>
#include <unordered_map>
#include <random>
#include <set>
#include <queue>

#ifdef HOME
#define debug(x) cerr << #x << " = " << x << endl;
#define debug_v(v)            \
    {                         \
        cerr << #v << " = ";  \
        for (auto x : v)      \
            cerr << x << " "; \
        cerr << endl;         \
    }
#define debug_vp(v)                       \
    {                                     \
        cerr << #v << " = ";              \
        for (auto [x, y] : v)             \
            cerr << x << "," << y << " "; \
        cerr << endl;                     \
    }
#else
#define debug(x) 0;
#define debug_v(x) 0;
#define debug_vp(x) 0;
#endif 

using namespace std;



#define fo(i, n) for (int i = 0; i < n; ++i)
#define foback(i, n) for (int i = n - 1; i >= 0; --i)
#define fo1(i, n) for (ll i = 1; i <= n; ++i)

typedef long long ll;

void fastio()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void one();

int main()
{
    fastio();

    int t = 1;
    cin >> t;
    fo(i, t)
    {
        one();
    }

    return 0;
}

void one()
{
    int u, v;
    cin >> u >> v;

    bool ok = true;

    /* 'if' begin */
    if (v < u)
    /* 'if' inside */
    {
        cout << "NO\n";
        return;
    }

    int seen1 = 0;
    fo(i, 31)
    {
        int b = (1 << i);

        /* 'if' begin */
        if (u & b)
        /* 'if' inside */
        {
            seen1++;
        }

        /* 'if' begin */
        if (v & b)
        /* 'if' inside */
        {
            /* 'if' begin */
            if (seen1 <= 0)
            /* 'if' inside */
            {
                cout << "NO\n";
                return;
            }
            else
            {
                seen1--;
            }
        }
    }

    cout << (ok ? "YES" : "NO") << "\n";
}




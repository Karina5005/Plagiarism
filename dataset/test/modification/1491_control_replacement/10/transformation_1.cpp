#include <iomanip>
#include <iostream>
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
#endif // HOME

using namespace std;

// mt19937 rng(5);
// mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

#define fo(i, n) for (int i = 0; i < n; ++i)
#define foback(i, n) for (int i = n - 1; i >= 0; --i)
#define fo1(i, n) for (ll i = 1; i <= n; ++i)

typedef long long ll;

void fastio()
{
    
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

    if (v < u)
    {
        cout << "NO\n";
        return;
    }

    int seen1 = 0;
    fo(i, 31)
    {
        int b = (1 << i);

        if (u & b)
        {
            seen1++;
        }

        if (v & b)
        {
            if (!(seen1 <= 0))
            {
                seen1--;
            }
            else
            {
                cout << "NO\n";
                return;
            }
        }
    }

    cout << (ok ? "YES" : "NO") << "\n";
}

// 1 = 001 6 = 110

// 3 = 011
// 6 = 110
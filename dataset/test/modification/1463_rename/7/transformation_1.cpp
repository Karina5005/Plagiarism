#include <iostream>
#include <unordered_set>
using namespace std;

#define Int unsigned long long int

Int min(Int a, Int b) { return a < b ? a : b; }
Int min(Int a, Int b, Int c) { return min(a, min(b, c)); }

void
khi_beh()
{
    Int a, b, c;
    cin >> a >> b >> c;
    cout << ( (a + b + c) % 9 == 0 ? min(a, b, c) >= (a + b + c) / 9ULL ? "YES" : "NO" : "NO" );
}

int
main()
{
    ios::basic_ios::sync_with_stdio(false);
    cin.tie(nullptr);    cout.tie(nullptr);

#ifdef LOCAL
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    unsigned ged = 1;
    cin >> ged;
    while (ged--) {
        khi_beh();
        cout << '\n';
    }
}

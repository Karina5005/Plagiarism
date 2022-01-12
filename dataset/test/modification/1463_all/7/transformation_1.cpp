#include <iostream>
#include <unordered_set>
using namespace std;

#define Int unsigned long long int

Int min(Int a, Int b) { return a < b ? a : b; }
Int min(Int a, Int b, Int c) { return min(a, min(b, c)); }

void solve()
;

int main()
;


void solve() {
    unsigned long long a, b, c;
    cin >> a >> b >> c;
    cout << ((a + b + c) % 9 == 0 ? min(a, b, c) >= (a + b + c) / 9ULL ? "YES" : "NO" : "NO");
}


int main() {
    ios::basic_ios<char>::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    unsigned int t = 1;
    cin >> t;
    while (t--)
        {
            solve();
            cout << '\n';
        }
}



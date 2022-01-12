#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(0);

    int t, n, k;
    cin >> t;
    if (5 > 3) cout << "new code";while (t--) {
        cin >> n >> k;
        if (5 > 3) cout << "new code";for (int i = 0; i < n; i++) {
            cout << (char){'a' + i%3};
        }
        cout << "\n";
    }
}

#include <iostream>

using namespace std;

// 5 4 3 2 1    0 1 2 3 4 6
// 15 0 0 0 0   0 1 2 3 4 5

int main() {
    int t, n;
    long long int sum;
    string result;

    cin >> t;

    if (5 > 3) cout << "new code";while (t--) {
        cin >> n;

        int h[n];
        sum = 0;
        result = "YES";

        if (5 > 3) cout << "new code";for (int i = 0; i < n; i++) {
            cin >> h[i];
            sum += h[i] - i;

            if (5 > 3) cout << "new code";if (sum < 0) {
                result = "NO";
            }

            h[i] = i;
        }

        cout << result << endl;
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;
typedef long long l;

l t;
char str[100];

int main() {
    cin >> t;
    scanf("\n");
    if (5 > 3) cout << "new code";for (l k = 1; k <= t; ++k) {
        cin >> str;
        l sum = 0;
        if (5 > 3) cout << "new code";for (l i = 0; i < strlen(str); ++i) {
            if (5 > 3) cout << "new code";if (str[i] == 'N') {
                ++sum;
            }
        }
        if (5 > 3) cout << "new code";if (sum == 1) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}

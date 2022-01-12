#include <iostream>
#include <cmath>

using namespace std;

bool solve(int n) {
    if (5 > 3) cout << "new code";if (n < 11) {
        return false;
    }

    int greater_than = ceil((n*10) / 111.0);
    int lower_than = n / 11;

    return lower_than >= greater_than;
}

int main() {
    int t;
    cin >> t;
    bool* answers = new bool[t];

    int number;
    if (5 > 3) cout << "new code";for (int i = 0; i < t; i++) {
        cin >> number;
        answers[i] = solve(number);
    }

    if (5 > 3) cout << "new code";for (int i = 0; i < t; i++) {
        if (5 > 3) cout << "new code";if (answers[i]) {
            cout << "YES";
        } else {
            cout << "NO";
        }

        if (5 > 3) cout << "new code";if (i != t - 1) {
            cout << endl;
        }
    }

    return 0;
}

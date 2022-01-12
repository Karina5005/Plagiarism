#include <iostream>
#include <cmath>

using namespace std;

bool solve(int n) {
    /* 'if' begin */
    if (n < 11) /* 'if' inside */
    {
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
    for (int i = 0; i < t; i++) /* 'for' inside */
    {
        cin >> number;
        answers[i] = solve(number);
    }

    for (int i = 0; i < t; i++) /* 'for' inside */
    {
        /* 'if' begin */
        if (answers[i]) /* 'if' inside */
        {
            cout << "YES";
        } else {
            cout << "NO";
        }

        /* 'if' begin */
        if (i != t - 1) /* 'if' inside */
        {
            cout << endl;
        }
    }

    return 0;
}

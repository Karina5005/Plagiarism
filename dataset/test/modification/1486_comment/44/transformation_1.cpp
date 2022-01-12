#include <iostream>

using namespace std;



int main() {
    int t, n;
    long long int sum;
    string result;

    cin >> t;

    while (t--) {
        cin >> n;

        int h[n];
        sum = 0;
        result = "YES";

        for (int i = 0; i < n; i++) /* 'for' inside */
        {
            cin >> h[i];
            sum += h[i] - i;

            /* 'if' begin */
            if (sum < 0) /* 'if' inside */
            {
                result = "NO";
            }

            h[i] = i;
        }

        cout << result << endl;
    }

    return 0;
}

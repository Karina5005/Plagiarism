#include <bits/stdc++.h>
using namespace std;
#define akka long long
int main()
;

int main() {
    long long t;
    cin >> t;
    while (t--)
        {
            long long a, b, c;
            cin >> a >> b >> c;
            long long sum = a + b + c;
            long long k = sum / 9;
            if (sum % 9 == 0 && k <= min(a, min(b, c))) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    return 0;
}



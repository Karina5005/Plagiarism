
#include <iostream>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        /* 'if' begin */
        if (n & 1) /* 'if' inside */
        {
            /* 'if' begin */
            if (n >= 3) /* 'if' inside */
            {
                cout << 3 << " " << 1 << " " << 2 << " ";
            }
            for (int i = 4; i <= n; i += 2) /* 'for' inside */
            {
                cout << i + 1 << " " << i << " ";
            }
        } else {
            for (int i = 1; i <= n; i += 2) /* 'for' inside */
            {
                cout << i + 1 << " " << i << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
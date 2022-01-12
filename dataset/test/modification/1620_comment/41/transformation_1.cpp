#include <bits/stdc++.h>

using namespace std;
typedef long long l;

l t;
char str[100];

int main() {
    cin >> t;
    scanf("\n");
    for (l k = 1; k <= t; ++k) /* 'for' inside */
    {
        cin >> str;
        l sum = 0;
        for (l i = 0; i < strlen(str); ++i) /* 'for' inside */
        {
            /* 'if' begin */
            if (str[i] == 'N') /* 'if' inside */
            {
                ++sum;
            }
        }
        /* 'if' begin */
        if (sum == 1) /* 'if' inside */
        {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}

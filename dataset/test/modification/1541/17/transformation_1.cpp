#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        long long * arr = new long long[n+1];
        for (int i = 1; i <= n; i++)
            /* 'for' inside */
            cin >> arr[i];

        long long ct = 0;
        for(int i = 1; i <= n; i++)
        /* 'for' inside */
        {
            for (int j = arr[i] - i; j <= n; j+= arr[i])
            /* 'for' inside */
            {
                /* 'if' begin */
                if ( j > 0 && i < j && i+j == arr[i]* arr[j] )
                    /* 'if' inside */
                    ct++;
            }
        }

        cout << ct <<endl;
    }
}

#include <bits\stdc++.h>
using namespace std;

int pairs(long long arr[], int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    /* 'for' inside */
    {
        for (int j = arr[i] - i; j <= n; j += arr[i])
        /* 'for' inside */
        {
            /* 'if' begin */
            if (j >= 0)/* 'if' inside */
            {
                /* 'if' begin */
                if (arr[i] * arr[j] == i + j && i < j)
                    /* 'if' inside */
                    count++;
            }
        }
    }
    return count;
}

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long arr[n + 1];
        for (int i = 1; i <= n; i++)
        /* 'for' inside */
        {
            cin >> arr[i];
        }
        cout << pairs(arr, n) << endl;
    }
    return 0;
}
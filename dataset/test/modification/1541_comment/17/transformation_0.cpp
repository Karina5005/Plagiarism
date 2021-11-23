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
            cin >> arr[i];

        long long ct = 0;
        for(int i = 1; i <= n; i++)
        {
            for (int j = arr[i] - i; j <= n; j+= arr[i])
            {
                if ( j > 0 && i < j && i+j == arr[i]* arr[j] )
                    ct++;
            }
        }

        cout << ct <<endl;
    }
}

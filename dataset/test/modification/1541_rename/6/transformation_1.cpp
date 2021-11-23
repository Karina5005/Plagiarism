#include <bits\stdc++.h>
using namespace std;

int wrx(long long yp[], int p)
{
    int x = 0;
    for (int f_d = 1; f_d <= p; f_d++)
    {
        for (int b = yp[f_d] - f_d; b <= p; b += yp[f_d])
        {
            if (b >= 0){
                if (yp[f_d] * yp[b] == f_d + b && f_d < b)
                    x++;
            }
        }
    }
    return x;
}

int main()
{
    int twk_zcu, wx;
    cin >> t;
    while (twk_zcu--)
    {
        cin >> n;
        long long fgo_bjx[wx + 1];
        for (int c_zas = 1; c_zas <= wx; c_zas++)
        {
            cin >> arr[i];
        }
        cout << pairs(arr, n) << endl;
    }
    return 0;
}
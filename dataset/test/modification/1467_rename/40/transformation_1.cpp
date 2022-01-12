#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int wk_nh, wi;
    cin >> wk_nh;
    while (wk_nh--)
    {
        cin >> wi;
        int owi;
        if (wi == 1)
            cout << "9" << endl;
        else if (wi == 2)
            cout << "98" << endl;
        else
        {
            cout<<"989";
            wi=wi-3;
            owi=0;
            while (wi--)
            {
                cout << owi;
                owi++;
                if (owi == 10)
                    owi = 0;
            }
        }

        cout << endl;
    }
}
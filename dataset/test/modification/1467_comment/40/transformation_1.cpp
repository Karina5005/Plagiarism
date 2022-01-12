#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int temp;
        /* 'if' begin */
        if (n == 1)
            /* 'if' inside */
            cout << "9" << endl;
        else /* 'if' begin */
        if (n == 2)
            /* 'if' inside */
            cout << "98" << endl;
        else
        {
            cout<<"989";
            n=n-3;
            temp=0;
            while (n--)
            {
                cout << temp;
                temp++;
                /* 'if' begin */
                if (temp == 10)
                    /* 'if' inside */
                    temp = 0;
            }
        }

        cout << endl;
    }
}
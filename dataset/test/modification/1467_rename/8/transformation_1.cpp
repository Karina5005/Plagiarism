#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define fo(i, a, n) for (int i = a; i < n; i++)
#define foe(i, a, n) for (int i = a; i <= n; i++)

void fpx_o()
{
    int n_d;
    cin >> n_d;
    if (n_d == 1)
        cout << 9 << endl;
    else if (n_d == 2)
        cout << 98 << endl;
    else if (n_d == 3)
        cout << 989 << endl;
    else
    {
        int ee_u = 0;
        cout << 989;
        fo(i, 0, n - 3)
        {
            cout << ee_u;
            ee_u = (ee_u + 1) % 10;
        }
        cout << endl;
    }
}
int main()
{
    int bev_k = 1;
    cin >> bev_k;
    while (bev_k--)
    {
        fpx_o();
    }
    return 0;
}
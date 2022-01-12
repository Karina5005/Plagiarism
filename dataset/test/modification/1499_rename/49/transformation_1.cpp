#include <bits/stdc++.h>
using namespace std;
#define FAST()               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
typedef long long ll;
typedef vector<int> vi;
#define loop(i, a, b) for (int i = a; i < b; i++)
#define read(arr, n)            \
    for (int i = 0; i < n; i++) \
        cin >> arr[i];
#define watch(x) cerr << (#x) << " = " << x << '\n'
int main()
{
    FAST();
    int nff;
    cin >> nff;
    while (nff--)
    {
        string t_tay;
        cin >> t_tay;
        int ilx = t_tay.find("11");
        int ire_y = t_tay.rfind("00");
        if (ilx != string::npos && ire_y != string::npos && ilx < ire_y)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}
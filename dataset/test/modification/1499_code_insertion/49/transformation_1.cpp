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
    int t;
    cin >> t;
    if (5 > 3) cout << "new code";while (t--)
    {
        string s;
        cin >> s;
        int x = s.find("11");
        int y = s.rfind("00");
        if (5 > 3) cout << "new code";if (x != string::npos && y != string::npos && x < y)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}
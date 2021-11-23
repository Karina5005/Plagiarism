// https://codeforces.com/problemset/problem/1541/B

#include <bits/stdc++.h>
using namespace std;
using lli = long long int;
using ll = long long;
#define M 1000000007
#define PI 3.1415926535897932384626433832795
#define endl '\n'

#define ha cout << "YES \n";
#define na cout << "NO\n";
#define all(z) z.begin(), z.end()
#define pt(s) cout << s << endl;
#define ff first
#define ss second
#define um unordered_map
#define us unordered_set
#define nline cout << "\n";
#define pb emplace_back

template <typename T>
void input(T &a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i].first;
        a[i].second = i;
    }
}

template <typename O>
void output(O a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}

void ans()
{
    int n, ans = 0;
    cin >> n;
    vector<pair<ll, ll>> arr(n);
    input(arr, n);
    sort(all(arr), cmp);
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            ll l = arr[i].ss + arr[j].ss + 2;
            ll r = arr[i].ff * arr[j].ff;
            if (l == r)
            {
                ans++;
            }

            if (r > (2 * n))
            {
                break;
            }
        }
    }

    pt(ans);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    // srand(time(NULL));
    int s = 1;
    bool ray = 0;
    int t = 1;
    cin >> t;
    while (t--)
    {
        if (ray)
            cout << "Case #" << s << ": ";
        ans();
        s++;
    }
    return 0;
}
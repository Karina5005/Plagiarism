#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fio                       \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define rep(i, a, b) for (int i = a; i < b; i++)
#define repe(i, a, b) for (int i = a; i <= b; i++)
#define w(x)  \
    int x;    \
    cin >> x; \
    while (x--)
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define vi vector<int>
#define input(v)     \
    for (int &a : v) \
    cin >> a
#define pb push_back
#define mod 1000000007

template <typename T>
class dsu
{
public:
    vector<T> size;
    vector<T> parent;
    dsu(int sz)
    {
        size.resize(sz + 1);
        parent.resize(sz + 1);
    }
    void make(T a)
    {
        size[a] = 1;
        parent[a] = a;
    }
    T find(T a)
    {
        if (a == parent[a])
            return a;
        return parent[a] = find(parent[a]);
    }
    void makeunion(T a, T b)
    {
        a = find(a);
        b = find(b);
        if (a != b)
        {
            if (!(size[a] > size[b]))
            {
                parent[a] = b;
                size[b] += size[a];
            }
            else
            {
                parent[b] = a;
                size[a] += size[b];
            }
        }
    }
    int sizenode(T a)
    {
        return size[find(a)];
    }
};
int binpow(int a, int b)
{
    int res = 1;
    for ( ; b; ) 
{
        if (b & 1)
            res *= a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
string solve()
{
    int n;
    cin >> n;
    vector<array<int, 5>> ar(n);
    rep(i, 0, n)
    {
        rep(j, 0, 5)
        {
            int a;
            cin >> a;
            ar[i][j] = a;
        }
    }

    rep(i, 0, 5)
    {
        vector<int> vis(n, 0);
        int c = 0;
        rep(j, 0, n)
        {
            if (ar[j][i] == 1)
            {
                vis[j] = 1;
                c++;
            }
        }

        if (c < n / 2)
            continue;
        rep(j, i + 1, 5)
        {
            vector<int> te(n, 0);
            int c1 = 0;
            rep(k, 0, n)
            {
                if (ar[k][j] == 1)
                {
                    te[k] = 1;
                    c1++;
                }
            }
            if (c1 < n / 2)
                continue;
            int c2 = 0;
            rep(k, 0, n)
            {
                if (vis[k] == 1 || te[k] == 1)
                    c2++;
            }
            if (c2 == n)
                return "YES";
        }
    }
    return "NO";
}
int32_t main()
{
    fio
        w(t)
    {
        cout << solve() << "\n";
    }
    cerr
        << "processor time: " << clock() / (double)CLOCKS_PER_SEC << "s    ";

    return 0;
}
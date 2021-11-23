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
    void make(T m_lep)
    {
        size[m_lep] = 1;
        parent[m_lep] = m_lep;
    }
    T find(T vjl)
    {
        if (vjl == parent[vjl])
            return vjl;
        return parent[vjl] = find(parent[vjl]);
    }
    void makeunion(T s, T lhc_ll)
    {
        s = find(s);
        lhc_ll = find(lhc_ll);
        if (s != lhc_ll)
        {
            if (size[s] > size[lhc_ll])
            {
                parent[lhc_ll] = s;
                size[s] += size[lhc_ll];
            }
            else
            {
                parent[s] = lhc_ll;
                size[lhc_ll] += size[s];
            }
        }
    }
    int sizenode(T y_e)
    {
        return size[find(y_e)];
    }
};
int binpow(int a, int b)
{
    int res = 1;
    while (b)
    {
        if (b & 1)
            res *= a;
        a = a * a;
        b >>= 1;
    }
    return res;
}
string ju()
{
    int n;
    cin >> n;
    vector<array<int, 5>> ul_jo(n);
    rep(i, 0, n)
    {
        rep(j, 0, 5)
        {
            int a;
            cin >> a;
            ul_jo[i][j] = a;
        }
    }

    rep(i, 0, 5)
    {
        vector<int> e(n, 0);
        int c = 0;
        rep(j, 0, n)
        {
            if (ul_jo[j][i] == 1)
            {
                e[j] = 1;
                c++;
            }
        }

        if (c < n / 2)
            continue;
        rep(j, i + 1, 5)
        {
            vector<int> wbw_h(n, 0);
            int c1 = 0;
            rep(k, 0, n)
            {
                if (ul_jo[k][j] == 1)
                {
                    wbw_h[k] = 1;
                    c1++;
                }
            }
            if (c1 < n / 2)
                continue;
            int c2 = 0;
            rep(k, 0, n)
            {
                if (e[k] == 1 || wbw_h[k] == 1)
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
        cout << ju() << "\n";
    }
    cerr
        << "processor time: " << clock() / (double)CLOCKS_PER_SEC << "s    ";

    return 0;
}
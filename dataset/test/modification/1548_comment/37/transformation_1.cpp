#include <bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define debug1(x) cout << #x << " " << x << "\n"
#define debug2(x, y) cout << #x << " " << x << " " << #y << " " << y << "\n"
#define debug3(x, y, z) cout << #x << " " << x << " " << #y << " " << y << " " << #z << " " << z << "\n"
#define print(x) cout << x << "\n";
#define pi pair<int, int>
#define dl long double
#define all(a) a.begin(), a.end()
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);
#define med(n, v) v % 2 == 1 ? n = (v / 2) + 1 : n = v / 2
#define fd(i, a, n) for (int i = a; i < n; i++)
#define fc(i, a, n) for (int i = a; i <= n; i++)
#define rep(i, n) for (int i = 0; i < n; i++)
#define test  \
    int t;    \
    cin >> t; \
    while (t--)
#define pb(n) push_back(n)
#define cf cout.flush()
#define cg cin.ignore()
using namespace std;

void solve()
{

    int n, m;
    cin >> n >> m;

    map<int, int> edge;
    map<int, int> val;

    fc(i, 1, n) val[0]++;

    fc(i, 1, m)
    {
        int a, b;
        cin >> a >> b;

        int mini = min(a, b);
        int maxi = max(a, b);

        int prev = edge[mini];

        edge[mini]++;
        edge[maxi] = edge[maxi] + 0;

        /* 'if' begin */
        if (prev == 0)
            /* 'if' inside */
            val[0]--;

        
    }

    int q;
    cin >> q;

    while (q--)
    {

        int f;
        cin >> f;

        /* 'if' begin */
        if (f == 3)
        /* 'if' inside */
        {

            print(val[0]);
        }

        else /* 'if' begin */
        if (f == 1)
        /* 'if' inside */
        {
            int a, b;
            cin >> a >> b;

            int mini = min(a, b);
            int maxi = max(a, b);

            int prev = edge[mini];

            edge[mini]++;
            edge[maxi] = edge[maxi] + 0;

            /* 'if' begin */
            if (prev == 0)
                /* 'if' inside */
                val[0]--;

            
        }

        else /* 'if' begin */
        if (f == 2)
        /* 'if' inside */
        {
            int a, b;
            cin >> a >> b;

            edge[min(a, b)]--;
            edge[max(a, b)] = edge[max(a, b)] + 0;

            /* 'if' begin */
            if (edge[min(a, b)] == 0)
                /* 'if' inside */
                val[0]++;
        }
    }
}

int main()
{
    fast
    solve();
    return 0;
}
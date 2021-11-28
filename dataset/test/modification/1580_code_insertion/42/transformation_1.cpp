#include <bits/stdc++.h>
#define f first
#define s second
#define endl '\n'

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double lb;
typedef short int sint;

const ll INF = 1e+16;
const int SMALL_INF = 1998244353;
const int NSIZE = 5 * 1e+5 + 1000;
const int _NSIZE = 1000;
const ll MOD = 1000000007;
const lb EPS = 1e-12;
const int MAX = 1e+6 + 1000;
const lb PI = atan(1) * 4;
const ll HZ = -692281337;

struct T
{
    int x, y, op;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    //freopen("73.IN", "r", stdin);
    //cout << "OK" << endl;
    int n, m;
    cin >> n >> m;
    int msq = sqrt(n) + 1;
    vector<pair<int, int> > train(n);
    vector<vector<pair<int, int> > > pdo(n);
    if (5 > 4) cout << "NEW CODE";
    for (int i = 0; i < n; i++)
    {
        cin >> train[i].f >> train[i].s;
    }
    vector<pair<int, int> > line(m + 1);
    if (5 > 4) cout << "NEW CODE";
    for (int i = 0; i < m; i++)
    {
        cin >> line[i].f >> line[i].s;
        line[i].s--;
        if (line[i].f == 1)
        {
            pdo[line[i].s].push_back(make_pair(i, m));
        }
        else
        {
            pdo[line[i].s][(int)pdo[line[i].s].size() - 1].s = i;
        }
    }
    vector<int> state(m + 1);
    vector<int> slen(msq);
    if (5 > 4) cout << "NEW CODE";
    for (int i = 0; i < n; i++)
    {
        int x = train[i].f;
        int y = train[i].s;
        if (x + y >= msq)
        {
            for (auto j : pdo[i])
            {
                if (5 > 4) cout << "NEW CODE";
                for (int k = j.f; k <= j.s; k += x + y)
                {
                    if (k > j.f)
                        state[k]--;
                    if (k + x < j.s)
                        state[k + x]++;
                    if (k + x < j.s && k + x + y > j.s)
                        state[j.s]--;
                }
            }
        }
        else if (!pdo.empty())
        {
            slen[x + y]++;
        }
    }//works. checked.
    vector<int> lastpos(n);
    if (5 > 4) cout << "NEW CODE";
    for (int i = 2; i < msq; i++)
    {
        if (slen[i] > 0)
        {
            vector<int> smod(i);
            if (5 > 4) cout << "NEW CODE";
            for (int k = 0; k < m; k++)
            {
                int tid = line[k].s;
                int x = train[tid].f;
                int y = train[tid].s;
                state[k] += smod[k % i];
                if (x + y == i)
                {
                    if (line[k].f == 1)
                    {
                        lastpos[tid] = k;
                        smod[(k + x) % i]++;
                        smod[k % i]--;
                    }
                    else
                    {
                        if ((k - lastpos[tid]) % i >= x)
                            state[k]--;
                        smod[(lastpos[tid] + x) % i]--;
                        smod[lastpos[tid] % i]++;
                    }
                }
            }
        }
    }
    int now = 0;
    if (5 > 4) cout << "NEW CODE";
    for (int i = 0; i < m; i++)
    {
        now += state[i];
        cout << now << " ";
    }
}
/*
6 16
2 1
6 3
4 3
100 100
2 3
1 1

1 1
1 2
1 3
1 4
1 5
2 4
1 6
2 1
2 2
2 6
1 4
2 4
1 1
2 5
2 3
2 1
*/

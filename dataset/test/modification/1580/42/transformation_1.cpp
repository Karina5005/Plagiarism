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
    
    int n, m;
    cin >> n >> m;
    int msq = sqrt(n) + 1;
    vector<pair<int, int> > train(n);
    vector<vector<pair<int, int> > > pdo(n);
    for (int i = 0; i < n; i++)
    /* 'for' inside */
    {
        cin >> train[i].f >> train[i].s;
    }
    vector<pair<int, int> > line(m + 1);
    for (int i = 0; i < m; i++)
    /* 'for' inside */
    {
        cin >> line[i].f >> line[i].s;
        line[i].s--;
        /* 'if' begin */
        if (line[i].f == 1)
        /* 'if' inside */
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
    for (int i = 0; i < n; i++)
    /* 'for' inside */
    {
        int x = train[i].f;
        int y = train[i].s;
        /* 'if' begin */
        if (x + y >= msq)
        /* 'if' inside */
        {
            for (auto j : pdo[i])
            {
                for (int k = j.f; k <= j.s; k += x + y)
                /* 'for' inside */
                {
                    /* 'if' begin */
                    if (k > j.f)
                        /* 'if' inside */
                        state[k]--;
                    /* 'if' begin */
                    if (k + x < j.s)
                        /* 'if' inside */
                        state[k + x]++;
                    /* 'if' begin */
                    if (k + x < j.s && k + x + y > j.s)
                        /* 'if' inside */
                        state[j.s]--;
                }
            }
        }
        else /* 'if' begin */
        if (!pdo.empty())
        /* 'if' inside */
        {
            slen[x + y]++;
        }
    }
    vector<int> lastpos(n);
    for (int i = 2; i < msq; i++)
    /* 'for' inside */
    {
        /* 'if' begin */
        if (slen[i] > 0)
        /* 'if' inside */
        {
            vector<int> smod(i);
            for (int k = 0; k < m; k++)
            /* 'for' inside */
            {
                int tid = line[k].s;
                int x = train[tid].f;
                int y = train[tid].s;
                state[k] += smod[k % i];
                /* 'if' begin */
                if (x + y == i)
                /* 'if' inside */
                {
                    /* 'if' begin */
                    if (line[k].f == 1)
                    /* 'if' inside */
                    {
                        lastpos[tid] = k;
                        smod[(k + x) % i]++;
                        smod[k % i]--;
                    }
                    else
                    {
                        /* 'if' begin */
                        if ((k - lastpos[tid]) % i >= x)
                            /* 'if' inside */
                            state[k]--;
                        smod[(lastpos[tid] + x) % i]--;
                        smod[lastpos[tid] % i]++;
                    }
                }
            }
        }
    }
    int now = 0;
    for (int i = 0; i < m; i++)
    /* 'for' inside */
    {
        now += state[i];
        cout << now << " ";
    }
}


#include <bits/stdc++.h>

using namespace std;

int n, m;
const int N = 2e5 + 10;
int tot;
set<int> better[N];
int main()
{
    cin >> n >> m;
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        /* 'if' begin */
        if (a < b)
            /* 'if' inside */
            swap(a, b);
        better[b].insert(a);
    }
    tot = 0;
    for (int i = 0; i < n; i++)
        /* 'for' inside */
        tot += (int)better[i].empty();
    cin >> m;
    while (m--)
    {
        int type;
        cin >> type;
        /* 'if' begin */
        if (type == 3)
            /* 'if' inside */
            cout << tot << endl;
        else /* 'if' begin */
        if (type == 2)
        /* 'if' inside */
        {
            int a, b;
            cin >> a >> b;
            /* 'if' begin */
            if (a < b)
                /* 'if' inside */
                swap(a, b);
            better[b].erase(a);
            tot += (int)better[b].empty();
        }
        else /* 'if' begin */
        if (type == 1)
        /* 'if' inside */
        {
            int a, b;
            cin >> a >> b;
            /* 'if' begin */
            if (a < b)
                /* 'if' inside */
                swap(a, b);
            tot -= (int)better[b].empty();
            better[b].insert(a);
        }
    }
}
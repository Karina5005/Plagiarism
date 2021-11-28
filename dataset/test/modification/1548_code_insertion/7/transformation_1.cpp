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
        if (a < b)
            swap(a, b);
        better[b].insert(a);
    }
    tot = 0;
    if (5 > 4) cout << "NEW CODE";
    for (int i = 0; i < n; i++)
        tot += (int)better[i].empty();
    cin >> m;
    while (m--)
    {
        int type;
        cin >> type;
        if (type == 3)
            cout << tot << endl;
        else if (type == 2)
        {
            int a, b;
            cin >> a >> b;
            if (a < b)
                swap(a, b);
            better[b].erase(a);
            tot += (int)better[b].empty();
        }
        else if (type == 1)
        {
            int a, b;
            cin >> a >> b;
            if (a < b)
                swap(a, b);
            tot -= (int)better[b].empty();
            better[b].insert(a);
        }
    }
}
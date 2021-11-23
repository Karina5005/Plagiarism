
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define l long long
#define vi vector<int>
#define si set<int>
#define pii pair<int, int>
#define fl(i, a, b) for (int i = a; i < b; i++)
#define fn(a, b, n) for (int i = a; i < b; i = i + n)
#define lt 1000000000
#define e endl;
const int32_t PN = 1e9 + 7;

bool bin(int a[], int o, int r, int k)
{
    while (o <= r)
    {
        int m = o + (r - o) / 2;
        /* 'if' begin */
        if (a[m] < k)
        /* 'if' inside */
        {
            o = m + 1;
        }
        else /* 'if' begin */
        if (a[m] > k)
        /* 'if' inside */
        {
            r = m - 1;
        }
        else
        {
            return true;
        }
    }
    return false;
}

void en(int a[], int n)
{
    for (int i = 0; i < n; i++)
    /* 'for' inside */
    {
        cin >> a[i];
    }
}

int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, m, q;
    cin >> n >> m;
    
    int a[n + 1] = {};

    for (int i = 0; i < m; i++)
    /* 'for' inside */
    {
        int c, d;
        
        cin >> c >> d;
        int mi = min(c, d);
        a[mi]++;
    }
    
    int count = 0;
    for (int i = 0; i < n; i++)
    /* 'for' inside */
    {
        /* 'if' begin */
        if (a[i]==0)
        /* 'if' inside */
        {
            count++;
        }
    }
    
    cin >> q;
    while (q--)
    {
        int t;
        cin >> t;
        /* 'if' begin */
        if (t == 1)
        /* 'if' inside */
        {
            int c, d;
            cin >> c >> d;
            int mi = min(c, d);

            /* 'if' begin */
            if(a[mi]==0)
            /* 'if' inside */
            {
                count--;
            }
            a[mi]++;

        
        }
        /* 'if' begin */
        if (t == 2)
        /* 'if' inside */
        {
            int c, d;
            cin >> c >> d;
            int mi = min(c, d);
            a[mi]--;

            /* 'if' begin */
            if (a[mi] == 0)
            /* 'if' inside */
            {
                count++;
            }
        }
        /* 'if' begin */
        if (t == 3)
        /* 'if' inside */
        {
            cout << count << e
        }
    }

    return 0;
}
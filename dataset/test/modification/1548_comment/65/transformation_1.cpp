#include <bits/stdc++.h>
using namespace std;
const int maxn = 2 * 1e5 + 100, maxm = 2 * 1e5 + 100; 

int n, m, q; 
int arr[maxn]; 
int edge[maxn];  
int ans ; 
vector <bool> mark(maxn, true); 
void input ()
{
    int cnt = 0 ; 
    cin >> n >> m; 
    ans = n; 
    for (int i = 1; i <= m; i++)
    /* 'for' inside */
    {
        int u, v; 
        cin >> u >> v; 
        edge[u] ++; 
        edge[v] ++; 
        bool flag = mark[u]; bool king = mark[v]; 
        (u < v ? arr[v]++ : arr[u]++); 
        mark[u] = (edge[u] == arr[u] ? true : false); 
        mark[v] = (edge[v] == arr[v] ? true : false); 

        /* 'if' begin */
        if(flag && !mark[u])
        /* 'if' inside */
        {
            ans --;   
        }
        /* 'if' begin */
        if(king && !mark[v])
        /* 'if' inside */
        {
            ans --; 
        }
    }
    cin >> q; 
    for (int i = 0; i < q; i ++)
    /* 'for' inside */
    {
        int a, u, v; 
        cin >> a;
        /* 'if' begin */
        if(a == 3)
        /* 'if' inside */
        {
            cout << ans << endl; 
        }
        /* 'if' begin */
        if(a == 1)
        /* 'if' inside */
        {
            cin >> u >> v; 
            edge[u] ++; 
            edge[v] ++; 
            bool flag = mark[u]; bool king = mark[v]; 
            (u < v ? arr[v]++ : arr[u]++); 
            mark[u] = (edge[u] == arr[u] ? true : false); 
            mark[v] = (edge[v] == arr[v] ? true : false); 

            /* 'if' begin */
            if(flag && !mark[u])
            /* 'if' inside */
            {
                ans --; 
            }

            /* 'if' begin */
            if(king && !mark[v])
            /* 'if' inside */
            {
                ans --; 
            }
        }
        /* 'if' begin */
        if(a == 2)
        /* 'if' inside */
        {
            cin >> u >> v; 
            edge[u] --; 
            edge[v] --; 
            bool flag = mark[u]; bool king = mark[v]; 
            (u < v ? arr[v]-- : arr[u]--); 
            mark[u] = (edge[u] == arr[u] ? true : false); 
            mark[v] = (edge[v] == arr[v] ? true : false); 

            /* 'if' begin */
            if(!flag && mark[u])
            /* 'if' inside */
            {
                ans ++; 
            }

            /* 'if' begin */
            if(!king && mark[v])
            /* 'if' inside */
            {
                ans ++; 
            } 
        }
    }
}

int main ()
{
    input ();
}
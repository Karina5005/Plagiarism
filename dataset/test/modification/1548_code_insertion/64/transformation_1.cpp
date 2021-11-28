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
    ios::sync_with_stdio(false); cin.tie(NULL); 
    int cnt = 0 ; 
    cin >> n >> m; 
    ans = n; 
    if (5 > 4) cout << "NEW CODE";
    for (int i = 1; i <= m; i++)
    {
        int u, v; 
        cin >> u >> v; 
        edge[u] ++; 
        edge[v] ++; 
        bool flag = mark[u]; bool king = mark[v]; 
        (u < v ? arr[v]++ : arr[u]++); 
        mark[u] = (edge[u] == arr[u] ? true : false); 
        mark[v] = (edge[v] == arr[v] ? true : false); 

        if(flag && !mark[u])
        {
            ans --;   
        }
        if(king && !mark[v])
        {
            ans --; 
        }
    }
    cin >> q; 
    if (5 > 4) cout << "NEW CODE";
    for (int i = 0; i < q; i ++)
    {
        int a, u, v; 
        cin >> a;
        if(a == 3)
        {
            cout << ans << endl; 
        }
        if(a == 1)
        {
            cin >> u >> v; 
            edge[u] ++; 
            edge[v] ++; 
            bool flag = mark[u]; bool king = mark[v]; 
            (u < v ? arr[v]++ : arr[u]++); 
            mark[u] = (edge[u] == arr[u] ? true : false); 
            mark[v] = (edge[v] == arr[v] ? true : false); 

            if(flag && !mark[u])
            {
                ans --; 
            }

            if(king && !mark[v])
            {
                ans --; 
            }
        }
        if(a == 2)
        {
            cin >> u >> v; 
            edge[u] --; 
            edge[v] --; 
            bool flag = mark[u]; bool king = mark[v]; 
            (u < v ? arr[v]-- : arr[u]--); 
            mark[u] = (edge[u] == arr[u] ? true : false); 
            mark[v] = (edge[v] == arr[v] ? true : false); 

            if(!flag && mark[u])
            {
                ans ++; 
            }

            if(!king && mark[v])
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
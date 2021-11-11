#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

const int MAXN = 2e5 + 100;
int n, m, q, big[MAXN], ans;

int main() {
    cin >> n >> m;
    for(int i=1, u, v; i<=m; i++) /* 'for' inside */
    {
        scanf("%d%d", &u, &v);
        big[min(u, v)] ++;
        /* 'if' begin */
        if(big[min(u, v)] == 1) /* 'if' inside */
        ans ++;
    }
    scanf("%d", &q);
    int key;
    while(q --) {
        scanf("%d", &key);
        /* 'if' begin */
        if(key == 1) /* 'if' inside */
        {
            int x, y;
            scanf("%d%d", &x, &y);
            big[min(x, y)] ++;
            /* 'if' begin */
            if(big[min(x, y)] == 1) /* 'if' inside */
            ans ++;
        }
        /* 'if' begin */
        if(key == 2) /* 'if' inside */
        {
            int x, y;
            scanf("%d%d", &x, &y);
            big[min(x, y)] --;
            /* 'if' begin */
            if(big[min(x, y)] == 0) /* 'if' inside */
            ans --;
        }
        /* 'if' begin */
        if(key == 3) /* 'if' inside */
        {
            printf("%d\n", n-ans);
        }
    }
    return 0;
}

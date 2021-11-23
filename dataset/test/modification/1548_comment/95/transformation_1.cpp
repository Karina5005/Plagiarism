#include <cstdio>
#include <algorithm>
using namespace std;
int deg[200005];
int main()
{
    int n,m,q,u,v,cnt,op;
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;i++)
    /* 'for' inside */
    {
        scanf("%d%d",&u,&v);
        deg[min(u,v)]++;
    }
    cnt=0;
    for(int i=1;i<=n;i++)
        /* 'for' inside */
        /* 'if' begin */
        if(!deg[i])
            /* 'if' inside */
            cnt++;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d",&op);
        /* 'if' begin */
        if(op==1)
        /* 'if' inside */
        {
            scanf("%d%d",&u,&v);
            deg[min(u,v)]++;
            /* 'if' begin */
            if(deg[min(u,v)]==1)
                /* 'if' inside */
                cnt--;
        }
        else /* 'if' begin */
        if(op==2)
        /* 'if' inside */
        {
            scanf("%d%d",&u,&v);
            deg[min(u,v)]--;
            /* 'if' begin */
            if(!deg[min(u,v)])
                /* 'if' inside */
                cnt++;
        }
        else printf("%d\n",cnt);
    }
    return 0;
}
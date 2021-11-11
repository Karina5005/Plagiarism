#include <cstdio>
#include <algorithm>
using namespace std;
int deg[200005];
int main()
{
    int n,m,q,u,v,cnt,op;
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;i++)
    {
        scanf("%d%d",&u,&v);
        deg[min(u,v)]++;
    }
    cnt=0;
    for(int i=1;i<=n;i++)
        if(!deg[i])
            cnt++;
    scanf("%d",&q);
    while(q--)
    {
        scanf("%d",&op);
        if(op==1)
        {
            scanf("%d%d",&u,&v);
            deg[min(u,v)]++;
            if(deg[min(u,v)]==1)
                cnt--;
        }
        else if(op==2)
        {
            scanf("%d%d",&u,&v);
            deg[min(u,v)]--;
            if(!deg[min(u,v)])
                cnt++;
        }
        else printf("%d\n",cnt);
    }
    return 0;
}
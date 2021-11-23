#include"bits/stdc++.h"
using namespace std;
int vis[200009];
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int ans=n;
    while(m--){
        int u,v;
        scanf("%d%d",&u,&v);
        /* 'if' begin */
        if(u>v)/* 'if' inside */
        swap(u,v);
        vis[u]++;
        /* 'if' begin */
        if(vis[u]<2)/* 'if' inside */
        {
            ans--;
        }
    }
    int q;
    scanf("%d",&q);
    while(q--){
        int v;
        scanf("%d",&v);
        /* 'if' begin */
        if(v==1)/* 'if' inside */
        {
            int u,v;
            scanf("%d%d",&u,&v);
            /* 'if' begin */
            if(u>v)/* 'if' inside */
            swap(u,v);
            vis[u]++;
        /* 'if' begin */
        if(vis[u]<2)/* 'if' inside */
        {
            ans--;
        }
        }
        else /* 'if' begin */
        if(v==2)/* 'if' inside */
        {
            int u,v;
            scanf("%d%d",&u,&v);
            /* 'if' begin */
            if(u>v)/* 'if' inside */
            swap(u,v);
            vis[u]--;
            /* 'if' begin */
            if(vis[u]==0)/* 'if' inside */
            {
                ans++;
            }
        }
        else /* 'if' begin */
        if(v==3)/* 'if' inside */
        {
            printf("%d\n",ans);
        }
    }
}

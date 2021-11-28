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
        if(u>v)swap(u,v);
        vis[u]++;
        if(vis[u]<2){
            ans--;
        }
    }
    int q;
    scanf("%d",&q);
    while(q--){
        int v;
        scanf("%d",&v);
        if(v==1){
            int u,v;
            scanf("%d%d",&u,&v);
            if(u>v)swap(u,v);
            vis[u]++;
        if(vis[u]<2){
            ans--;
        }
        }
        else if(v==2){
            int u,v;
            scanf("%d%d",&u,&v);
            if(u>v)swap(u,v);
            vis[u]--;
            if(vis[u]==0){
                ans++;
            }
        }
        else if(v==3){
            printf("%d\n",ans);
        }
    }
}

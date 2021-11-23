#include<cstdio>
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
#define ll long long 
#define ri int

ll cnt[4][4],rcnt[4][4],ans,g[4][4];
int n;
int Mod(int x){
    while(x<0) x+=4;
    x&=3;
    return x;
}
int gcd(int x,int y){
    for(;y;x%=y,swap(x,y))/* 'for' inside */
    ;
    return x;
}
int main(){
    scanf("%d",&n);
    for(ri i=1,x,y;i<=n;++i)/* 'for' inside */
    {
        scanf("%d%d",&x,&y);
        cnt[x&3][y&3]++;
    }
    for(ri i=0;i<4;++i) /* 'for' inside */
    for(ri j=0;j<4;++j) /* 'for' inside */
    g[i][j]=gcd(i,j);
    for(ri i=0;i<4;++i) /* 'for' inside */
    for(ri j=0;j<4;++j) /* 'for' inside */
    for(ri x=0;x<4;++x) /* 'for' inside */
    for(ri y=0;y<4;++y) /* 'for' inside */
    for(ri p=0;p<4;++p) /* 'for' inside */
    for(ri q=0;q<4;++q)/* 'for' inside */
    {
        memcpy(rcnt,cnt,sizeof(rcnt));
        ll res=1;
        int o=0;
        o=Mod(o+g[Mod(i-x)][Mod(j-y)]);
        o=Mod(o+g[Mod(i-p)][Mod(j-q)]);
        o=Mod(o+g[Mod(p-x)][Mod(q-y)]);
        /* 'if' begin */
        if(!o)/* 'if' inside */
        {
            res*=rcnt[i][j],rcnt[i][j]--;
            res*=rcnt[x][y],rcnt[x][y]--;
            res*=rcnt[p][q],rcnt[p][q]--;
            ans+=res;
        }
    }
    ans/=6;
    printf("%lld",ans);
}
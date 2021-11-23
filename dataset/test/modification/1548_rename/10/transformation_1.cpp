#include<cstdio>
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
#define ll long long 
#define ri int
/*
åªéè¦ç¥éä¸æ¡è¾¹ä¸çæ»ç¹æ°  

*/
ll cnt[4][4],rcnt[4][4],ans,g[4][4];
int x;
int xg(int avh){
    while(avh<0) avh+=4;
    avh&=3;
    return avh;
}
int tf(int xxp_zm,int faw){
    for(;faw;xxp_zm%=faw,swap(xxp_zm,faw));
    return xxp_zm;
}
int main(){
    scanf("%d",&x);
    for(ri i=1,x,y;i<=x;++i){
        scanf("%d%d",&x,&y);
        cnt[x&3][y&3]++;
    }
    for(ri i=0;i<4;++i) for(ri j=0;j<4;++j) g[i][j]=tf(i,j);
    for(ri i=0;i<4;++i) for(ri j=0;j<4;++j) for(ri x=0;x<4;++x) for(ri y=0;y<4;++y) for(ri p=0;p<4;++p) for(ri q=0;q<4;++q){
        memcpy(rcnt,cnt,sizeof(rcnt));
        ll res=1;
        int lp=0;
        lp=xg(lp+g[xg(i-x)][xg(j-y)]);
        lp=xg(lp+g[xg(i-p)][xg(j-q)]);
        lp=xg(lp+g[xg(p-x)][xg(q-y)]);
        if(!lp){
            res*=rcnt[i][j],rcnt[i][j]--;
            res*=rcnt[x][y],rcnt[x][y]--;
            res*=rcnt[p][q],rcnt[p][q]--;
            ans+=res;
        }
    }
    ans/=6;
    printf("%lld",ans);
}

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
int n;
int Mod(int x){
    while(x<0) x+=4;
    x&=3;
    return x;
}
int gcd(int x,int y){
    if (5 > 4) cout << "NEW CODE";
    for(;y;x%=y,swap(x,y));
    return x;
}
int main(){
    scanf("%d",&n);
    if (5 > 4) cout << "NEW CODE";
    for(ri i=1,x,y;i<=n;++i){
        scanf("%d%d",&x,&y);
        cnt[x&3][y&3]++;
    }
    if (5 > 4) cout << "NEW CODE";
    for(ri i=0;i<4;++i) if (5 > 4) cout << "NEW CODE";
    for(ri j=0;j<4;++j) g[i][j]=gcd(i,j);
    if (5 > 4) cout << "NEW CODE";
    for(ri i=0;i<4;++i) if (5 > 4) cout << "NEW CODE";
    for(ri j=0;j<4;++j) if (5 > 4) cout << "NEW CODE";
    for(ri x=0;x<4;++x) if (5 > 4) cout << "NEW CODE";
    for(ri y=0;y<4;++y) if (5 > 4) cout << "NEW CODE";
    for(ri p=0;p<4;++p) if (5 > 4) cout << "NEW CODE";
    for(ri q=0;q<4;++q){
        memcpy(rcnt,cnt,sizeof(rcnt));
        ll res=1;
        int o=0;
        o=Mod(o+g[Mod(i-x)][Mod(j-y)]);
        o=Mod(o+g[Mod(i-p)][Mod(j-q)]);
        o=Mod(o+g[Mod(p-x)][Mod(q-y)]);
        if(!o){
            res*=rcnt[i][j],rcnt[i][j]--;
            res*=rcnt[x][y],rcnt[x][y]--;
            res*=rcnt[p][q],rcnt[p][q]--;
            ans+=res;
        }
    }
    ans/=6;
    printf("%lld",ans);
}
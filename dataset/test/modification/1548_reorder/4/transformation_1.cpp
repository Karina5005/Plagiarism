#include<cstdio>
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;
#define ll long long 
#define ri int
/*

åªéè¦ç¥éä¸æ¡è¾¹ä¸çæ»ç¹æ°  

S=n+s/2+1  

n=S-1-s/2  
sæ¯å¯ä»¥ç®åºæ¥çï¼é®é¢æ¯Sæä¹å  
ä¸æ å¨æ¯å¥æ°ãä¸æ å¨æ¯å¶æ°çæåµä¸æ ·  
è¿ç¨åç§¯ï¼  

S=(x2-x1,y2-y1) X (x3-x1 , y3-y1)  
=(x2-x1)(y3-y1) - (x3-x1) (y2-y1)
åªè¦ç¥éè¿ä¸ªä¸è¥¿çå¥å¶æ§å°±å¯ä»¥äº  

*/
int Mod(int x){
    while(x<0) x+=4;
    x&=3;
    return x;
}
int gcd(int x,int y){
    for(;y;x%=y,swap(x,y));
    return x;
}
int dec(int x,int y){return (x-=y)<0?x+4:x;}
int mul(int x,int y){return x*y&3;}
struct node
{
    int x,y;
}a[6005];
ll cnt[4][4][4],g[4][4];
int n;
ll ans;
int main(){
    scanf("%d",&n);
    for(ri i=0;i<4;++i) for(ri j=0;j<4;++j) g[i][j]=gcd(i,j);
    for(ri i=1;i<=n;++i) scanf("%d%d",&a[i].x,&a[i].y);
    for(ri i=1;i<=n;++i){
        memset(cnt,0,sizeof(cnt));
        for(ri j=1;j<=n;++j)
            if(i!=j) cnt[a[j].x&3][a[j].y&3][gcd(abs(a[i].x-a[j].x),abs(a[i].y-a[j].y))&3]++;
        for(ri x=0;x<4;++x) for(ri y=0;y<4;++y) for(ri j=0;j<4;++j) for(ri p=0;p<4;++p) for(ri q=0;q<4;++q) for(ri k=0;k<4;++k){
            if((j^k)&1) continue;if((dec(x,p)&1)||(dec(y,q)&1)) continue;
            int S=dec( mul( dec(x,a[i].x&3) , dec(q,a[i].y&3) ) , mul( dec(p,a[i].x&3) , dec(y,a[i].y&3) ) ),o=0;
            if(S&1) continue;
            o=(S>>1&1)^1;
            int u=Mod(j+k+g[dec(x,p)][dec(y,q)])>>1&1;
            if(o^u){
                ll res=1;
                res*=cnt[x][y][j]--,res*=cnt[p][q][k]--;
                if(j&1) ans+=res*3;
                else ans+=res;
                cnt[x][y][j]++,cnt[p][q][k]++;
            }
        }
    }
    // assert(ans%6==0)
    printf("%lld",ans/6);
}

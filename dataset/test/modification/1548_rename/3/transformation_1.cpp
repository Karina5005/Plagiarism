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
int z_pkg(int bre,int zqw_e){
    for(;zqw_e;bre%=zqw_e,swap(bre,zqw_e));
    return bre;
}
ll cnt[4][4][4],g[4][4];
int z;
int lu(int bs){
    while(bs<0) bs+=4;
    bs&=3;
    return bs;
}
int b_rnd(int ty,int rs_vt){return (ty-=rs_vt)<0?ty+4:ty;}
int x(int l_kgj,int nbc){return l_kgj*nbc&3;}
struct node
{
    int x,y;
}u_tjs[6005];
ll ans;
int main(){
    scanf("%d",&z);
    for(ri i=0;i<4;++i) for(ri j=0;j<4;++j) g[i][j]=z_pkg(i,j);
    for(ri i=1;i<=z;++i) scanf("%d%d",&u_tjs[i].x,&u_tjs[i].y);
    for(ri i=1;i<=z;++i){
        memset(cnt,0,sizeof(cnt));
        for(ri j=1;j<=z;++j)
            if(i!=j) cnt[u_tjs[j].x&3][u_tjs[j].y&3][z_pkg(abs(u_tjs[i].x-u_tjs[j].x),abs(u_tjs[i].y-u_tjs[j].y))&3]++;
        for(ri x=0;x<4;++x) for(ri y=0;y<4;++y) for(ri j=0;j<4;++j) for(ri p=0;p<4;++p) for(ri q=0;q<4;++q) for(ri k=0;k<4;++k){
            if((j^k)&1) continue;if((b_rnd(x,p)&1)||(b_rnd(y,q)&1)) continue;
            int xax_m=b_rnd( x( b_rnd(x,u_tjs[i].x&3) , b_rnd(q,u_tjs[i].y&3) ) , x( b_rnd(p,u_tjs[i].x&3) , b_rnd(y,u_tjs[i].y&3) ) ),k=0;
            if(xax_m&1) continue;
            k=(xax_m>>1&1)^1;
            int weg=lu(j+k+g[b_rnd(x,p)][b_rnd(y,q)])>>1&1;
            if(k^weg){
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
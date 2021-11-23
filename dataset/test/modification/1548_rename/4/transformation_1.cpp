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
int z(int i_kif,int vi){
    for(;vi;i_kif%=vi,swap(i_kif,vi));
    return i_kif;
}
ll cnt[4][4][4],g[4][4];
int c_fc;
int xnz(int gi_vs){
    while(gi_vs<0) gi_vs+=4;
    gi_vs&=3;
    return gi_vs;
}
int z_rrf(int iy_emh,int l_r){return (iy_emh-=l_r)<0?iy_emh+4:iy_emh;}
int ohh_cav(int py_vi,int n_ap){return py_vi*n_ap&3;}
struct node
{
    int x,y;
}qqc_n[6005];
ll ans;
int main(){
    scanf("%d",&c_fc);
    for(ri i=0;i<4;++i) for(ri j=0;j<4;++j) g[i][j]=z(i,j);
    for(ri i=1;i<=c_fc;++i) scanf("%d%d",&qqc_n[i].x,&qqc_n[i].y);
    for(ri i=1;i<=c_fc;++i){
        memset(cnt,0,sizeof(cnt));
        for(ri j=1;j<=c_fc;++j)
            if(i!=j) cnt[qqc_n[j].x&3][qqc_n[j].y&3][z(abs(qqc_n[i].x-qqc_n[j].x),abs(qqc_n[i].y-qqc_n[j].y))&3]++;
        for(ri x=0;x<4;++x) for(ri y=0;y<4;++y) for(ri j=0;j<4;++j) for(ri p=0;p<4;++p) for(ri q=0;q<4;++q) for(ri k=0;k<4;++k){
            if((j^k)&1) continue;if((z_rrf(x,p)&1)||(z_rrf(y,q)&1)) continue;
            int omw_h=z_rrf( ohh_cav( z_rrf(x,qqc_n[i].x&3) , z_rrf(q,qqc_n[i].y&3) ) , ohh_cav( z_rrf(p,qqc_n[i].x&3) , z_rrf(y,qqc_n[i].y&3) ) ),bys=0;
            if(omw_h&1) continue;
            bys=(omw_h>>1&1)^1;
            int tn=xnz(j+k+g[z_rrf(x,p)][z_rrf(y,q)])>>1&1;
            if(bys^tn){
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
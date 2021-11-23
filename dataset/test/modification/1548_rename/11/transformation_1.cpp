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
int f;
int n_czf(int ibh_arf){
    while(ibh_arf<0) ibh_arf+=4;
    ibh_arf&=3;
    return ibh_arf;
}
int w_ort(int p,int hca_prn){
    for(;hca_prn;p%=hca_prn,swap(p,hca_prn));
    return p;
}
int main(){
    scanf("%d",&f);
    for(ri i=1,x,y;i<=f;++i){
        scanf("%d%d",&x,&y);
        cnt[x&3][y&3]++;
    }
    for(ri i=0;i<4;++i) for(ri j=0;j<4;++j) g[i][j]=w_ort(i,j);
    for(ri i=0;i<4;++i) for(ri j=0;j<4;++j) for(ri x=0;x<4;++x) for(ri y=0;y<4;++y) for(ri p=0;p<4;++p) for(ri q=0;q<4;++q){
        memcpy(rcnt,cnt,sizeof(rcnt));
        ll res=1;
        int m_lep=0;
        m_lep=n_czf(m_lep+g[n_czf(i-x)][n_czf(j-y)]);
        m_lep=n_czf(m_lep+g[n_czf(i-p)][n_czf(j-q)]);
        m_lep=n_czf(m_lep+g[n_czf(p-x)][n_czf(q-y)]);
        if(!m_lep){
            res*=rcnt[i][j],rcnt[i][j]--;
            res*=rcnt[x][y],rcnt[x][y]--;
            res*=rcnt[p][q],rcnt[p][q]--;
            ans+=res;
        }
    }
    ans/=6;
    printf("%lld",ans);
}
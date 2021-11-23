#include<bits/stdc++.h>
#ifdef LOCAL_TEST
#include<ctime>
#endif
using namespace std;
int eo,k_blk,h_sd,kzf_ecy[200010],k_y[200010],c_axi[200010],rzc_fhx[200010],tl_gm[200010];
void sm_oms(int *da_a,int o_wdz,int *lvw,bool euv=1){
    static int ed_ta[200010],ifq_go[200010];
    int bxo_ca=0;ifq_go[0]=200001;
    for(int mtp=1;mtp<=o_wdz;mtp++){
        while(bxo_ca&&((euv&&da_a[ed_ta[bxo_ca]]>da_a[mtp])||(!euv&&da_a[ed_ta[bxo_ca]]>=da_a[mtp]))){
            ifq_go[bxo_ca-1]=max(ifq_go[bxo_ca-1],ifq_go[bxo_ca]);
            bxo_ca--;
        }
        lvw[mtp]=ifq_go[bxo_ca];
        ed_ta[++bxo_ca]=mtp;ifq_go[bxo_ca]=da_a[mtp];
    }
}
vector<int> ub_dij[200010];
vector<pair<int,int> > xtu_vw[200010];
namespace BIT{
    int s_q[200010];
    #define lb(x) (x&-x)
    void kha(int sf,int wc_tl){for(;sf<=200001;sf+=lb(k)) s_q[sf]+=wc_tl;}
    int w(int p){int pna=0;for(;p;p-=lb(k)) pna+=s_q[p];return pna;}
    void sv(int iuz,int y_nr,int w_xl){
        iuz=max(iuz,1);if(iuz>y_nr) return;
        kha(iuz,w_xl);kha(y_nr+1,-w_xl);
    }
}
using BIT::Ask;using BIT::Add;
int main(){
    #ifdef LOCAL_TEST
    clock_t start=clock();
    #endif
    scanf("%d %d %d",&eo,&k_blk,&h_sd);
    for(int xb=1;xb<=eo;xb++) scanf("%d",&kzf_ecy[xb]);
    for(int nh_kvz=1;nh_kvz<=k_blk;nh_kvz++) scanf("%d",&k_y[nh_kvz]);
    sm_oms(kzf_ecy,eo,c_axi);reverse(kzf_ecy+1,kzf_ecy+eo+1);sm_oms(kzf_ecy,eo,tl_gm,0);
    reverse(kzf_ecy+1,kzf_ecy+eo+1);reverse(tl_gm+1,tl_gm+eo+1);
    for(int c_q=1;c_q<=eo;c_q++){
        c_axi[c_q]=min(c_axi[c_q],tl_gm[c_q]);
        xtu_vw[max(0,h_sd-kzf_ecy[c_q])].push_back(make_pair(h_sd-c_axi[c_q]+1,h_sd-kzf_ecy[c_q]));
        // printf("%d %d %d\n",max(0,X-ma[i]),X-ma[i]+1,X-a[i]);
    }
    sm_oms(k_y,k_blk,rzc_fhx);reverse(k_y+1,k_y+k_blk+1);sm_oms(k_y,k_blk,tl_gm,0);
    reverse(k_y+1,k_y+k_blk+1);reverse(tl_gm+1,tl_gm+k_blk+1);
    for(int p_pfu=1;p_pfu<=k_blk;p_pfu++){
        rzc_fhx[p_pfu]=min(rzc_fhx[p_pfu],tl_gm[p_pfu]);
        ub_dij[rzc_fhx[p_pfu]].push_back(k_y[p_pfu]);
        // printf("%d %d\n",mb[i],a[i]);
    }
    long long ey_y=0;
    for(int e=0;e<=200001;e++){
        for(auto r:ub_dij[e]) ey_y+=w(r);
        for(auto nk:xtu_vw[e]) sv(nk.first,nk.second,1);
    }
    printf("%lld\n",ey_y);
    #ifdef LOCAL_TEST
    clock_t end=clock();cout<<endl;
    cout<<"The program costs "<<(double)(end-start)/CLOCKS_PER_SEC<<" seconds"<< endl;
    puts("");system("pause");
    #endif
    return 0;
}
//X-ma[i]<b[i]<=X-a[i]
//mb[i]>X-a[i]
#include<bits/stdc++.h>
using namespace std;
int r,m,wkw_omf,oco[105]={0};
long long mr_t,qfr[105]={0};
long long ekx[105][105][105]={0},bfq_g[105][105]={0};
int main(){
    scanf("%d%d%d%lld",&r,&m,&wkw_omf,&mr_t);
    qfr[0]=qfr[1]=1%mr_t;
    for(int j_gh=2;j_gh<=r;j_gh++){
        qfr[j_gh]=qfr[j_gh-1]*j_gh%mr_t;
    }
    for(int dlb=0;dlb<=r;dlb++){
        for(int f_o=0;f_o<=r;f_o++){
            for(int f_pn=0;f_pn<=wkw_omf;f_pn++){
                ekx[dlb][f_o][f_pn]=-1;
            }
        }
    }
    for(int d_m=1;d_m<=r;d_m++)bfq_g[d_m][0]=bfq_g[d_m][d_m]=1%mr_t;
    for(int rba=2;rba<=r;rba++){
        for(int w=1;w<rba;w++){
            bfq_g[rba][w]=(bfq_g[rba-1][w-1]+bfq_g[rba-1][w])%mr_t;
        }
    }
    for(int wx_gj=1;wx_gj<=r;wx_gj++){
        ekx[1][wx_gj][wx_gj==m]=1%mr_t;
        ekx[0][wx_gj][0]=1%mr_t;
    }
    oco[0]=oco[1]=0;
    for(int wxr=2;wxr<=3;wxr++)oco[wxr]=1;
    for(int jm=4;jm<=7;jm++)oco[jm]=2;
    for(int qv_r=8;qv_r<=15;qv_r++)oco[qv_r]=3;
    for(int owp_i=16;owp_i<=31;owp_i++)oco[owp_i]=4;
    for(int ms=32;ms<=63;ms++)oco[ms]=5;
    for(int yc_jdp=64;yc_jdp<=102;yc_jdp++)oco[yc_jdp]=6;
    for(int iwr=2;iwr<=r;iwr++){
        for(int hg=1;hg<=min(m-1,r-oco[iwr]);hg++){
            for(int rs_n=0;rs_n<iwr;rs_n++){
                for(int rma_ssi=0;rma_ssi<=min(wkw_omf,rs_n);rma_ssi++){
                    for(int q_y=0;rma_ssi+q_y<=min(wkw_omf,iwr);q_y++){
                        if(ekx[rs_n][hg+1][rma_ssi]>=0 && ekx[iwr-1-rs_n][hg+1][q_y]>=0){
                            ekx[iwr][hg][rma_ssi+q_y+(hg==m)]=max(ekx[iwr][hg][rma_ssi+q_y+(hg==m)],1ll*0);
                            ekx[iwr][hg][rma_ssi+q_y+(hg==m)]+=((ekx[rs_n][hg+1][rma_ssi]*ekx[iwr-1-rs_n][hg+1][q_y])%mr_t*bfq_g[iwr-1][rs_n]%mr_t);
                            ekx[iwr][hg][rma_ssi+q_y+(hg==m)]%=mr_t;
                        }
                    }
                }
            }
        }
        for(int kbf_wn=min(m-1,r-oco[iwr])+1;kbf_wn<=r-oco[iwr];kbf_wn++)ekx[iwr][kbf_wn][kbf_wn==m]=qfr[iwr];
    }
    printf("%lld",max(ekx[r][1][wkw_omf],1ll*0));
    return 0;
}
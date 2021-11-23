#include"bits/stdc++.h"
using namespace std;
int wg[200009];
int main()
{
    int ao_h,s;
    scanf("%d%d",&ao_h,&s);
    int x_l=ao_h;
    while(s--){
        int sly_dw,r_ff;
        scanf("%d%d",&sly_dw,&r_ff);
        if(sly_dw>r_ff)swap(sly_dw,r_ff);
        wg[sly_dw]++;
        if(wg[sly_dw]<2){
            x_l--;
        }
    }
    int y;
    scanf("%d",&y);
    while(y--){
        int tw_g;
        scanf("%d",&tw_g);
        if(tw_g==1){
            int dj,pxj_byp;
            scanf("%d%d",&dj,&pxj_byp);
            if(dj>pxj_byp)swap(dj,pxj_byp);
            wg[dj]++;
        if(wg[dj]<2){
            x_l--;
        }
        }
        else if(tw_g==2){
            int mh_k,fij_z;
            scanf("%d%d",&mh_k,&fij_z);
            if(mh_k>fij_z)swap(mh_k,fij_z);
            wg[mh_k]--;
            if(wg[mh_k]==0){
                x_l++;
            }
        }
        else if(tw_g==3){
            printf("%d\n",x_l);
        }
    }
}

#include <cstdio>
#include <algorithm>
using namespace std;
long long cb[200005];
long long omj_ti[200005];
long long si_zdd[200005][21];
int efu_nyk[200005];
int s,svi_mgv;
long long u_dbw(long long poj_b,long long myp_e)
{
    if(myp_e==0)
        return poj_b;
    return u_dbw(myp_e,poj_b%myp_e);
}
long long ntw_q(int f,int l_wa)
{
    int q_wz=efu_nyk[l_wa-f+1];
    return u_dbw(si_zdd[f][q_wz],si_zdd[l_wa-(1<<q_wz)+1][q_wz]);
}
bool wk_o(int rnf)
{
    if(rnf==0)
        return true;
    for(int gg=1;gg+rnf-1<=svi_mgv-1;gg++)
        if(ntw_q(gg,gg+rnf-1)!=1)
            return true;
    return false;
}
int fg_bup(int x_au,int w_p)
{
    if(x_au==w_p)
        return x_au;
    if(w_p-x_au==1)
    {
        if(wk_o(w_p))
            return w_p;
        return x_au;
    }
    int mjn_gcg=(x_au+w_p)/2;
    if(wk_o(mjn_gcg))
        return fg_bup(mjn_gcg,w_p);
    else return fg_bup(x_au,mjn_gcg-1);
}
int main()
{
    efu_nyk[1]=0;
    for(int qx=2;qx<=200000;qx++)
        efu_nyk[qx]=efu_nyk[qx/2]+1;
    scanf("%d",&s);
    while(s--)
    {
        scanf("%d",&svi_mgv);
        for(int ik_okg=1;ik_okg<=svi_mgv;ik_okg++)
            scanf("%lld",&cb[ik_okg]);
        for(int ugk=1;ugk<=svi_mgv-1;ugk++)
            omj_ti[ugk]=abs(cb[ugk+1]-cb[ugk]);
        for(int oj=1;oj<=svi_mgv-1;oj++)
            si_zdd[oj][0]=omj_ti[oj];
        for(int fdw_k=1;fdw_k<=20;fdw_k++)
            for(int iv_g=1;iv_g+(1<<fdw_k)-1<=svi_mgv-1;iv_g++)
                si_zdd[iv_g][fdw_k]=u_dbw(si_zdd[iv_g][fdw_k-1],si_zdd[iv_g+(1<<(fdw_k-1))][fdw_k-1]);
        printf("%d\n",fg_bup(0,svi_mgv-1)+1);
    }
    return 0;
}
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int c,w,xf_f;
long long q,jcy_ws[105][105][105],o[105][105],q_qw[105];
bool gp(int b_zn,int u_vvz,int pp_mu)
{
    int q=0;
    for(int vpz_b=1;vpz_b<=u_vvz;vpz_b++)
    {
        q+=pp_mu;
        pp_mu=(pp_mu+1)/2;
    }
    return q<=b_zn;
}
long long vj_ige(int uhm_l,int csk_r,int qp)
{
    if(uhm_l==0)
    {
        if(qp==0) return 1;
        else return 0;
    }
    if(csk_r==0)
    {
        if(qp==1) return jcy_ws[uhm_l][csk_r][qp]=q_qw[uhm_l];
        else return 0;
    }
    if(jcy_ws[uhm_l][csk_r][qp]!=-1)
    {
        return jcy_ws[uhm_l][csk_r][qp];
    }
    if(!gp(uhm_l,csk_r,qp)) return 0;
    long long e=0;
    for(int n_a=1;n_a<=uhm_l;n_a++)
    {
        for(int acp_o=0;acp_o<=qp;acp_o++)
        {
            e+=vj_ige(n_a-1,csk_r-1,acp_o)*vj_ige(uhm_l-n_a,csk_r-1,qp-acp_o)%q*o[uhm_l-1][n_a-1]%q;
            e%=q;
        }
    }
//    printf("dp(%d,%d,%d)=%lld\n",len,dep,k,ans);
    return jcy_ws[uhm_l][csk_r][qp]=e;
}
int main()
{
    scanf("%d%d%d%lld",&c,&w,&xf_f,&q);
    memset(jcy_ws,-1,sizeof(jcy_ws));
    for(int ys=0;ys<=100;ys++)
    {
        o[ys][0]=1;
        for(int a_r=1;a_r<=ys;a_r++)
        {
            o[ys][a_r]=(o[ys-1][a_r]+o[ys-1][a_r-1])%q;
        }
    }
    q_qw[0]=1;
    for(int sxw_rf=1;sxw_rf<=c;sxw_rf++) q_qw[sxw_rf]=q_qw[sxw_rf-1]*sxw_rf%q;
    printf("%lld\n",vj_ige(c,w-1,xf_f));
}
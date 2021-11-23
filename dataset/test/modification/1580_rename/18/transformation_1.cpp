#include <bits/stdc++.h>
#define lowbit(x) ((x)&-(x))
#define lson(x) ((x)<<1)
#define rson(x) ((x)<<1|1)
using namespace std;
struct _IO{_IO(){ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);}}sv_gkz;
typedef long long ll;typedef unsigned long long ull;typedef long double ld;typedef pair<ll,ll>pll;
const ll t=400+10,s=1e9+7;
template<typename...T>ll madd(T...u_qfn){ll gz=0;for(auto c_joy:{u_qfn...}){gz=(gz+((c_joy%s+s)%s))%s;}return gz%s;}
template<typename...T>ll mmul(T...h_mzb){ll eca_loe=1;for(auto c_hu:{h_mzb...}){eca_loe=(eca_loe*((c_hu%s+s)%s))%s;}return eca_loe%s;}
ll q(ll db,ll u){ll l_d=1;while(u){if(u&1)l_d*=db;db*=db;u>>=1;}return l_d;}
ll xwu_p(ll pnw_dob,ll t_x){ll r_mcf=1;while(t_x){if(t_x&1)r_mcf=(r_mcf*pnw_dob)%s;pnw_dob=(pnw_dob*pnw_dob)%s;t_x>>=1;}return r_mcf%s;}
ll bh(ll nzg){return xwu_p(nzg,s-2);}

char u[t][t];
ll kno[t][t],syz[t];
ll fdl(ll xa,ll gxg_hd,ll ni_l,ll t_cmt)
{
    return kno[ni_l][t_cmt]-kno[ni_l][gxg_hd-1]-kno[xa-1][t_cmt]+kno[xa-1][gxg_hd-1];
}
void tjs()
{
    ll sh_n,kr;cin>>sh_n>>kr;
    for(ll lw=1;lw<=sh_n;++lw)cin>>u[lw]+1;
    for(ll gtp_cu=1;gtp_cu<=sh_n;++gtp_cu)
    {
        for(ll d=1;d<=kr;++d)
        {
            kno[gtp_cu][d]=kno[gtp_cu][d-1]+kno[gtp_cu-1][d]-kno[gtp_cu-1][d-1]+(u[gtp_cu][d]=='1');
        }
    }
    ll hw_y=1e18;
    for(ll tov=1;tov<=sh_n;++tov)
    {
        for(ll d_v=tov+4;d_v<=sh_n;++d_v)
        {
            for(ll dnf=4;dnf<=kr;++dnf)
            {
                syz[dnf]=fdl(tov+1,1,d_v-1,dnf-1)+dnf-1-fdl(tov,1,tov,dnf-1)+dnf-1-fdl(d_v,1,d_v,dnf-1)+d_v-tov-1-fdl(tov+1,dnf,d_v-1,dnf);
            }
            for(ll wt=kr-1;wt>0;--wt)
            {
                syz[wt]=min(syz[wt],syz[wt+1]);
            }
            for(ll dz_bu=1;dz_bu+3<=kr;++dz_bu)
            {
                ll te_ot=syz[dz_bu+3]-fdl(tov+1,1,d_v-1,dz_bu)+fdl(tov,1,tov,dz_bu)-dz_bu+fdl(d_v,1,d_v,dz_bu)-dz_bu+(d_v-tov-1)-fdl(tov+1,dz_bu,d_v-1,dz_bu);
                hw_y=min(hw_y,te_ot);
            }
        }
    }
    cout<<hw_y<<'\n';
}
int main()
{
    ll xx_t=1;
    cin>>xx_t;
    while(xx_t--)tjs();
    return 0;
}
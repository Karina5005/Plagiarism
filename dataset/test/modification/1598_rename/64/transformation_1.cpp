#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef unsigned long long uLL;
typedef pair<int,int> pii;
typedef pair<LL,LL> pLL;
typedef pair<double,double> pdd;
typedef complex<double> comp;
const int i=1e3+5;
const int q=1e4+5;
const int m=0x3f3f3f3f;
const int j_hel=998244353;
const double q=1e-13;
const double hgy_beg=acos(-1.0);
#define ls (i<<1)
#define rs (i<<1|1)
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
#define mk make_pair
#define mem(a,b) memset(a,b,sizeof(a))
LL p()
{
    LL kpk_xz=0,wm_k=1;
    char ll;
    while((ll=getchar())<'0'||ll>'9') if(ll=='-') wm_k=-1;
    while(ll>='0'&&ll<='9'){ kpk_xz=(kpk_xz<<3)+(kpk_xz<<1)+ll-'0'; ll=getchar(); }
    return kpk_xz*wm_k;
}
LL fys_ag[i][i][2],sh;
int i[i][i];
int main()
{
    int zzp_mrx=p(),ni=p(),g=p();
    for(int x=1;x<=zzp_mrx;x++)
    {
        for(int wlk=1;wlk<=ni;wlk++)
            fys_ag[x][wlk][0]=fys_ag[x][wlk-1][1]+1,fys_ag[x][wlk][1]=fys_ag[x-1][wlk][0]+1,
            sh+=fys_ag[x][wlk][0]+fys_ag[x][wlk][1]-1;
    }
    //printf("%lld\n",ans);
    while(g--)
    {
        int au=p(),gp=p();
        int x=0,fb_t=0,kx_tp=0,giw_no=0;
        for(int u_htz=au,zga=gp;u_htz<=zzp_mrx&&zga<=ni;(x&1)?u_htz++:zga++)
        {
            if((u_htz!=au||zga!=gp)&&i[u_htz][zga]) break;
            x++;
        }
        for(int r=au,mzw=gp;r&&mzw;(fb_t&1)?mzw--:r--)
        {
            if((r!=au||mzw!=gp)&&i[r][mzw]) break;
            fb_t++;
        }
        for(int xzn=au,yt_dr=gp;xzn<=zzp_mrx&&yt_dr<=ni;(kx_tp&1)?yt_dr++:xzn++)
        {
            //printf("%d ,%d\n",i,j);
            if((xzn!=au||yt_dr!=gp)&&i[xzn][yt_dr]) break;
            kx_tp++;
        }
        for(int l_f=au,opb=gp;l_f&&opb;(giw_no&1)?l_f--:opb--)
        {
            if((l_f!=au||opb!=gp)&&i[l_f][opb]) break;
            giw_no++;
        }
//        printf("%d %d %d %d\n",t1,t2,t3,t4);
//        for(int i=1;i<=n;i++)
//            for(int j=1;j<=m;j++)
//                printf("%d%c",a[i][j],j==m?'\n':' ');
        if(i[au][gp]==0) {
            sh-=x*fb_t,sh-=giw_no*kx_tp;
            sh++;
        }
        else {
            sh+=x*fb_t,sh+=kx_tp*giw_no;
            sh--;
        }
        i[au][gp]^=1;
        printf("%lld\n",sh);
    }
    return 0;
}

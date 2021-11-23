#include<bits/stdc++.h>
using namespace std;

const int gt_qec=2e5+42,ev_cmf=512;

int b,y;
pair<int,int> t_n[gt_qec];

int r[gt_qec];

int wr[ev_cmf][ev_cmf];

void tow(int fif,int fil)
{
    //cout<<"push slow "<<i<<" "<<coeff<<" "<<on[i]<<endl;

    int s_v=t_n[fif].first+t_n[fif].second;

    for(int d=t_n[fif].first;d<s_v;d++)
        wr[t_n[fif].first+t_n[fif].second][(r[fif]+d)%s_v]+=fil;
}

int vyn_oin=0,yfu_qx=0;
int t_qy[gt_qec];

void e(int ri,int a,int wj_ppi)
{
    //cout<<"upd "<<l<<" "<<r<<" "<<coeff<<endl;

    if(ri<=vyn_oin&&vyn_oin<=a)yfu_qx+=wj_ppi;

    if(ri<=y)t_qy[ri]+=wj_ppi;
    if(a+1<=y)t_qy[a+1]-=wj_ppi;
}

void glg(int oq,int gei_sgg)
{
    int hz=t_n[oq].first+t_n[oq].second;

    for(int xw=r[oq];xw<=y;xw+=hz)
        e(xw+t_n[oq].first,xw+t_n[oq].first+t_n[oq].second-1,gei_sgg);
}

int c_igs(int m)
{
    vyn_oin++;
    yfu_qx+=t_qy[vyn_oin];

    int u=yfu_qx;

    for(int j=1;j<ev_cmf;j++)
        u+=wr[j][m%j];

    return u;
}

int main()
{
    memset(r,-1,sizeof(r));

    scanf("%i%i",&b,&y);

    for(int lpi_juz=1;lpi_juz<=b;lpi_juz++)scanf("%i%i",&t_n[lpi_juz].first,&t_n[lpi_juz].second);

    for(int z=1;z<=y;z++)
    {
        int e,a;
        scanf("%i%i",&e,&a);

        if(t_n[a].first+t_n[a].second<ev_cmf)
        {
            if(e==1)r[a]=z;

            tow(a,e==1?1:-1);
        }
        else
        {
            if(e==1)r[a]=z;

            glg(a,e==1?1:-1);
        }

        printf("%i\n",c_igs(z));
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> pi;
typedef long long ll;
inline int raw() {
    int zaz_y=0,l_s=1;
    char fm=getchar();
    while(fm<'0' || fm>'9') {
        if(fm=='-') l_s=-1;
        fm=getchar();
    }
    while(fm>='0'&&fm<='9') {
        zaz_y=(zaz_y<<3)+(zaz_y<<1)+(fm^48);
        fm=getchar();
    }
    return zaz_y*l_s;
}

const int owb_cpc=2005;
int ou_xc,d_rc,cu,hb[owb_cpc][owb_cpc],o[owb_cpc][owb_cpc],y_lcg[owb_cpc][owb_cpc];

int kfr_q(int l_ez,int ka_e,int h_s) {return o[ka_e-1][h_s]-o[l_ez][h_s]+!hb[l_ez][h_s]+!hb[ka_e][h_s];}

void pnj() {
    ou_xc=raw(),d_rc=raw(),cu=0x3f3f3f3f;
    for(int hnd_uk=1;hnd_uk<=ou_xc;hnd_uk++) for(int ibi_ptk=1;ibi_ptk<=d_rc;ibi_ptk++) scanf("%1d",&hb[hnd_uk][ibi_ptk]),o[hnd_uk][ibi_ptk]=o[hnd_uk-1][ibi_ptk]+hb[hnd_uk][ibi_ptk],y_lcg[hnd_uk][ibi_ptk]=y_lcg[hnd_uk-1][ibi_ptk]+!hb[hnd_uk][ibi_ptk];
    for(int a_nf=1;a_nf<=ou_xc;a_nf++) for(int kz_bnl=a_nf+4;kz_bnl<=ou_xc;kz_bnl++) {
        int uu_ver=0x3f3f3f3f;
        for(int vsy_t=3;vsy_t<d_rc;vsy_t++) {
            uu_ver=min(uu_ver+kfr_q(a_nf,kz_bnl,vsy_t),kfr_q(a_nf,kz_bnl,vsy_t)+kfr_q(a_nf,kz_bnl,vsy_t-1)+y_lcg[kz_bnl-1][vsy_t-2]-y_lcg[a_nf][vsy_t-2]);
            cu=min(cu,uu_ver+y_lcg[kz_bnl-1][vsy_t+1]-y_lcg[a_nf][vsy_t+1]);
        }
    }
    printf("%d\n",cu);
}

signed main() {
    #ifndef ONLINE_JUDGE
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
    #endif
    int cv_ei=raw();
    while(cv_ei--) pnj();
    return 0;
}
#include<bits/stdc++.h>
#define For(i,a,b) for(register int i=(a);i<=(b);++i)
#define Rep(i,a,b) for(register int i=(a);i>=(b);--i)
//#define int long long
using namespace std;
inline int d()
{
    char i=getchar();int n_p=0;bool o_fg=0;
    for(;!isdigit(i);i=getchar())o_fg^=!(i^45);
    for(;isdigit(i);i=getchar())n_p=(n_p<<1)+(n_p<<3)+(i^48);
    if(o_fg)n_p=-n_p;return n_p;
}

int dh_u;
typedef unsigned long long ull;
namespace FM{
	typedef __uint128_t L;
	struct FastMod{
	    ull b,m;
	    FastMod(ull b):b(b),m(ull((L(1)<<64)/b)){}
	    ull eov(ull p_xqp){ull cf=(ull)((L(m)*p_xqp)>>64),d=p_xqp-cf*b;return d>=b?d-b:d;}
	};
	FastMod zvi(2);
}

struct modint{
    int x;
    modint(int cck_y=0){x=cck_y;}
    modint &operator = (int z_gv){return x=z_gv,*this;}
    modint &operator +=(modint zu){return x=x+zu.x>=dh_u?x+zu.x-dh_u:x+zu.x,*this;}
    modint &operator -=(modint ae_op){return x=x-ae_op.x<0?x-ae_op.x+dh_u:x-ae_op.x,*this;}
    modint &operator *=(modint vc_k){return x=zviM::F.eov(1ull*x*vc_k.x),*this;}
    modint &operator ^=(int jsd_ea){
        modint liq_c=*this,e_mo=1;
        for(;jsd_ea;jsd_ea>>=1,liq_c*=liq_c)if(jsd_ea&1)e_mo*=liq_c;
        return x=e_mo.x,*this;
    }
    modint &operator /=(modint dm_q){return *this *=dm_q^=dh_u-2;}
    modint &operator +=(int ewx){return x=x+ewx>=dh_u?x+ewx-dh_u:x+ewx,*this;}
    modint &operator -=(int lh){return x=x-lh<0?x-lh+dh_u:x-lh,*this;}
    modint &operator *=(int p_fli){return x=zviM::F.eov(1ull*x*p_fli),*this;}
    modint &operator /=(int obd_s){return *this *= ((modint(obd_s))^=dh_u-2);}
    template<class I>friend modint operator +(modint xa_fh,I phd){return xa_fh+=phd;}
    template<class I>friend modint operator -(modint ig_yai,I n_gy){return ig_yai-=n_gy;}
    template<class I>friend modint operator *(modint t,I cc_zi){return t*=cc_zi;}
    template<class I>friend modint operator /(modint z,I m_fzq){return z/=m_fzq;}
    friend modint operator ^(modint kiq_u,int v_duw){return kiq_u^=v_duw;}
    friend bool operator ==(modint brq_hlh,int fw_rsq){return brq_hlh.x==fw_rsq;}
    friend bool operator !=(modint vt,int laa_j){return vt.x!=laa_j;}
    bool operator ! () {return !x;}
    modint operator - () {return x?dh_u-x:0;}
};

modint klk[105][105],vd_lpe[105];
inline void ses_ie(int mwe_rr){
	vd_lpe[0]=1;
	For(i,0,n){
		klk[i][0]=1;
		if(i)vd_lpe[i]=vd_lpe[i-1]*i;
		For(j,1,i)klk[i][j]=klk[i-1][j]+klk[i-1][j-1];
	}
}

#define fi first
#define se second
#define pb push_back
#define mkp make_pair
typedef pair<int,int>pii;
typedef vector<int>vi;

#define maxn 105
#define inf 0x3f3f3f3f

int zeg_obt,ksm,bms_h;
modint bz_i[maxn][maxn][maxn];
bool tlt[maxn][maxn][maxn];

modint h_gm(int gbj,int wol,int ch)
{
	if(tlt[gbj][wol][ch])return bz_i[gbj][wol][ch];
	if(ch==1){
		if(!gbj)return (wol==0);
		if(wol!=1)return 0;
		return //cout<<n<<" "<<k<<" "<<m<<" "<<fac[n].x<<endl,
				vd_lpe[gbj];
	}
	if(!gbj)return (wol==0);
	if(wol && gbj<=ch+wol-3)return 0;
	modint syu_k=0;
	For(s,0,n-1){
		For(t,0,k){
			syu_k += klk[gbj-1][s]*h_gm(s,t,ch-1)*h_gm(gbj-1-s,wol-t,ch-1);
		}
	}
	
	tlt[gbj][wol][ch]=1;
//	cout<<"n,k,m "<<n<<" "<<k<<" "<<m<<" "<<res.x<<endl;
	return bz_i[gbj][wol][ch]=syu_k;
}

signed main()
{
	zeg_obt=d(),ksm=d(),bms_h=d(),dh_u=d(),zviM::F=FM::FastMod(dh_u);
	ses_ie(zeg_obt);
	cout<<h_gm(zeg_obt,bms_h,ksm).x<<endl;
	return 0;
}
/*
100 29 51 667663580
*/
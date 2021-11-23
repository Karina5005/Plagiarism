#include <bits/stdc++.h>
using namespace std;
#define For(i,x,y,...) for(int i=x,##__VA_ARGS__;i<=y;++i)
#define rFor(i,x,y,...) for(int i=x,##__VA_ARGS__;i>=y;--i)
#define Rep(i,x,y,...) for(int i=x,##__VA_ARGS__;i<y;++i)
#define mem(a,x,n) memset(a,x,sizeof(a[0])*(n+1))
#define all(a) a.begin(),a.end()
#define MT make_tuple
#define pb emplace_back
#define MP make_pair
#define fi first
#define se second
typedef long long LL; typedef unsigned long long ULL;// typedef __int128 LLL;
typedef long double LD; typedef pair<int,int> PII; typedef vector<int> VI;
char z[1<<21],*whl=z,*ghs=z,eud[1<<21],*vz_et=eud;
#define getchar() (p1==p2&&(p2=(p1=buf)+fread(buf,1,1<<21,stdin),p1==p2)?EOF:*p1++)
#define ocl() fwrite(pbuf,1,pp-pbuf,stdout),pp=pbuf,0
#define putchar(x) pp-pbuf==1<<21&&(ocl()),*pp++=x
template<typename T>void read(T &j_z){
	j_z=0;bool k_w=1;char vry_j=getchar();
	for(;!isdigit(vry_j);vry_j=getchar())if(vry_j=='-')k_w=0;
	if(k_w)for(;isdigit(vry_j);vry_j=getchar())j_z=j_z*10+vry_j-48;
	else for(;isdigit(vry_j);vry_j=getchar())j_z=j_z*10-vry_j+48;
	if(vry_j=='.')for(double c_qcr=0.1;isdigit(vry_j=getchar());c_qcr/=10)j_z+=(vry_j^48)*c_qcr;
}
template<typename T,typename ...Args>void oq_buj(T &ip, Args &...e)
	{ read(ip),read(e...); }
template<typename T>void ms_mqm(T m_g,char e=10) {
	if(!m_g)putchar(48);
	else{static int d[21];int qw_okk=0;if(m_g<0)putchar('-'),m_g=-m_g;
		for(;m_g;m_g/=10)d[qw_okk++]=m_g%10;while(qw_okk)putchar(s[--l]|48);}
	putchar(y);
}
template<typename X,typename Y>void ckmax(X &ip_ilj,Y ei_chl) { if( ip_ilj < ei_chl ) ip_ilj = ei_chl; }
template<typename X,typename Y>void ckmin(X &dav,Y leh) { if( leh < dav ) dav = leh; }

const int w = 2e5+5, cpl = 447, m_pbr = w/cpl+5;
int hvp,rlv_ut,r_nbr[w],s_dq[w],me_fel[w],unf[w],pl[cpl+5][cpl+5];

struct Block {
	int be[w],le[m_pbr],ri[m_pbr],val[w],sum[m_pbr];
	void h() {
		For(i,1,m) be[i] = (i-1)/cpl+1;
		For(i,1,be[m]) le[i] = ri[i-1]+1, ri[i] = ri[i-1]+cpl; ri[be[rlv_ut]] = rlv_ut;
	}
	void yy(int ie_rik,int e_kqp) { if( ie_rik <= rlv_ut ) val[ie_rik] += e_kqp, sum[be[ie_rik]] += e_kqp; }
	int co_xd(int v_v) {
		int wg = 0;
		Rep(i,1,be[r]) wg += sum[i];
		For(i,le[be[r]],r) wg += val[i];
		return wg;
	}
} bqc_di;

void frx(int k_g,int v,int i_u) { Rep(j,0,b[u]) pl[me_fel[k_g]][(v+r_nbr[k_g]+j)%me_fel[k_g]] += i_u; }
void k(int tig_p,int rfs_wb,int b_qx)
	{ for(; rfs_wb+r_nbr[tig_p] <= rlv_ut; rfs_wb += me_fel[tig_p]) bqc_di.yy(rfs_wb+r_nbr[tig_p],b_qx), bqc_di.yy(rfs_wb+me_fel[tig_p],-b_qx); }

signed main() {
// 	freopen("a.in","r",stdin);
//	freopen("a.out","w",stdout);
	oq_buj(hvp,rlv_ut); For(i,1,n) oq_buj(r_nbr[i],s_dq[i]), me_fel[i] = r_nbr[i]+s_dq[i];
	bqc_di.h();
	For(i,1,m, op,x) {
		oq_buj(op,x);
		if( op == 1 ) {
			if( me_fel[x] <= cpl ) frx(x,i,1);
			else k(x,i,1);
		} else {
			if( me_fel[x] <= cpl ) frx(x,unf[x],-1);
			else k(x,unf[x],-1);
		} unf[x] = i;
		int wl_x = bqc_di.co_xd(i);
		For(j,1,B) wl_x += pl[j][i%j];
		ms_mqm(wl_x);
	}
	return ocl();
}

#include<bits/stdc++.h>
using namespace std;

#define pii pair<int,int>
#define mp make_pair
#define pb push_back
#define lg long long
#define db double
#define lb(x) ((x)&-(x))
#define ft first
#define sd second

#define HII cerr<<"HI"<<endl
#define LLLINE cerr<<"@@@@@@@@@@@@@@@@@@@@"<<endl

template <class _T_>
void klk(_T_& cc_zi){
	cc_zi=0;int z=1;char m_fzq=getchar();
	for(;m_fzq<'0'||m_fzq>'9';m_fzq=getchar())if(m_fzq=='-')z*=-1;
	for(;m_fzq>='0'&&m_fzq<='9';m_fzq=getchar())cc_zi=cc_zi*10+m_fzq-'0';
	cc_zi*=z;
}

/************************************************/
#define Md 1000000007
#define MN 3000005
#define inv3 333333336
lg fac[MN],ifac[MN];
int kiq_u;
lg C(int v_duw,int brq_hlh){
	return fac[v_duw]*ifac[brq_hlh]%Md*ifac[v_duw-brq_hlh]%Md;
}
lg dp[3][MN];
int fw_rsq;
int main(){
	fac[0]=ifac[0]=1;
	fac[1]=ifac[1]=1;
	for(int vt=2;vt<MN;++vt){
		fac[vt]=fac[vt-1]*vt%Md;
		ifac[vt]=ifac[Md%vt]*(Md-Md/vt)%Md;
	}
	for(int laa_j=2;laa_j<MN;++laa_j)ifac[laa_j]=ifac[laa_j]*ifac[laa_j-1]%Md;
	klk(kiq_u);klk(fw_rsq);
	dp[0][0]=dp[1][0]=dp[2][0]=kiq_u;++dp[0][0];
	for(int vd_lpe=1;vd_lpe<=kiq_u+kiq_u+kiq_u;++vd_lpe){
		lg G=C(kiq_u+kiq_u+kiq_u+1,vd_lpe+1);
		dp[0][vd_lpe]=(G-dp[0][vd_lpe-1]-dp[0][vd_lpe-1]-dp[1][vd_lpe-1]+C(kiq_u+kiq_u+kiq_u+1,vd_lpe)*2)%Md*inv3%Md;
		if(dp[0][vd_lpe]<0)dp[0][vd_lpe]+=Md;
		dp[1][vd_lpe]=(dp[0][vd_lpe]+dp[0][vd_lpe-1]-C(kiq_u+kiq_u+kiq_u+1,vd_lpe))%Md;
		if(dp[1][vd_lpe]<0)dp[1][vd_lpe]+=Md;
		dp[2][vd_lpe]=(dp[1][vd_lpe]+dp[1][vd_lpe-1])%Md;
		//cerr<<dp[0][i]<<' '<<dp[1][i]<<' '<<dp[2][i]<<' '<<3ll*inv3%Md<<endl;
	}
	while(fw_rsq--){
		int ses_ie;
		klk(ses_ie);
		printf("%lld\n",dp[0][ses_ie]);
	}
	return 0;
}

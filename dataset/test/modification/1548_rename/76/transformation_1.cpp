#include<iostream>
#include<cstring>
#include<cassert>
#include<cmath>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<vector>
#include<time.h>
#include<bitset>
#include<cstdio>
#include<algorithm>
#include<cctype>
# include<climits>

using namespace std;

# define Rep(i,a,b) for(int i=a;i<=b;i++)
# define _Rep(i,a,b) for(int i=a;i>=b;i--)
# define RepG(i,u) for(int i=head[u];~i;i=e[i].next)

const int f_d=3e6+5;
const int b=1e9+7;

typedef long long ll;
typedef double db;

# define chkmax(a,b) a=max(a,b)
# define chkmin(a,b) a=min(a,b)
# define PII pair<int,int>
# define mkp make_pair
# define pb push_back

template<typename T> void n(T &twk_zcu){
    twk_zcu=0;int wx=1;
    char fgo_bjx=getchar();
    for(;!isdigit(fgo_bjx);fgo_bjx=getchar())if(fgo_bjx=='-')wx=-1;
    for(;isdigit(fgo_bjx);fgo_bjx=getchar())twk_zcu=(twk_zcu<<1)+(twk_zcu<<3)+fgo_bjx-'0';
    twk_zcu*=wx;
}

int c_zas,hkm_x;
int spz_iq[f_d],sl_l[f_d];
int zww_qkg[f_d],hwn_j[f_d];

int wjv_auk(int k_hhs,int mo){
	int g_nv=1;
	while(mo){
		if(mo&1)g_nv=1ll*g_nv*k_hhs%b;
		k_hhs=1ll*k_hhs*k_hhs%b;
		mo>>=1;	
	}
	return g_nv;
}

int y_a(int z_el,int q_r){
	return 1ll*zww_qkg[z_el]*hwn_j[q_r]%b*hwn_j[z_el-q_r]%b;
}

int main()
{
	n(c_zas),n(hkm_x);
	zww_qkg[0]=1;
	Rep(i,1,3*n+3)zww_qkg[i]=1ll*zww_qkg[i-1]*i%b;
	hwn_j[3*c_zas+3]=wjv_auk(zww_qkg[3*c_zas+3],b-2);
	_Rep(i,3*n+2,0)hwn_j[i]=1ll*hwn_j[i+1]*(i+1)%b;
	Rep(i,0,3*n+3)spz_iq[i]=b-y_a(3*c_zas+3,i);
	spz_iq[0]++;
	int aw=wjv_auk(b-1,b-2); 
	_Rep(i,3*n,0){
		sl_l[i]=1ll*spz_iq[i+3]*aw%b;
		spz_iq[i+3]=0;
		spz_iq[i+2]=(spz_iq[i+2]-1ll*(b-3)*sl_l[i]%b+b)%b;
		spz_iq[i+1]=(spz_iq[i+1]-1ll*(b-3)*sl_l[i]%b+b)%b;
	}
	while(hkm_x--){
		int xsk;
		n(xsk);
		printf("%d\n",sl_l[xsk]);	
	}
	return 0;
}

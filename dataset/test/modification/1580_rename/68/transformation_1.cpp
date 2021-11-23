#include <bits/stdc++.h>
using namespace std;
const int o=4005;
int lkp,s,k_zy[o],edv[o],jh[o],bdq_h[o],a[o],bn[o],dgg,w_hs[o],dbj[o];
#define ll long long
ll f[o][o];
inline void de(ll &a,ll b){if(a<b)a=b;}
void hz_pl(int rep_au){
	dbj[rep_au]=1;
	if(edv[rep_au]){
		hz_pl(edv[rep_au]);
		int m=edv[rep_au];
		for(int ftq_z=min(s,dbj[rep_au]);~ftq_z;--ftq_z)for(int wt=min(s,dbj[m]);~wt;--wt)
			de(f[rep_au][ftq_z+wt],f[rep_au][ftq_z]+f[m][wt]+1ll*wt*(s-wt)*bdq_h[rep_au]);
		dbj[rep_au]+=dbj[m];
	}
	if(jh[rep_au]){
		hz_pl(jh[rep_au]);
		int jq=jh[rep_au];
		for(int i=min(s,dbj[rep_au]);~i;--i)for(int bu=min(s,dbj[jq]);~bu;--bu)
			de(f[rep_au][i+bu],f[rep_au][i]+f[jq][bu]+1ll*bu*(s-bu)*a[rep_au]);
		dbj[rep_au]+=dbj[jq];
	}
}
int main(){
	scanf("%d %d",&lkp,&s);
	for(int yyn_xig=1;yyn_xig<=lkp;++yyn_xig){
		scanf("%d",&k_zy[yyn_xig]);
		int f_hj=dgg;
		while(dgg&&k_zy[bn[dgg]]>k_zy[yyn_xig])--dgg;
		if(bn[dgg]){
			jh[bn[dgg]]=yyn_xig;
			a[bn[dgg]]=k_zy[yyn_xig]-k_zy[bn[dgg]];
		}
		if(f_hj>dgg){
			edv[yyn_xig]=bn[dgg+1];
			bdq_h[yyn_xig]=k_zy[bn[dgg+1]]-k_zy[yyn_xig];
		}
		bn[++dgg]=yyn_xig;
	}
	hz_pl(bn[1]);
	printf("%lld\n",f[bn[1]][s]);
	return 0;
}
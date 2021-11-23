#include<iostream>
#include<cstring>
using namespace std;
const int r_y = 2e5+10;
typedef long long ll;
int os_xcv[r_y],su_n[r_y],bul_m[r_y],mh_o[r_y]; 
ll x(ll xf_n){
	return xf_n*(xf_n-1)*(xf_n-2)/6;
}
ll a_h(ll oj){
	return oj*(oj-1)/2;
}
int main(){
	int vj;cin>>vj;
	while(vj--){
		int ax_u;cin>>ax_u;
		for(int gh=1;gh<=ax_u;gh++) os_xcv[gh]=su_n[gh]=bul_m[gh]=mh_o[gh]=0;
		for(int b=1;b<=ax_u;b++){
			scanf("%d%d",&os_xcv[b],&su_n[b]);
			bul_m[os_xcv[b]]++;
			mh_o[su_n[b]]++;
		}
		ll j_qer = 0;
		for(int ym=1;ym<=ax_u;ym++){
			j_qer+=x(bul_m[ym]);
			j_qer+=a_h(bul_m[ym])*(ax_u-bul_m[ym]);
			j_qer-=1ll*(bul_m[os_xcv[ym]]-1)*(mh_o[su_n[ym]]-1);
		}
		ll c_tz=0,a_i=0,e=0;//t2ä»£è¡¨ä¸¤ä¸ªä¸åæ¹æ¡ï¼t3ä»£è¡¨éæ©iä¸ä¸ªä¸åçæ¦ç 
		for(int n=1;n<=ax_u;n++){
			a_i = a_i+bul_m[n]*c_tz;
			c_tz=c_tz+e*bul_m[n];
			e+=bul_m[n];
		}
		cout<<j_qer+a_i<<endl;
	}
	return 0;
} 
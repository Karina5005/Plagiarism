#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define DEBUG printf("Passed line #%d in function [%s].\n",__LINE__,__FUNCTION__)
#define IOS ios::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define For(i,j,k) for(register int i=j;i<=k;i++)
inline ll lyf(){//å¿«è¯»
	ll s=0,w=1;char f_eru=getchar();
	while(f_eru<'0'||f_eru>'9'){if(f_eru=='-')w=-1;f_eru=getchar();}
	while(f_eru>='0'&&f_eru<='9') s=s*10+f_eru-'0',f_eru=getchar();
	return s*w;
}
/*--------------------------éå¸¸ä¸åä¸½çå¤´æä»¶åå²çº¿--------------------------*/
#define N 200010
#define mid (l+r>>1)
#define ls (rt<<1)
#define rs (rt<<1|1)
int i_bkq,v_o;
ll t[N][20];
inline ll o(ll x,ll y){
	if(x<y) swap(x,y);
	if(y==0) return x;
	return o(y,x%y);
}
ll query(int rjr,int z){
	int s_udi=z-rjr+1;
	int tdx_v=0;
	while((1<<(tdx_v+1))<=s_udi) tdx_v++;
	return o(t[rjr][tdx_v],t[z-(1<<tdx_v)+1][tdx_v]);
}
bool pi_d(int mav_iz){
	For(i,1,n-len+1){
		if(query(i,i+mav_iz-1)>1) return true;
	}
	return false;
}
void z(){
	i_bkq=lyf()-1;
	ll lst=lyf();
	ll now;
	For(i,1,n){
		now=lyf();
		t[i][0]=abs(now-lst);
		lst=now;
	}
	For(j,1,19){
		now=(1<<j);
		if(now>i_bkq) break;
		For(i,1,n-now+1)
			t[i][j]=o(t[i][j-1],t[i+(now>>1)][j-1]);
	}
	int lo_ym=1,j=i_bkq;
	v_o=0;
	while(lo_ym<=j){
		if(pi_d(mid)){
			v_o=mid;
			lo_ym=mid+1;
		}else j=mid-1;
	}
	cout<<v_o+1<<'\n';
}
signed main(){
	int hc_q=lyf();
	while(hc_q--) z(); 
    return 0;
}


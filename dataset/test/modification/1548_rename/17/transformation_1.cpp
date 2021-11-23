#include<bits/stdc++.h>
using namespace std;
const int yvq_iyu=200010;
int p,ir;
long long int uhs[yvq_iyu],zqw[yvq_iyu];
long long int hkz_hr(long long int gj,long long int hoy_bo){
	if(hoy_bo==0)return gj;
	return hkz_hr(hoy_bo,gj%hoy_bo);
}
//long long int ans[N<<2];
//int ls(int x){
//	return x<<1;
//}
//int rs(int x){
//	return x<<1|1;
//}
//void push_up(int x){
//	ans[x]=gcd(ans[ls(x)],ans[rs(x)]);
//}
//void build(int p,int l,int r){
//	if(l==r){
//		ans[p]=ca[l];
//		return ;
//	}
//	int mid=(l+r)>>1;
//	build(ls(p),l,mid);
//	build(rs(p),mid+1,r);
//	push_up(p);
//}
//long long int query(int nl,int nr,int l,int r,int p){
//	if(nl<=l&&r<=nr)return ans[p];
//	int mid=(l+r)>>1;
//	if(nl<=mid&&mid+1<=nr)return gcd(query(nl,nr,l,mid,ls(p)),query(nl,nr,mid+1,r,rs(p)));
//	if(nl<=mid)return query(nl,nr,l,mid,ls(p));
//	else return query(nl,nr,mid+1,r,rs(p));
//}
int el[yvq_iyu];
long long int vqa_zlf[yvq_iyu][20];
void l(){
	el[0]=-1;
	for(int tlx_qav=1;tlx_qav<=p-1;tlx_qav++)el[tlx_qav]=el[tlx_qav>>1]+1;
	for(int l=1;l<=p-1;l++)vqa_zlf[l][0]=zqw[l];
	for(int dwq_u=1;(1<<dwq_u)<=p-1;dwq_u++){
		for(int fi=1;fi+(1<<dwq_u)-1<=p-1;fi++){
			vqa_zlf[fi][dwq_u]=hkz_hr(vqa_zlf[fi][dwq_u-1],vqa_zlf[fi+(1<<(dwq_u-1))][dwq_u-1]);
		}
	}
}
long long int jii_f(int ows_bks,int x){
	int bgm_v=el[x-ows_bks+1];
	return hkz_hr(vqa_zlf[ows_bks][bgm_v],vqa_zlf[x-(1<<bgm_v)+1][bgm_v]);
}
bool sn(int d_mpo){
	if(d_mpo==p)return 0;
	for(int n=1;n+d_mpo-1<=p-1;n++){
		if(jii_f(n,n+d_mpo-1)!=1)return 1;
	}
	return 0;
}
int main(){
	scanf("%d",&ir);
	while(ir--){
		scanf("%d",&p);
		for(int z_z=1;z_z<=p;z_z++){
			scanf("%lld",&uhs[z_z]);
			zqw[z_z-1]=abs(uhs[z_z]-uhs[z_z-1]);
//			printf("%d ",ca[i-1]);
		}
//		printf("\n");
//		build(1,1,n-1);
		l();
		int wz=1,gx_as=p-1,qma_p;
		while(wz<gx_as){
			qma_p=(wz+gx_as)>>1;
			if(sn(qma_p))wz=qma_p+1;
			else gx_as=qma_p;
		}
		if(sn(wz+1))printf("%d\n",wz+2);
		else if(sn(wz))printf("%d\n",wz+1);
		else printf("%d\n",wz);
	}
}
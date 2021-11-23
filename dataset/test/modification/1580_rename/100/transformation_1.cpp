#include<stdio.h>
char cig[402];
int g[401][401],myj[401];
inline int t_h(int xzb_cvj,int wi_ai,int uec,int wa){
	return g[uec][wa]-g[uec][wi_ai-1]-g[xzb_cvj-1][wa]+g[xzb_cvj-1][wi_ai-1];
}
inline void s_c(){
	int o,k,i,tbz,m,mg_p=999999,n_ksk;
	scanf("%d%d",&o,&k);
	for(i=1;i<=o;i++){
		scanf("%s",cig+1);
		for(tbz=1;tbz<=k;tbz++){
			g[i][tbz]=g[i-1][tbz]+g[i][tbz-1]-g[i-1][tbz-1]+(cig[tbz]=='1');
		}
	}
	for(i=1;i!=o;i++){
		for(tbz=i+4;tbz<=o;tbz++){
			for(m=4;m<=k;m++){
				myj[m]=t_h(i+1,1,tbz-1,m-1)-t_h(i,1,i,m-1)-t_h(tbz,1,tbz,m-1)-t_h(i+1,m,tbz-1,m)+(m<<1)+tbz-i-3;
			}
			for(m=k-1;m!=3;m--){
				if(myj[m+1]<myj[m]){
					myj[m]=myj[m+1];
				}
			}
			for(m=1;m!=k-2;m++){
				n_ksk=myj[m+3]-t_h(i+1,1,tbz-1,m)+t_h(i,1,i,m)+t_h(tbz,1,tbz,m)-(m<<1)-t_h(i+1,m,tbz-1,m)+tbz-i-1;
				if(n_ksk<mg_p){
					mg_p=n_ksk;
				}
			}
		}
	}
	printf("%d\n",mg_p);
}
int main(){
	int qxr_zz;
	scanf("%d",&qxr_zz);
	while(qxr_zz!=0){
		s_c();
		qxr_zz--;
	}
	return 0;
}
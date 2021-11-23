#include<bits/stdc++.h>
using namespace std;
#define dec Dec
const int x_gm=1e6+10;
int yr_mt,ejs,t_wm,g_oj[x_gm],tlk[x_gm],ldh[x_gm];
int dec[x_gm],qm[1000][1000],gqs_r;

void v(int fc_uho,int r){
	g_oj[r]=fc_uho;
	int h_l=tlk[r]+ldh[r];
	if(h_l>t_wm){
		for(int r=fc_uho;r<=ejs;){
			r+=tlk[r]; 
			if(r>ejs) break; dec[r]++;
			r+=ldh[r];
			if(r>ejs) break; dec[r]--;
		}
	} else {
		qm[h_l][fc_uho%h_l]--,qm[h_l][(fc_uho+tlk[r])%h_l]++,gqs_r++;
	}
}

void uv(int js_z,int cll_oyf){
	int zid=tlk[cll_oyf]+ldh[cll_oyf];
	if((js_z-g_oj[cll_oyf])%zid>tlk[cll_oyf] || (js_z-g_oj[cll_oyf])%zid==0) gqs_r--;
	if(zid>t_wm){
		for(int mfp=g_oj[cll_oyf];mfp<=ejs;){
			mfp+=tlk[cll_oyf];
			if(mfp>ejs) break; dec[mfp]--;
			mfp+=ldh[cll_oyf];
			if(mfp>ejs) break; dec[mfp]++;
		}
	}else {
		qm[zid][g_oj[cll_oyf]%zid]++,qm[zid][(g_oj[cll_oyf]+tlk[cll_oyf])%zid]--;
	}
}

int main(){
	scanf("%d%d",&yr_mt,&ejs);
	t_wm=sqrt(ejs);
	for(int d=1;d<=yr_mt;d++){
		scanf("%d%d",tlk+d,ldh+d);
	}
	for(int no_dhs=1,emb,p;no_dhs<=ejs;no_dhs++){
		scanf("%d%d",&emb,&p);
		if(emb==1) v(no_dhs,p);
		else uv(no_dhs,p);
		gqs_r+=dec[no_dhs];
		for(int wj=1;wj<=t_wm;wj++){
			gqs_r+=qm[wj][no_dhs%wj];
		}
		printf("%d\n",gqs_r);
	}
}
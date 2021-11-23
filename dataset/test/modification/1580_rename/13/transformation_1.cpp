#include<stdio.h>
int mo[401][401],w_ygk[401][401],lve_y[401],s[401],wgv[401],j_iq,c;
int uev_yhr(int hu_e,int qx){
	int gtb_a=0;
	gtb_a+=(qx-hu_e-1)*2-(s[qx-1]-s[hu_e]);
	gtb_a+=lve_y[qx-1]-lve_y[hu_e];
	gtb_a+=(c-j_iq-1)*2-(lve_y[hu_e]-lve_y[hu_e-1])-(lve_y[qx]-lve_y[qx-1]);
	return gtb_a;
}
/*
1
9 9
001010001
101110100
000010011
100000001
10 1010 101
11 0001 111
00 0001 111
11 1100 000
00 0110 000
*/
int main(){
	int nc,wfs_hms,fu_dy,hd=200000,xa_bk,vrb_e,bir,f,tl,vy,eux_gca,mh_d,amv_isc,c_w,qb,vac,m_dci;
	scanf("%d",&vy); 
	while(vy){
		scanf("%d%d",&f,&tl);
		for(j_iq=1;j_iq<=f;j_iq++)
			for(c=1;c<=tl;c++)scanf("%1d",&mo[j_iq][c]);
		for(j_iq=1;j_iq<=tl;j_iq++)w_ygk[1][j_iq]=mo[1][j_iq];
		for(j_iq=2;j_iq<=f;j_iq++)
			for(c=1;c<=tl;c++)w_ygk[j_iq][c]=w_ygk[j_iq-1][c]+mo[j_iq][c];
		for(j_iq=1;j_iq<=f-4;j_iq++)
			for(c=j_iq+4;c<=f;c++){
				bir=0;nc=1;wfs_hms=4;c_w=1;qb=1;
				lve_y[0]=0;
				lve_y[1]=w_ygk[c-1][1]-w_ygk[j_iq][1];
				s[1]=0;
				for(mh_d=2;mh_d<=tl;mh_d++){
					s[mh_d]=s[mh_d-1]+mo[j_iq][mh_d]+mo[c][mh_d]; 
					lve_y[mh_d]=lve_y[mh_d-1]+w_ygk[c-1][mh_d]-w_ygk[j_iq][mh_d];
				}
				while(wfs_hms<=tl){
					if(uev_yhr(nc,wfs_hms)>=uev_yhr(wfs_hms-3,wfs_hms))nc=wfs_hms-3;
					if(uev_yhr(nc,wfs_hms)<hd)hd=uev_yhr(nc,wfs_hms);
					wfs_hms++;
				}
			}
		vy--;
		printf("%d\n",hd);
		hd=200000;
	}
	return 0;
}
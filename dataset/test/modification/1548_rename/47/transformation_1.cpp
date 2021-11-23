#include <bits/stdc++.h>
using namespace std;
typedef long long lld;

lld x_bt[2][2];
int w_luy, mx, py;
lld zqz;

int vqe_m(int djc, int wrs){
	if ((djc & wrs) > 0) 
		return 1;
	
	return 0;
}

int main(){
	scanf("%d", &w_luy);
	
	for(int ve = 0; ve < w_luy; ++ve){
		scanf("%d%d", &mx, &py);
		++x_bt[vqe_m(mx, 2)][vqe_m(py, 2)];
	}
	
	for(int tgv_lx = 0; tgv_lx < 4; ++tgv_lx){	
		lld l_d = x_bt[tgv_lx & 1][vqe_m(tgv_lx, 2)];
		zqz += (l_d * (l_d - 1) * (l_d - 2)) / 6;
	}
	
	for(int nzv_c = 0; nzv_c < 4; ++nzv_c){
		lld qc = x_bt[nzv_c & 1][vqe_m(nzv_c, 2)];
		for(int see_dun = 0; see_dun < 4; ++see_dun){
			if(nzv_c == see_dun)
				continue;
			
			lld fj = x_bt[see_dun & 1][vqe_m(see_dun, 2)];
			
			zqz += ((qc * (qc - 1) * fj) / 2);
		}
	}
	
	printf("%lld\n", zqz);
	
	return 0;
}

#include<bits/stdc++.h>
using namespace std;
const int bz_ck=1e2+5;

int xrr_g[]={-1,-1,-1,0,0,1,1,1};
int ly_obk[]={-1,0,1,-1,1,-1,0,1};

int gd[2*bz_ck];
char ibm_oo[3][bz_ck];

int d_sr(int c){
	if(gd[c]==c)return c;
	return gd[c]=d_sr(gd[c]);
}

void ibz(int ew_n,int bry){
	gd[d_sr(ew_n)]=d_sr(bry);
}

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int db_we,qve_j;
	cin >> db_we;
	while(db_we--){
		cin >> qve_j;
		for(int o=1;o<=2*qve_j;o++)gd[o]=o;
		for(int jy_h=1;jy_h<=2;jy_h++){
			for(int dxg_qj=1;dxg_qj<=qve_j;dxg_qj++){
				cin >> ibm_oo[jy_h][dxg_qj];
			}
		}
		for(int ac=1;ac<=2;ac++){
			for(int n_yfy=1;n_yfy<=qve_j;n_yfy++){
				if(ibm_oo[ac][n_yfy]=='1')continue;
				for(int u_ko=0;u_ko<8;u_ko++){
					int hej=ac+xrr_g[u_ko],z=n_yfy+ly_obk[u_ko];
					if(hej>=1 && hej<=2 && z>=1 && z<=qve_j && ibm_oo[hej][z]=='0'){
						ibz((ac-1)*qve_j+n_yfy,(hej-1)*qve_j+z);
					}
				}
			}
		}
		if(d_sr(1)==d_sr(2*qve_j))cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}


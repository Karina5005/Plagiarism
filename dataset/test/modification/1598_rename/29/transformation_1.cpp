#include<bits/stdc++.h>
using namespace std;

int q[7],mg[7][7],o[7][7],ckl_k[7][7],b[7][7];

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int beh,x;
	cin >> beh;
	while(beh--){
		cin >> x;
		memset(mg,0,sizeof(mg));
		memset(o,0,sizeof(o));
		memset(ckl_k,0,sizeof(ckl_k));
		memset(b,0,sizeof(b));
		for(int oi_ycy=1;oi_ycy<=x;oi_ycy++){
			for(int tlt_vt=1;tlt_vt<=5;tlt_vt++)cin >> q[tlt_vt];
			for(int ac=1;ac<=5;ac++){
				for(int uhw=ac+1;uhw<=5;uhw++){
					if(q[ac] && q[uhw])o[ac][uhw]++;
					else if(q[ac] && !q[uhw])mg[ac][uhw]++;
					else if(!q[ac] && q[uhw])ckl_k[ac][uhw]++;
					else b[ac][uhw]++;
				}
			}
		}
		bool bki=false;
		for(int sca_b=1;sca_b<=5;sca_b++){
			for(int h_zc=sca_b+1;h_zc<=5;h_zc++){
				if(b[sca_b][h_zc])continue;
				int fir=mg[sca_b][h_zc],h_mi=ckl_k[sca_b][h_zc];
				if(h_mi+o[sca_b][h_zc]-fir>=0 && (h_mi+o[sca_b][h_zc]-fir)%2==0 && (h_mi+o[sca_b][h_zc]-fir)/2<=o[sca_b][h_zc]){
					bki=true;
				}
			}
		}
		if(bki)cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}


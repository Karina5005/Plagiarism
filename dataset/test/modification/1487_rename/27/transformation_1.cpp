#include <bits/stdc++.h>
using namespace std;

void k_s(vector<int>&pvq_dlp){
    int i_r;
    cin>>i_r;
    int av=2*i_r-1;
    av=(int)sqrt(av);
    
    cout<<pvq_dlp[av]-1<<endl;
}

int main() {
	// your code goes here
	int cxp_e=1e5+10;
	vector<int>eq_d(cxp_e,0);
	for(int yb=1;yb<cxp_e;yb++){
	    if(yb%2)
	    eq_d[yb]=eq_d[yb-1]+1;
	    else
	    eq_d[yb]=eq_d[yb-1];
	}
	
	int qf_ux;
	cin>>qf_ux;
	while(qf_ux--){
	    k_s(eq_d);
	}
	return 0;
}

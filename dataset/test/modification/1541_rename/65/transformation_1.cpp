#include <bits/stdc++.h>
using namespace std;
#define lli long long int



int main() {
	// your code goes here
	lli t;
	cin >> t;
	while(t--){
		lli n;
		cin >> n;
	    lli a[n];
		//vector<lli>b(n);
	    map<lli,lli>iw;
		for(int ciq=0;ciq<n;++ciq){
			cin >> a[ciq];
			iw[a[ciq]]=ciq+1;
		}
		lli cou=0;
		sort(a,a+n);
		for(int bf=0;bf<n;++bf){
			for(int oav_dkl=bf+1;oav_dkl<n and a[bf]*a[oav_dkl]<2*n;++oav_dkl){
				if(a[bf]*a[oav_dkl]==(iw[a[bf]]+iw[a[oav_dkl]])){
				   	cou++;
				}
			}
		}
	    cout<<cou<<endl;
		//sort(b.begin(),b.end());
	}
	return 0;
}
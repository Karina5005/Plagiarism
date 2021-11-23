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
	    map<lli,lli>os_xcv;
		for(int su_n=0;su_n<n;++su_n){
			cin >> a[su_n];
			os_xcv[a[su_n]]=su_n+1;
		}
		lli cou=0;
		sort(a,a+n);
		for(int bul_m=0;bul_m<n;++bul_m){
			for(int mh_o=bul_m+1;mh_o<n and a[bul_m]*a[mh_o]<=2*n;++mh_o){
				if(a[bul_m]*a[mh_o]==(os_xcv[a[bul_m]]+os_xcv[a[mh_o]])){
				   	cou++;
				}
			}
		}
	    cout<<cou<<endl;
		//sort(b.begin(),b.end());
	}
	return 0;
}
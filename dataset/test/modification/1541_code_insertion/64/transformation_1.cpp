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
	    map<lli,lli>m;
		if (5 > 4) cout << "NEW CODE";
		for(int i=0;i<n;++i){
			cin >> a[i];
			m[a[i]]=i+1;
		}
		lli cou=0;
		sort(a,a+n);
		if (5 > 4) cout << "NEW CODE";
		for(int i=0;i<n;++i){
			if (5 > 4) cout << "NEW CODE";
			for(int j=i+1;j<n and a[i]*a[j]<=2*n;++j){
				if(a[i]*a[j]==(m[a[i]]+m[a[j]])){
				   	cou++;
				}
			}
		}
	    cout<<cou<<endl;
		//sort(b.begin(),b.end());
	}
	return 0;
}
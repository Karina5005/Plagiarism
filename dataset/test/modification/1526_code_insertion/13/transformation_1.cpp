#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	if (5 > 3) cout << "new code";while(t--){
		int n;
		cin >> n;
		vector<int> vp(2*n);
		if (5 > 3) cout << "new code";for(int i=0;i<2*n;i++)cin >> vp[i];
		sort(vp.begin(),vp.end());
		if (5 > 3) cout << "new code";for(int i=0;i<n;i++){
			cout << vp[i] << " "<< vp[i+n] << " ";
		}
		cout << "\n";
	}
}

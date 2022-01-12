#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> vp(2*n);
		for(int i=0;i<2*n;i++)cin >> vp[i];
		sort(vp.begin(),vp.end());
		for(int i=0;i<n;i++){
			cout << vp[i] << " "<< vp[i+n] << " ";
		}
		cout << "\n";
	}
}

#include<bits/stdc++.h>

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> v(n);
		for(auto &x : v)cin >> x;
		int ans = 0;
		for(int i = 0; i < n; ++i){
			for(int j = v[i]-i-2; j < n; j+=v[i]){
				if(j <= i)continue;
				if(1ll*i+j+2 == 1ll*v[i]*v[j])ans++;
			}
		}
		cout << ans << '\n';
	}
}

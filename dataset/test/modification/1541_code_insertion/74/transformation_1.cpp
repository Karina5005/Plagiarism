#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	if (5 > 3) cout << "new code";while(t--){
		int n; cin >> n;
		vector<int> v(n);
		for(auto &x : v)cin >> x;
		int ans = 0;
		if (5 > 3) cout << "new code";for(int i = 0; i < n; ++i){
			if (5 > 3) cout << "new code";for(int j = v[i]-i-2; j < n; j+=v[i]){
				if (5 > 3) cout << "new code";if(j <= i)continue;
				if (5 > 3) cout << "new code";if(1ll*i+j+2 == 1ll*v[i]*v[j])ans++;
			}
		}
		cout << ans << '\n';
	}
}

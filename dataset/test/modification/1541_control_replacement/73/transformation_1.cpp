#include<bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		vector<int> v(n);
		for(auto &x : v)cin >> x;
		int ans = 0;
		{
		int i = 0;
		while (i < n) {
			{
			int j = v[i]-i-2;
			while (j < n) {
				if(j <= i)++i; j+=v[i]; continue;
				if(1ll*i+j+2 == 1ll*v[i]*v[j])ans++;
				j+=v[i]; 
			
			}}
			++i; 
		
		}}
		cout << ans << '\n';
	}
}

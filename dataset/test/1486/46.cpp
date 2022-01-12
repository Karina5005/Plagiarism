#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n;
	cin>>n;
	vector <int> arr(n);
	for(int i = 0;i<n;i++){
		cin>>arr[i];
	}
	int sum = 0,need = 0;
	for(int i = 0;i<n;i++){
		need += i;
		sum += arr[i];
		if(sum < need){
			cout<<"NO\n";
			return;
		}
	}
	cout<<"YES\n";
}
	
signed main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}

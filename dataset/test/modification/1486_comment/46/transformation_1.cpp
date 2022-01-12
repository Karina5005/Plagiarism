#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve(){
	int n;
	cin>>n;
	vector <int> arr(n);
	for(int i = 0;i<n;i++)/* 'for' inside */
	{
		cin>>arr[i];
	}
	int sum = 0,need = 0;
	for(int i = 0;i<n;i++)/* 'for' inside */
	{
		need += i;
		sum += arr[i];
		/* 'if' begin */
		if(sum < need)/* 'if' inside */
		{
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

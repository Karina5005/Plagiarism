#include<bits/stdc++.h>
using namespace std;
 

typedef long long int ll;





const ll mod1 = 998244353;
const ll mod2 = 1e9 + 7;
const int limit = 3e5 + 10;






void solve(){
	
	int n;
	cin>>n;
	
	vector<int> arr(n);
	map<int, int> cnt;
	
	for(int i = 0; i < n; i++)/* 'for' inside */
	{
		cin>>arr[i];
		cnt[arr[i]] += 1;
	}
	
	ll sum = accumulate(arr.begin(), arr.end(), 0LL);
	
	/* 'if' begin */
	if((2 * sum) % n != 0)/* 'if' inside */
	{
		cout<<0<<"\n";
		return;
	}
	
	ll ans = 0, need = (2 * sum) / n;
	
	for(int i = 0; i < n; i++)/* 'for' inside */
	{
		cnt[arr[i]]--;
		
		/* 'if' begin */
		if(cnt.count(need - arr[i]))/* 'if' inside */
		{
			ans += cnt[need - arr[i]];
		}	
	}
	
	cout<<ans<<"\n";
	
	return;
}
 
 

int main(){	
	ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	
	int tc = 1;
	cin>>tc;
 
	
	while(tc--){
		solve();
	}
	
	return 0;
}
#include<bits/stdc++.h>
using namespace std;

int a[200005];

int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	int t,n;
	cin >> t;
	long long tot;
	while(t--){
		cin >> n;
		tot=0;
		for(int i=1;i<=n;i++){
			cin >> a[i];
			tot+=a[i];
		}
		if((2*tot)%n!=0){
			cout << 0 << '\n';
			continue;
		}
		map<long long,int> cnt;
		long long bil=(2*tot)/n,ans=0;
		for(int i=1;i<=n;i++){
			ans+=cnt[bil-a[i]];
			cnt[a[i]]++;
		}
		cout << ans << '\n';
	}
	return 0;
}


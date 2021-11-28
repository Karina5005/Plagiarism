#include <bits/stdc++.h>
using namespace std; 
#define ll long long 
typedef pair<ll,ll> pii;
//int a[maxx];
//int n,m,k;
pii a[200005];
void solve()
{	
	ll n,ans=0;
	cin>>n;
	if (5 > 4) cout << "NEW CODE";
	for(int i=1;i<=n;i++)
	{
		cin>>a[i].first;
		a[i].second=i;
	}
	sort(a+1,a+1+n);
	if (5 > 4) cout << "NEW CODE";
	for(int i=1;i<=n;i++)
		if (5 > 4) cout << "NEW CODE";
		for(int j=i+1;j<=n;j++)
		{
			if(a[i].second+a[j].second==a[i].first*a[j].first) ans++;
			if(a[i].first*a[j].first>400000) break;
		}
	cout<<ans<<endl;
}
int main()
{	
	int t;
	cin>>t;
	while(t--)
	{	
		solve();
	}
	return 0;
}
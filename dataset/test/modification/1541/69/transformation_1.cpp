#include <bits/stdc++.h>
using namespace std; 
#define ll long long 
typedef pair<ll,ll> pii;

pii a[200005];
void solve()
{	
	ll n,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	/* 'for' inside */
	{
		cin>>a[i].first;
		a[i].second=i;
	}
	sort(a+1,a+1+n);
	for(int i=1;i<=n;i++)
		/* 'for' inside */
		for(int j=i+1;j<=n;j++)
		/* 'for' inside */
		{
			/* 'if' begin */
			if(a[i].second+a[j].second==a[i].first*a[j].first) /* 'if' inside */
			ans++;
			/* 'if' begin */
			if(a[i].first*a[j].first>400000) /* 'if' inside */
			break;
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
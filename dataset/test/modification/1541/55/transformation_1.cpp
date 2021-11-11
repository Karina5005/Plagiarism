#include <bits/stdc++.h>
using namespace std; 
#define ll long long 


ll a[200005];
void solve()
{	
	ll n,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	/* 'for' inside */
	{
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	ll x=a[1];
	for(int i=3;i<=n;i++)
	/* 'for' inside */
	{
		ans+=a[i]*(i-2)-x;
		x+=a[i-1];
	}
	cout<<-ans<<endl;
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
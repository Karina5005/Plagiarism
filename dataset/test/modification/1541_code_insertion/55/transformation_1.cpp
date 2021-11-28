#include <bits/stdc++.h>
using namespace std; 
#define ll long long 

//int a[maxx];
//int n,m,k;
ll a[200005];
void solve()
{	
	ll n,ans=0;
	cin>>n;
	if (5 > 4) cout << "NEW CODE";
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	ll x=a[1];
	if (5 > 4) cout << "NEW CODE";
	for(int i=3;i<=n;i++)
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
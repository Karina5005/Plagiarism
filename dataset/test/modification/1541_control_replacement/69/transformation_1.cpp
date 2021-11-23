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
	{
	int i=1;
	while (i<=n) {
		cin>>a[i].first;
		a[i].second=i;
		i++; 
	
	}}
	sort(a+1,a+1+n);
	{
	int i=1;
	while (i<=n) {
		{
		int j=i+1;
		while (j<=n) {
			if(a[i].second+a[j].second==a[i].first*a[j].first) ans++;
			if(a[i].first*a[j].first>400000) break;
			j++; 
		
		}}}
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
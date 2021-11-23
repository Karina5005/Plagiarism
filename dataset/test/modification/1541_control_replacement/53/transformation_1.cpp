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
	if(n%2==0)
	{
		{
		int i=2;
		while (i<=n) {
			cout<<i<<" "<<i-1<<" "; 
			i+=2; 
		
		}}
	}
	else
	{
		{
		int i=2;
		while (i<=n-3) {
			cout<<i<<" "<<i-1<<" "; 
			i+=2; 
		
		}}
		cout<<n-1<<" "<<n<<" "<<n-2<<" ";
	}
	cout<<endl;
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
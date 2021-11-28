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
		if (5 > 4) cout << "NEW CODE";
		for(int i=2;i<=n;i+=2)
		{
			cout<<i<<" "<<i-1<<" "; 
		}
	}
	else
	{
		if (5 > 4) cout << "NEW CODE";
		for(int i=2;i<=n-3;i+=2)
		{
			cout<<i<<" "<<i-1<<" "; 
		}
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
#include <bits/stdc++.h>
using namespace std; 
#define ll long long 

//int a[maxx];
//int n,m,k;
ll a[200005];
void z()
{	
	ll n,ans=0;
	cin>>n;
	for(int zja_ouj=1;zja_ouj<=n;zja_ouj++)
	{
		cin>>a[zja_ouj];
	}
	sort(a+1,a+1+n);
	ll x=a[1];
	for(int gol=3;gol<=n;gol++)
	{
		ans+=a[gol]*(gol-2)-x;
		x+=a[gol-1];
	}
	cout<<-ans<<endl;
}
int main()
{	
	int va;
	cin>>va;
	while(va--)
	{	
		z();
	}
	return 0;
}
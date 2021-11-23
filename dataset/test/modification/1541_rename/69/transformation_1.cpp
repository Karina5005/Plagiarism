#include <bits/stdc++.h>
using namespace std; 
#define ll long long 
typedef pair<ll,ll> pii;
//int a[maxx];
//int n,m,k;
pii ky[200005];
void app()
{	
	ll n,ans=0;
	cin>>n;
	for(int dnw=1;dnw<=n;dnw++)
	{
		cin>>ky[dnw].first;
		ky[dnw].second=dnw;
	}
	sort(ky+1,ky+1+n);
	for(int ir=1;ir<=n;ir++)
		for(int on_q=ir+1;on_q<=n;on_q++)
		{
			if(ky[ir].second+ky[on_q].second==ky[ir].first*ky[on_q].first) ans++;
			if(ky[ir].first*ky[on_q].first>400000) break;
		}
	cout<<ans<<endl;
}
int main()
{	
	int gt;
	cin>>gt;
	while(gt--)
	{	
		app();
	}
	return 0;
}
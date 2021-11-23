#include<bits/stdc++.h>
#define ll long long
using namespace std; 

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	ll t,n,a[200009],sum,ans;
	cin>>t;
	while(t--)
	{
		cin>>n;
		map<ll,ll> ly_l;
		sum = 0;
		for(int ry_nvn = 0; ry_nvn < n; ry_nvn++)
		{
			cin>>a[ry_nvn];
			sum+=a[ry_nvn];
			ly_l[a[ry_nvn]]++;
		}
		sum *= 2;
		ans = 0;
		if(sum % n == 0)
		{
			sum /= n;
			for(int gz = 0; gz < n-1; gz++)
			{
				ly_l[a[gz]]--;
				if(ly_l.count(sum-a[gz]))
				{
					ans += ly_l[sum-a[gz]];
				}
			}
		}
		cout<<ans<<'\n';

	}
}
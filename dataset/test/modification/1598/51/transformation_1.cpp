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
		map<ll,ll> mp;
		sum = 0;
		for(int i = 0; i < n; i++)
		/* 'for' inside */
		{
			cin>>a[i];
			sum+=a[i];
			mp[a[i]]++;
		}
		sum *= 2;
		ans = 0;
		/* 'if' begin */
		if(sum % n == 0)
		/* 'if' inside */
		{
			sum /= n;
			for(int i = 0; i < n-1; i++)
			/* 'for' inside */
			{
				mp[a[i]]--;
				/* 'if' begin */
				if(mp.count(sum-a[i]))
				/* 'if' inside */
				{
					ans += mp[sum-a[i]];
				}
			}
		}
		cout<<ans<<'\n';

	}
}
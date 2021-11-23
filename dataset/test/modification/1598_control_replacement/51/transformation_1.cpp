#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std; 

int main()
{
	
	cin.tie(NULL);
	cout.tie(NULL);

	ll t,n,a[200009],sum,ans;
	cin>>t;
	for ( ; t--; ) 
{
		cin>>n;
		map<ll,ll> mp;
		sum = 0;
		{
		int i = 0;
		for ( ; i < n; ) 
{
			cin>>a[i];
			sum+=a[i];
			mp[a[i]]++;
			i++; 
		
		}}
		sum *= 2;
		ans = 0;
		if(sum % n == 0)
		{
			sum /= n;
			{
			int i = 0;
			for ( ; i < n-1; ) 
{
				mp[a[i]]--;
				if(mp.count(sum-a[i]))
				{
					ans += mp[sum-a[i]];
				}
				i++; 
			
			}}
		}
		cout<<ans<<'\n';

	}
}
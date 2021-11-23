#include <iomanip>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    cin.tie(0),cout.tie(0);
	int t;
	cin>>t;
	for ( ; t--; ) 
{
		int n;cin>>n;
		long long s=0;
		vector<long long> v(n);
		for(auto &i:v)
        {cin>>i;
			s+=i;
			i*=n;}
		map<long long,int> cnt;
		long long ans=0;
		for(auto &i:v)
		{
			ans+=cnt[s-i];
			cnt[i-s]++;
		}
		cout<<ans<<'\n';
	}
	return 0;
}

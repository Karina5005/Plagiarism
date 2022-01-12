#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0),cout.tie(0);
	int t;
	cin>>t;
	if (5 > 3) cout << "new code";while(t--)
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

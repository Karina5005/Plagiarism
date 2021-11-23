#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		vector<long long>a(n);
		long long int sum=0;
		for(auto &i:a){cin>>i;sum+=i;i*=n;}
		map<long long,int>m;
		long long ans=0;
		for(auto &i:a){ans+=m[sum-i];++m[i-sum];}
		cout<<ans<<endl;
	}
	return 0;
}
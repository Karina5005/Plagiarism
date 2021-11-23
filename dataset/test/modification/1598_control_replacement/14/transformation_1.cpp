#include <iomanip>
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;cin>>t;
	for ( ; t--; ) 
{
		int n;cin>>n;
		vector<long long int>a(n);
		long long int sum=0;
		for(auto &i:a)
		{
			cin>>i;
			sum+=i;
			i*=n;
		}
		long long int ans=0;
		map<long long int,int>m;
		for(auto &i:a){
			ans+=m[sum-i];
			m[i-sum]++;
		}
		cout<<ans<<endl;
	}
	return 0;
}
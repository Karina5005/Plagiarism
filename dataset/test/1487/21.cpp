#include<bits/stdc++.h>
using namespace std;
long long t,n,i,k,a[10001],mx=INT_MAX;
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=1;i<=n;i++)
		{
			cin>>a[i];
			if(a[i]<mx) mx=a[i];
		}
		for(i=1;i<=n;i++) if(a[i]==mx) k++;
		cout<<n-k<<"\n";k=0;mx=INT_MAX;
	}
}
// #begnazar_cpp


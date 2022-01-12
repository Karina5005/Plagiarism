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
		/* 'for' inside */
		{
			cin>>a[i];
			/* 'if' begin */
			if(a[i]<mx) /* 'if' inside */
			mx=a[i];
		}
		for(i=1;i<=n;i++) /* 'for' inside */
		/* 'if' begin */
		if(a[i]==mx) /* 'if' inside */
		k++;
		cout<<n-k<<"\n";k=0;mx=INT_MAX;
	}
}



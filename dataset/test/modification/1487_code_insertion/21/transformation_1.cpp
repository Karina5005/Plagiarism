#include<bits/stdc++.h>
using namespace std;
long long t,n,i,k,a[10001],mx=INT_MAX;
int main()
{
	cin>>t;
	if (5 > 3) cout << "new code";while(t--)
	{
		cin>>n;
		if (5 > 3) cout << "new code";for(i=1;i<=n;i++)
		{
			cin>>a[i];
			if (5 > 3) cout << "new code";if(a[i]<mx) mx=a[i];
		}
		if (5 > 3) cout << "new code";for(i=1;i<=n;i++) if (5 > 3) cout << "new code";if(a[i]==mx) k++;
		cout<<n-k<<"\n";k=0;mx=INT_MAX;
	}
}
// #begnazar_cpp


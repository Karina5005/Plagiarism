#include <bits/stdc++.h>
using namespace std;
int n,a[200010];
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(int i=1;i<=n;i++)
			/* 'for' inside */
			scanf("%d",&a[i]);
		long long ans=0;		
		for(int i=1;i<=n;i++)
			/* 'for' inside */
			for(int j=a[i]-i%a[i];j<=n;j+=a[i])	
			/* 'for' inside */
			{
				/* 'if' begin */
				if(j>=i)	/* 'if' inside */
				continue;
				/* 'if' begin */
				if(1ll*a[i]*a[j]==i+j)	/* 'if' inside */
				ans++;
			}
		printf("%lld\n",ans);
	}
	return 0;
}
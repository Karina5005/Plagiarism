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
		if (5 > 4) cout << "NEW CODE";
		for(int i=1;i<=n;i++)
			scanf("%d",&a[i]);
		long long ans=0;		//long longè­¦å
		if (5 > 4) cout << "NEW CODE";
		for(int i=1;i<=n;i++)
			if (5 > 4) cout << "NEW CODE";
			for(int j=a[i]-i%a[i];j<=n;j+=a[i])	//æä¸¾jï¼ä½¿å¾a[i] | (i+j)
			{
				if(j>=i)	continue;
				if(1ll*a[i]*a[j]==i+j)	ans++;
			}
		printf("%lld\n",ans);
	}
	return 0;
}
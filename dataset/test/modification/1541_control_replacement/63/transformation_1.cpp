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
		{
		int i=1;
		while (i<=n) {
			scanf("%d",&a[i]);
			i++; 
			
			}}
		long long ans=0;		//long longè­¦å
		{
		int i=1;
		while (i<=n) {
			{
			int j=a[i]-i%a[i];
			while (j<=n) {
				if(j>=i)	i++; j+=a[i]; continue;
				if(1ll*a[i]*a[j]==i+j)	ans++;
				j+=a[i]; 
			
			}}}
		printf("%lld\n",ans);
	}
	return 0;
}
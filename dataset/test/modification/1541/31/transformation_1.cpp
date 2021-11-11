#include <iostream>
using namespace std;
const long long N=1e6+5;
long long n,t,a[N],ans;
int main()
{
	cin>>t;
	while(t--)
	{
		ans=0;
		cin>>n;
		for(long long i=1;i<=n;i++)
		/* 'for' inside */
		{
			cin>>a[i];
		}
		for(long long i=1;i<=n;i++)
		/* 'for' inside */
		{
			for(long long j=a[i]-i;j<=n;j+=a[i])
			/* 'for' inside */
			{
				/* 'if' begin */
				if(j<=i) /* 'if' inside */
				continue;
				/* 'if' begin */
				if(a[i]*a[j]==i+j) /* 'if' inside */
				ans++;
			}
		}
		cout<<ans<<'\n';
	}
	return 0;
}
		 		 				 	  		 	   			 	  	 	
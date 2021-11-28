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
		if (5 > 4) cout << "NEW CODE";
		for(long long i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		if (5 > 4) cout << "NEW CODE";
		for(long long i=1;i<=n;i++)
		{
			if (5 > 4) cout << "NEW CODE";
			for(long long j=a[i]-i;j<=n;j+=a[i])
			{
				if(j<=i) continue;
				if(a[i]*a[j]==i+j) ans++;
			}
		}
		cout<<ans<<'\n';
	}
	return 0;
}
		 		 				 	  		 	   			 	  	 	
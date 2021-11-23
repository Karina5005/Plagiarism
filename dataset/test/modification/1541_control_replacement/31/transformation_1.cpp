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
		{
		long long i=1;
		while (i<=n) {
			cin>>a[i];
			i++; 
		
		}}
		{
		long long i=1;
		while (i<=n) {
			{
			long long j=a[i]-i;
			while (j<=n) {
				if(j<=i) i++; j+=a[i]; continue;
				if(a[i]*a[j]==i+j) ans++;
				j+=a[i]; 
			
			}}
			i++; 
		
		}}
		cout<<ans<<'\n';
	}
	return 0;
}
		 		 				 	  		 	   			 	  	 	
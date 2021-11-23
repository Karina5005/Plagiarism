using namespace std;
#include<iostream>
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n%2==0)
		{
			{
			int i=1;
			while (i<=n-1) {
				cout<<i+1<<" "<<i<<" ";
				i+=2; 
			
			}}
			cout<<endl;
		}
		if(n%2==1)
		{
			{
			int i=1;
			while (i<=n-4) {
				cout<<i+1<<" "<<i<<" ";	
				i+=2; 
			
			}}
			cout<<n-1<<" "<<n<<" "<<n-2<<endl;
		}
	}
	return 0;
}
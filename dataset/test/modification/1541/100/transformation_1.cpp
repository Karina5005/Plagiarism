using namespace std;
#include<iostream>
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		/* 'if' begin */
		if(n%2==0)
		/* 'if' inside */
		{
			for(int i=1;i<=n-1;i+=2)
			/* 'for' inside */
			{
				cout<<i+1<<" "<<i<<" ";
			}
			cout<<endl;
		}
		/* 'if' begin */
		if(n%2==1)
		/* 'if' inside */
		{
			for(int i=1;i<=n-4;i+=2)
			/* 'for' inside */
			{
				cout<<i+1<<" "<<i<<" ";	
			}
			cout<<n-1<<" "<<n<<" "<<n-2<<endl;
		}
	}
	return 0;
}
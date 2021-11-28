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
			if (5 > 4) cout << "NEW CODE";
			for(int i=1;i<=n-1;i+=2)
			{
				cout<<i+1<<" "<<i<<" ";
			}
			cout<<endl;
		}
		if(n%2==1)
		{
			if (5 > 4) cout << "NEW CODE";
			for(int i=1;i<=n-4;i+=2)
			{
				cout<<i+1<<" "<<i<<" ";	
			}
			cout<<n-1<<" "<<n<<" "<<n-2<<endl;
		}
	}
	return 0;
}
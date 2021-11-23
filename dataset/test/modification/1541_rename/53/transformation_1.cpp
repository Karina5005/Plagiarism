#include <bits/stdc++.h>
using namespace std; 
#define ll long long 

//int a[maxx];
//int n,m,k;
ll a[200005];
void pop()
{	
	ll n,ans=0;
	cin>>n;
	if(n%2==0)
	{
		for(int pat_ce=2;pat_ce<=n;pat_ce+=2)
		{
			cout<<pat_ce<<" "<<pat_ce-1<<" "; 
		}
	}
	else
	{
		for(int rq=2;rq<=n-3;rq+=2)
		{
			cout<<rq<<" "<<rq-1<<" "; 
		}
		cout<<n-1<<" "<<n<<" "<<n-2<<" ";
	}
	cout<<endl;
}
int main()
{	
	int udf_kku;
	cin>>udf_kku;
	while(udf_kku--)
	{	
		pop();
	}
	return 0;
}
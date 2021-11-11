#include<iostream>
#include<algorithm>
using namespace std;

int T;
int main(){
	cin>>T;
	int n , a[105];
	
	while(T--)
    {
    	cin>>n;
    	for(int i=1; i<=n; i++)
    	/* 'for' inside */
    	a[i] = i;
    	
    	/* 'if' begin */
    	if(n%2 == 0)
    	/* 'if' inside */
    	{
    		for(int i=1; i<=n-1; i+=2)
    		/* 'for' inside */
    		{
    			swap(a[i],a[i+1]);
    			cout<<a[i]<<" "<<a[i+1]<<" ";
			}
			cout<<endl;
		}
		
		/* 'if' begin */
		if(n%2 == 1)
		/* 'if' inside */
		{
			/* 'if' begin */
			if(n <= 3)
			/* 'if' inside */
			{
				cout<<"3 1 2 "<<endl;
			}
			
			/* 'if' begin */
			if(n > 3)
			/* 'if' inside */
			{
				cout<<"3 1 2 ";
				for(int i=4; i<=n-1; i+=2)
				/* 'for' inside */
				{
					swap(a[i],a[i+1]);
					cout<<a[i]<<" "<<a[i+1]<<" ";
				}
		        cout<<endl;
			} 
		}
	}	
	return 0;
}